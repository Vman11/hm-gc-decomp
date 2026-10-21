// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_8035AD70;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7E98(void);
void fn_800F7EC0(u32);
void fn_80102E34(void *);
void fn_80102EC0(void *, u32);
struct C8017B3C0 { u8 pad[0x3c]; C8017B3C0(); };

#pragma opt_propagation off
inline void fn_8017A984_set(u32 *param_1, u32 param_2) {
    if (param_1[2] != 0) {
        delete[] (C8017B3C0 *)param_1[2];
        param_1[2] = 0;
        fn_80102E34(param_1 + 3);
    }
    param_1[1] = param_2;
    if (param_1[1] != 0) {
        if (lbl_8035AD70 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035AD70);
        param_1[2] = (u32) new C8017B3C0[param_1[1]];
        fn_800F7E98();
        if (param_1[2] == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
    }
    if (param_1[1] > 1 && *param_1 != 0) {
        fn_80102EC0(param_1 + 3, *param_1);
    }
}

void fn_8017A984(u32 *param_1, u32 *param_2) {
    bool b;
    u32 a;
    u32 n;

    b = false;
    if (*param_1 != 0 || param_1[2] != 0) {
        b = true;
    }
    if (b) {
        fn_80102E34(param_1 + 3);
        if (param_1[2] != 0) {
            delete[] (C8017B3C0 *)param_1[2];
        }
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
    }
    a = *param_2;
    n = param_2[1];
    *param_1 = a;
    fn_8017A984_set(param_1, n);
}
#pragma opt_propagation reset

} /* extern "C" */
