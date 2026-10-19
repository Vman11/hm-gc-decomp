// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802C33F8[];
void __ct__9C8024262CFv(void);

u32 * fn_8007EC14(u32 *param_1) {
    __ct__9C8024262CFv();
    *param_1 = (u32)lbl_802C33F8;
    param_1[0x15] = 10;
    param_1[0xb] = 10;
    param_1[0x1a] = 4;
    param_1[0x17] = 0;
    param_1[0x20] = 1;
    param_1[0x1f] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 1;
    param_1[0x23] = 1;
    param_1[0x25] = 0;
    param_1[0x43] = 0;
    param_1[0x66] = 0;
    param_1[0x46] = 0;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    param_1[0x52] = 0;
    param_1[0x53] = 0;
    param_1[0x54] = 0;
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x57] = 0;
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    param_1[0x56] = 0;
    param_1[0x5a] = 0;
    param_1[0x5b] = 1;
    param_1[0x5c] = 1;
    param_1[0x5d] = 0;
    param_1[0x5e] = 0;
    param_1[0x5f] = 0;
    param_1[0x60] = 10;
    param_1[0x61] = 0x20;
    param_1[0x62] = 0;
    param_1[99] = 0;
    param_1[0x65] = 0xffffffff;
    param_1[0x55] = 0;
    param_1[100] = 0;
    return param_1;
}

} /* extern "C" */
