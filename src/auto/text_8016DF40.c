// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 __dt__9C8015FE00Fv[];
extern u8 fn_80135CB0[];
extern u8 __ct__9C8015FE00Fv[];
extern u8 fn_8016E084[];
extern u8 lbl_802E6EB8[];
extern u8 lbl_802E7CC4[];
void __construct_array();
void __ct__9C800F92E8Fv();
void fn_80131C34();
void __ct__9C8013644CFv();
void __ct__9C80157658Fv();
void __ct__9C80158A08Fv();
void __ct__9C801599F4Fv();
void __ct__9C8015B350Fv();
void __ct__9C8015E11CFv();
void __ct__9C8016096CFv();
void __ct__9C80165F70Fv();
void fn_8016CC50();
void __ct__9C80171288Fv();
void __ct__9C80179B00Fv();
void __ct__9C80218720Fv();

s32 __ct__9C8016DF40Fv(s32 param_1) {
    __ct__9C8013644CFv();
    *(u8 **)(param_1 + 0x30) = lbl_802E7CC4;
    __ct__9C8015B350Fv(param_1 + 0x348);
    __ct__9C80157658Fv(param_1 + 0x3b8);
    __ct__9C80165F70Fv(param_1 + 0x410);
    __ct__9C80158A08Fv(param_1 + 0x1f44);
    __ct__9C80171288Fv(param_1 + 0x27b8);
    fn_80131C34(param_1 + 0x2998);
    *(u8 **)(param_1 + 0x2998) = lbl_802E6EB8;
    __ct__9C801599F4Fv(param_1 + 0x29a0);
    __ct__9C8016096CFv(param_1 + 0x2a1c);
    __ct__9C800F92E8Fv(param_1 + 0x2a64);
    __ct__9C8015E11CFv(param_1 + 0x32a4);
    __ct__9C8015E11CFv(param_1 + 14000);
    __ct__9C80179B00Fv(param_1 + 0xbf10);
    __ct__9C80179B00Fv(param_1 + 0xbf20);
    __construct_array(param_1 + 0xbf30,fn_8016E084,0,0x28,2000);
    __ct__9C8015E11CFv(param_1 + 0x1f7b0);
    __construct_array(param_1 + 0x23fc8,__ct__9C8015FE00Fv,__dt__9C8015FE00Fv,100,0x80);
    __construct_array(param_1 + 0x271c8,fn_80135CB0,0,0x10,0x80);
    __ct__9C80218720Fv(param_1 + 0x27a0c);
    *(u32 *)(param_1 + 0x33c) = 0;
    fn_8016CC50(param_1);
    return param_1;
}
