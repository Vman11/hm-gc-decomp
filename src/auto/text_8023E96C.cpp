#include "common.h"
extern "C" {
__declspec(section ".sdata2") char lbl_80366118[4] = {0};
__declspec(section ".sdata2") f32 lbl_8036611C = 0.001f;
}
#define lbl_80366118 (*(f32 *)lbl_80366118)
namespace m8023E96C {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void *memcpy(void *, const void *, u32);

static inline u8 *find_8023E96C(u8 *p) {
    s32 i;
    for (i = 0; i < 128; i++) {
        if (*(s32 *)(p + i * 100 + 0x2804) != 0) {
            return p + i * 100 + 0x27F4;
        }
    }
    return 0;
}

void *fn_8023E96C(u8 *p, s32 a, void *src, u32 n, s32 b, s32 c, f32 x, f32 y) {
    u8 *e = find_8023E96C(p);
    if (e == 0) {
        return 0;
    }
    *(f32 *)e = x;
    *(s32 *)(e + 0xC) = b;
    *(s32 *)(e + 0x10) = 0;
    *(s32 *)(e + 0x14) = 0;
    *(s32 *)(e + 0x1C) = a;
    *(s32 *)(e + 8) = c;
    if (lbl_80366118 == y) {
        *(f32 *)(e + 4) = x;
    } else {
        *(f32 *)(e + 4) = y;
    }
    memcpy(e + 0x20, src, n);
    *(u32 *)(e + 0x60) = n;
    *(void **)(e + 0x18) = *(void **)(p + 0x59F4);
    *(u8 **)(p + 0x59F4) = e;
    return e;
}

} /* extern "C" */

} /* namespace m8023E96C */

namespace m8023EA4C {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

s32 fn_800FBB9C(void);
struct Timer_8023EA4C {
    f32 time;
    f32 reset;
    s32 count;
    void (*cb)(void *, void *, void *);
    s32 dead;
    s32 paused;
    struct Timer_8023EA4C *next;
    void *arg;
    u8 data[96 - 32];
    void *arg2;
};
struct Mgr_8023EA4C {
    u8 pad0[4];
    s32 last;
    s32 prev;
    s32 now;
    s32 dt;
    f32 fscaled;
    f32 fdt;
    u8 pad1C[10220 - 28];
    f32 scale;
    u32 flags;
    u8 pad27F0[23028 - 10228];
    Timer_8023EA4C *head;
};
static inline void remove_8023EA4C(Mgr_8023EA4C *m, Timer_8023EA4C *t) {
    Timer_8023EA4C *head = m->head;
    Timer_8023EA4C *p = head;
    Timer_8023EA4C *prev = head;
    while (t != p && p != NULL) {
        prev = p;
        p = p->next;
    }
    if (p != NULL) {
        if (p == head) {
            m->head = head->next;
        } else {
            prev->next = p->next;
        }
        p->dead = 1;
    }
}
void fn_8023EA4C(Mgr_8023EA4C *m) {
    Timer_8023EA4C *n;
    Timer_8023EA4C *t;
    f32 v;
    f32 s;

    m->dt = fn_800FBB9C() - m->last;
    if (m->dt < 0) {
        m->dt = 0;
    }
    m->last = m->last + m->dt;
    if (!(m->flags & 1)) {
        m->dt = -m->dt;
    }
    if (m->dt > 100) {
        m->dt = 100;
    }
    m->prev = m->now;
    m->fdt = m->dt;
    v = m->fdt;
    s = v * m->scale;
    m->fdt = v * lbl_8036611C;
    m->fscaled = lbl_8036611C * s;
    m->now += (s32)s;
    n = m->head;
    while (n != NULL) {
        if (n->paused == 0 && !(m->flags & 2)) {
            t = n;
            t->time -= m->fdt;
            n = t->next;
            if (t->time <= lbl_80366118) {
                if (t->count == -1) {
                    t->time = t->reset;
                } else if (t->count > 0) {
                    t->count--;
                    t->time = t->reset;
                } else {
                    remove_8023EA4C(m, t);
                }
                t->cb(t->arg, t->data, t->arg2);
            }
        } else {
            n = n->next;
        }
    }
}

} /* extern "C" */

} /* namespace m8023EA4C */
