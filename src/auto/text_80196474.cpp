// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dl__FPv(void *);
void fn_8014AAE4(u32 *);
struct VCall_fn_80196474_0 { virtual void p0(); virtual void m(u32 **); };
struct C80196474_8 { u8 pad[4]; C80196474_8(); };

u32 *__dt__9C80196530Fv(u32 *param_1, s16 param_2) {
    u32 **o;

    if (param_1 != 0) {
        o = (u32 **)*param_1;
        if (o != 0) {
            (*(VCall_fn_80196474_0 **)*o)->m(o);
        }
        if (param_1[2] != 0) {
            delete[] (C80196474_8 *)param_1[2];
        }
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        fn_8014AAE4(param_1 + 7);
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        if (param_2 > 0) {
            __dl__FPv(param_1);
        }
    }
    return param_1;
}

} /* extern "C" */
