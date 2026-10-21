// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_8035AEA8;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7E98(void);
void fn_800F7EC0(u32);
void fn_801A0DE8(void);
struct C80190308 { u8 pad[0x20]; C80190308(); };
struct C8018DEB8 { u8 pad[0x90]; u32 x90; u8 pad2[0xa0 - 0x94]; C80190308 *xa0; u32 xa4; };
struct C8018DEB8_src { u8 pad[0x48]; volatile u32 x48; volatile u32 x4c; };

void fn_8018DEB8(C8018DEB8 *param_1, u32 param_2, C8018DEB8_src *param_3) {
    u32 a;
    u32 b;

    fn_801A0DE8();
    a = param_3->x48;
    b = param_3->x4c & 0xffff;
    param_1->x90 = a;
    param_1->xa4 = b;
    if (param_1->xa4 != 0) {
        if (lbl_8035AEA8 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035AEA8);
        param_1->xa0 = new C80190308[param_1->xa4];
        fn_800F7E98();
        if (param_1->xa0 == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
    }
}

} /* extern "C" */
