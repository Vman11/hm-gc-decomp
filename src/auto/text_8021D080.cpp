#include "common.h"

struct Ev { void *p; u32 k; };
struct L { Ev *a; u32 cap; u32 n; };
struct Lis { s32 on; virtual void l0(); virtual void l1(); virtual void l2(); virtual void l3(); virtual void fire(void *p, u32 k, u32 c); };
struct Tr { u32 off; u32 base; u16 n; u16 c; };
struct K8 { u8 d[8]; };
struct O { u8 pad[40]; u16 *keys; u8 pad2[12]; K8 *ev; };
static inline void push(L *l, void *e, u32 k) {
    if (l->n < l->cap) {
        l->a[l->n].p = e;
        l->a[l->n++].k = k;
    }
}
extern "C" {

void fn_8021D080(O *o, Tr *tr, f32 t0, s32 len, L *list, Lis *lis, f32 t1) {
    u16 *last;
    u16 *p;
    u16 *first;
    u32 idx;
    first = o->keys + tr->off;
    last = first + tr->n - 1;
    if (t0 <= (s32)first[0]) {
        idx = tr->base;
        p = first;
    } else if (t0 > (s32)*last) {
        if (t1 >= t0) return;
        idx = tr->base;
        p = first;
    } else {
        u16 *lo = first;
        u16 *hi = last;
        while (lo + 1 != hi) {
            u16 *mid = lo + (((s32)hi - (s32)lo) / 2 >> 1);
            f32 v = (s32)*mid;
            if (v > t0) hi = mid;
            else if (v < t0) lo = mid;
            else {
                while (--mid >= first) { if ((s32)*mid != t0) break; }
                hi = mid + 1;
                break;
            }
        }
        p = hi;
        idx = tr->base + (hi - first);
    }
    while (t1 > (s32)*p) {
        if (list) push(list, &o->ev[idx], *p);
        if (lis && lis->on) lis->fire(&o->ev[idx], *p, tr->c);
        p++;
        idx++;
        if (p > last) {
            t1 -= len;
            p = first;
            idx = tr->base;
        }
    }
}
} /* extern "C" */
