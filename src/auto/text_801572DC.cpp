// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __dt__9C8016096CFv[];
extern u8 __dt__9C801717DCFv[];
extern u8 __dt__9C8015749CFv[];
extern u8 __dt__9C8015AF9CFv[];
extern u8 __dt__9C8015C244Fv[];
extern u8 __dt__9C8015C918Fv[];
extern u8 __dt__9C80163568Fv[];
extern u8 __dt__9C8016E3BCFv[];
extern u8 __dt__9C801784C4Fv[];
extern u8 __dt__9C80179E1CFv[];
void fn_800E1E88(int, int);
void fn_80129C48(int);

void fn_801572DC(s32 param_1) {
    if (*(u32 *)(param_1 + 0xcc) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0xcc)), (int)(__dt__9C8015749CFv));
    }
    if (*(u32 *)(param_1 + 200) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 200)), (int)(__dt__9C80163568Fv));
    }
    if (*(u32 *)(param_1 + 0xc4) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0xc4)), (int)(__dt__9C801784C4Fv));
    }
    if (*(u32 *)(param_1 + 0xc0) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0xc0)), (int)(__dt__9C8015C244Fv));
    }
    if (*(u32 *)(param_1 + 0xbc) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0xbc)), (int)(__dt__9C8015AF9CFv));
    }
    if (*(u32 *)(param_1 + 0xb8) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0xb8)), (int)(__dt__9C8015C918Fv));
    }
    if (*(u32 *)(param_1 + 0xb4) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0xb4)), (int)(__dt__9C8016096CFv));
    }
    if (*(u32 *)(param_1 + 0xb0) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0xb0)), (int)(__dt__9C80179E1CFv));
    }
    if (*(u32 *)(param_1 + 0xac) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0xac)), (int)(__dt__9C8016E3BCFv));
    }
    if (*(u32 *)(param_1 + 0xa8) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0xa8)), (int)(__dt__9C801717DCFv));
    }
    fn_80129C48((int)(param_1));
    *(u32 *)(param_1 + 0xa8) = 0;
    *(u32 *)(param_1 + 0xac) = 0;
    *(u32 *)(param_1 + 0xb0) = 0;
    *(u32 *)(param_1 + 0xb4) = 0;
    *(u32 *)(param_1 + 0xb8) = 0;
    *(u32 *)(param_1 + 0xbc) = 0;
    *(u32 *)(param_1 + 0xc0) = 0;
    *(u32 *)(param_1 + 0xc4) = 0;
    *(u32 *)(param_1 + 200) = 0;
    *(u32 *)(param_1 + 0xcc) = 0;
}

} /* extern "C" */
