// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E7090[];
void __dla__FPv(int);
void __dl__FPv(int);
void __dt__9C80134094Fv(int, int);
extern void *memset(void *, int, unsigned long);

u16 * fn_80161108(u16 *param_1, s16 param_2) {
    if (param_1 != (u16 *)0x0) {
        *(u8 **)(param_1 + 2) = lbl_802E7090;
        if (*(void **)(param_1 + 0xc) != 0) {
            __dla__FPv((int)(*(void **)(param_1 + 0xc)));
        }
        *param_1 = 0;
        param_1[1] = 0;
        *(u32 *)(param_1 + 10) = 0;
        memset(param_1 + 4,0,0xc);
        *(u32 *)(param_1 + 0xc) = 0;
        __dt__9C80134094Fv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}

} /* extern "C" */
