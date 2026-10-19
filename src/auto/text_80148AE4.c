// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 __ct__9C80121E80Fv[];
extern u8 lbl_802E6488[];
void __construct_array();
void fn_80148310();
void __ct__9C80210CECFv();

u8 * __ct__9C80148AE4Fv(u8 *param_1) {
    *(u8 **)(param_1 + 0x53c) = lbl_802E6488;
    fn_80148310(param_1 + 0x1c);
    __ct__9C80210CECFv(param_1 + 0x30);
    __construct_array(param_1 + 0x3c,__ct__9C80121E80Fv,0,4,0x100);
    *param_1 = 0;
    *(u32 *)(param_1 + 0x10) = 0;
    *(u32 *)(param_1 + 0x14) = 0;
    *(u32 *)(param_1 + 0x18) = 0;
    *(u32 *)(param_1 + 0x38) = 0;
    return param_1;
}
