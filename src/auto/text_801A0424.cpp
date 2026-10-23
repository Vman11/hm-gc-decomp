// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern volatile f32 lbl_80364D80;
} /* extern "C" */
struct E801A0424 { f32 x; f32 y; f32 z; };
struct B801A0424 { u8 pad[104]; E801A0424 arr[8]; u8 pad2[8]; u32 n; };
struct V801A0424 {
    u8 pad[8];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6(const B801A0424 *b, void *c);
};
struct T801A0424 { u8 pad[12]; V801A0424 *f12; V801A0424 *f16; f32 f20; };
extern "C" {

void fn_801A0424(T801A0424 *t, const B801A0424 *b, void *c) {
    u32 i = 1;
    u32 n;
    f32 base;
    if (b->arr[0].x - t->f20 < lbl_80364D80) {
        t->f16->v6(b, c);
        base = t->f20;
        n = b->n;
        do {
            if (b->arr[i].x - base >= lbl_80364D80) {
                t->f12->v6(b, c);
                return;
            }
        } while (++i < n);
    } else {
        t->f12->v6(b, c);
        base = t->f20;
        n = b->n;
        do {
            if (b->arr[i].x - base < lbl_80364D80) {
                t->f16->v6(b, c);
                return;
            }
        } while (++i < n);
    }
}

} /* extern "C" */
