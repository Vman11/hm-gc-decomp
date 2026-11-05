#include "common.h"
extern "C" {
struct Ent { u32 size; u16 tag; u16 pad; };
struct Ring {
    Ent ent[50];
    u8 *base;
    u32 cap;
    u32 head;
    u32 used;
    u32 start;
    u32 count;
    u32 res;
    u32 p428;
    u16 tag;
    u16 last;
};
u16 fn_800D665C(void);
void fn_800D5F10(void);

static inline BOOL done(Ring *r, Ent *e, u16 t) {
    if (e->tag < t) return TRUE;
    if (t < r->last) return (e->tag & 0xC000) != 0;
    return FALSE;
}

static inline u32 dist(u32 sz, u32 pos, u32 cap) { u32 d = sz - pos; if (sz < pos) d = sz + (cap - pos); return d; }
static inline u32 avail(Ring *r) {
    u32 a = r->cap - r->head;
    if (r->used == r->cap) {
        a = r->cap;
    } else if (r->used < a) {
        a = r->used;
    } else {
        u32 b = r->used - a;
        if (b >= a) a = b;
    }
    return a;
}
static inline void take(Ring *r, u32 size) {
    u32 rem = r->cap - r->head;
    if (size <= rem) {
        r->res = r->head;
        r->head = r->res + size;
        r->used -= size;
    } else {
        r->res = 0;
        r->head = size;
        r->used -= rem + size;
    }
}
static inline void poll(Ring *r) {
    u16 t = fn_800D665C();
    if (r->count < 50) {
        u32 idx = (r->start + r->count) % 50;
        while (done(r, &r->ent[idx], t)) {
            r->count++;
            {
                u32 d = dist(r->ent[idx].size, (r->head + r->used) % r->cap, r->cap);
                idx = (idx + 1) % 50;
                r->used += d;
            }
            if (r->count == 50) break;
        }
    }
    r->last = t;
}

u8 *fn_8021820C(Ring *r, u32 size, u32 p) {
    u32 a;
    size = (size + 31) & ~31;
    r->p428 = p;
    do {
        poll(r);
        a = avail(r);
    } while (a < size);
    if (r->used == r->cap) r->head = 0;
    take(r, size);
    if (r->res == 0) fn_800D5F10();
    {
        u32 idx;
        u16 tag;
        u32 h;
        h = r->head;
        tag = r->tag;
        idx = (r->start + 1) % 50;
        while (r->count == 0) poll(r);
        r->ent[r->start].tag = tag;
        r->ent[r->start].size = h;
        r->start = idx;
        r->count--;
    }
    return r->base + r->res;
}
}
