// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { void *a; s32 b, c, d, e; } P5;
typedef struct { s32 x, y; } T8;
typedef struct { u8 pad[16]; u32 count; } QH;
typedef struct { QH *h; u8 pad[8]; T8 *arr; } Q;
void fn_800F6E88(T8 *dst, T8 *src);
void fn_8023F764(void *p, void *h, P5 prm);
void fn_80242210(void *p);
void __dla__FPv(void *p);
extern const P5 lbl_8029A590;

#pragma opt_loop_invariants off
void fn_8009EB38(u8 *p) {
    if (*(void ***)(p + 324) != 0) {
        u32 i;
        for (i = 0; i < (*(Q **)(p + 320))->h->count; i++) {
            if ((*(void ***)(p + 324))[i] != 0) {
                T8 tmp;
                P5 prm;
                fn_800F6E88(&tmp, &(*(Q **)(p + 320))->arr[i]);
                prm = lbl_8029A590;
                prm.a = &tmp;
                fn_8023F764(p, &(*(void ***)(p + 324))[i], prm);
                (*(void ***)(p + 324))[i] = 0;
            }
        }
        __dla__FPv(*(void ***)(p + 324));
        *(void ***)(p + 324) = 0;
    }
    fn_80242210(p);
}
#pragma opt_loop_invariants reset

} /* extern "C" */
