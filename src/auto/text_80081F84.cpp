// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u32 a; u32 b; } T8_80081F84;
typedef struct { u8 pad[12]; T8_80081F84 *arr; } S170_80081F84;
typedef struct { void *p; s32 a; s32 b; s32 c; s32 d; } T20_80081F84;
extern T20_80081F84 lbl_80298B0C;
void __dl__FPv(void *);
void __dla__FPv(void *);
void fn_800F6E88(void *, void *);
void fn_8023F764(void *, void **, T20_80081F84);
void fn_80242210(void *);

void fn_80081F84(u8 *p) {
    u32 i;
    u8 buf[8];
    if (*(s32 *)(p + 0x1b0) == 0 && *(void **)(p + 0x1b8) != 0) {
        __dl__FPv(*(void **)(p + 0x1b8));
        *(void **)(p + 0x1b8) = 0;
    }
    if (*(void ***)(p + 0x178) != 0) {
        for (i = 0; i < *(u32 *)(p + 0x174); i++) {
            if ((*(void ***)(p + 0x178))[i] != 0) {
                fn_800F6E88(buf, &(*(S170_80081F84 **)(p + 0x170))->arr[i]);
                {
                    T20_80081F84 t = lbl_80298B0C;
                    t.p = buf;
                    fn_8023F764(p, &(*(void ***)(p + 0x178))[i], t);
                }
                (*(void ***)(p + 0x178))[i] = 0;
            }
        }
        __dla__FPv(*(void **)(p + 0x178));
        *(void **)(p + 0x178) = 0;
    }
    fn_80242210(p);
}

} /* extern "C" */
