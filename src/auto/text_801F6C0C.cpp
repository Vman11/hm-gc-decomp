// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern f32 lbl_803654C8;

typedef struct { u32 v[2]; } T8;
typedef struct { f32 x, y; } V2;

typedef struct {
    u8 pad0[36];
    f32 f36;
    f32 f40;
    u8 pad1[64 - 44];
    T8 f64;
    T8 f72;
    u8 pad2[84 - 80];
    void *f84;
} Sub;

typedef struct {
    u8 pad[216];
    void *f216;
} Ctx;

typedef struct {
    u8 pad0[8];
    Ctx *f8;
    s32 f12;
    u8 pad1[36 - 16];
    u32 flags;
    u8 f40[16];
    T8 f56;
    T8 f64;
    V2 f72;
    f32 f80;
    f32 f84;
    u8 pad2[120 - 88];
    Sub *f120;
    void *f124;
} Obj;

void fn_80121D44(void *a, void *b);
void fn_8019BA24(void *a, Sub *b);
void fn_8019B990(void *a, Sub *b);

static inline bool IsZero(const V2 *v) { return lbl_803654C8 == v->x && lbl_803654C8 == v->y; }

void fn_801F6C0C(Obj *p) {
    if (p->flags & 2) {
        fn_80121D44(p->f40, &p->f120->f64);
        if (p->f124 != 0) {
            p->f120->f84 = p->f124;
        }
        if (!IsZero(&p->f72)) {
            Sub *q = p->f120;
            q->f36 = p->f72.x;
            q->f40 = p->f72.y;
        }
        p->f84 = p->f80;
        if (lbl_803654C8 == p->f80) {
            Sub *q = p->f120;
            q->f64 = p->f56;
            q->f72 = p->f64;
        }
        if (lbl_803654C8 == p->f80) {
            if (p->f12 == 35) {
                fn_8019BA24(p->f8->f216, p->f120);
            } else {
                fn_8019B990(p->f8->f216, p->f120);
            }
        }
    }
}

} /* extern "C" */
