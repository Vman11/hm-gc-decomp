// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { f32 x, y, z; } Vec;
typedef struct E12 { u32 f0; u32 f4; u32 f8; } E12;
typedef struct Q9C { u8 pad[0x30]; void *f30; } Q9C;
typedef struct QE0 { u8 pad[0x9C]; Q9C *f9C; } QE0;
typedef struct P80240DEC {
    u8 pad0[0xA4]; u32 *fA4; u8 padA8[0xCC - 0xA8]; E12 *fCC; u8 padD0[4]; u32 *fD4;
    u8 padD8[0xE0 - 0xD8]; QE0 *fE0; u8 padE4[0x108 - 0xE4]; void *f108;
} P80240DEC;
u32 rand(void);
void fn_80107244(void *, Vec *);
void fn_802482F8(void *, s32, u32);
void fn_802488C4(void *, u32, s32, Vec *, u32, f32);
extern f32 lbl_8036613C;
extern f32 lbl_80366198;

void fn_80240DEC(P80240DEC *p, s32 chance, s32 lo, s32 hi) {
    u32 range;
    s32 r;
    u32 b;
    u32 a;
    void *obj;
    Vec v;
    if ((s32)(rand() % 100) < chance) {
        r = 0;
        range = hi - lo + 1;
        if (range != 0) {
            r = rand() % range;
        }
        a = p->fCC[lo + r].f8;
        b = p->fD4[lo + r];
        if (p->f108 != 0) {
            obj = p->fE0->f9C->f30;
            if (obj != 0) {
                fn_80107244(obj, &v);
            } else {
                v.x = lbl_8036613C;
                v.y = lbl_8036613C;
                v.z = lbl_8036613C;
            }
            if (p->fA4 != 0) {
                fn_802482F8(p->f108, 0, *p->fA4);
            } else {
                fn_802482F8(p->f108, 0, 2);
            }
            fn_802488C4(p->f108, b, 0, &v, a, lbl_80366198);
        }
    }
}

} /* extern "C" */
