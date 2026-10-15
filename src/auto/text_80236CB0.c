/* Functions from 0x80236CB0 to 0x80236D24, found by decomp-toolkit. */
#include "common.h"
extern f32 lbl_80365EFC;
extern f32 lbl_80365F04;

void fn_80236CB0(u8* arg0, s32 arg1) {
    u8* obj;
    u8* tgt;

    if (arg1 == 1) {
        *(s32*)(arg0 + 0x204) = 1;
        if (*(u8**)(arg0 + 0x208) != NULL && (tgt = *(u8**)(arg0 + 0xA0)) != NULL) {
            *(u8**)(tgt + 0x7C) = *(u8**)(arg0 + 0x208);
            obj = *(u8**)(arg0 + 0x208);
            *(f32*)(obj + 0x18) = lbl_80365EFC;
            *(f32*)(obj + 0x1C) = lbl_80365EFC;
            *(f32*)(obj + 0x20) = lbl_80365F04;
        }
    } else {
        *(s32*)(arg0 + 0x204) = 0;
        if (*(u8**)(arg0 + 0x208) != NULL && (tgt = *(u8**)(arg0 + 0xA0)) != NULL) {
            *(u8**)(tgt + 0x7C) = NULL;
        }
    }
}
