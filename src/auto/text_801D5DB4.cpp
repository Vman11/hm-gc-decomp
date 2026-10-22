// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80365188;
void fn_801DB744(void *);
void fn_801C4B28(void *, s32);
void fn_801BD8A0(void *, s32, s32, void *, f32);
void fn_801D1FBC(void *);

s32 fn_801D5DB4(u8 *p) {
    fn_801DB744(p);
    M2C_FIELD(p, s32 *, 804) = 1;
    if (M2C_FIELD(p, void **, 732) != 0) {
        fn_801C4B28(M2C_FIELD(p, void **, 732), 0);
    }
    if (M2C_FIELD(p, void **, 736) != 0) {
        fn_801C4B28(M2C_FIELD(p, void **, 736), 0);
    }
    if (M2C_FIELD(p, void **, 732) != 0) {
        if (M2C_FIELD(p, u8 *, 816) & 1) {
            fn_801BD8A0(M2C_FIELD(p, void **, 732), 0, 8, p, M2C_FIELD(p, f32 *, 740));
        } else {
            fn_801BD8A0(M2C_FIELD(p, void **, 732), 0, 4, p, M2C_FIELD(p, f32 *, 740));
        }
        fn_801BD8A0(M2C_FIELD(p, void **, 732), 1, 64, p, lbl_80365188);
        fn_801BD8A0(M2C_FIELD(p, void **, 732), 2, 2048, p, lbl_80365188);
    }
    if (M2C_FIELD(p, void **, 736) != 0) {
        if (M2C_FIELD(p, u8 *, 816) & 8) {
            fn_801BD8A0(M2C_FIELD(p, void **, 736), 0, 256, p, M2C_FIELD(p, f32 *, 744));
        } else {
            fn_801BD8A0(M2C_FIELD(p, void **, 736), 0, 512, p, M2C_FIELD(p, f32 *, 744));
        }
        fn_801BD8A0(M2C_FIELD(p, void **, 736), 1, 1, p, lbl_80365188);
        fn_801BD8A0(M2C_FIELD(p, void **, 736), 2, 32, p, lbl_80365188);
    }
    fn_801D1FBC(p);
    M2C_FIELD(p, s32 *, 356) = 0;
    return 0;
}

} /* extern "C" */
