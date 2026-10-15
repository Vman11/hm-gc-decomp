/* Functions from 0x801149C0 to 0x80114A5C, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_802E07C8[];
extern u8 lbl_802E07C8[];
s32 fn_801149D0(void *arg0, s32 arg1) { return *(s32 *)((u8 *)arg0 + 0xC) + arg1 * 4; }

u8 fn_80114A0C(void *arg0, void *arg1, s32 arg2) {
    s32 value = *(s32 *)((u8 *)arg2 + 4);
    if (value == -1) {
        return (u8)-1;
    }
    return lbl_802E07C8[(u8)value];
}
