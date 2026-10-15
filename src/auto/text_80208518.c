/* Functions from 0x80208518 to 0x80208598, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_803657B8;
extern s32 lbl_8035B1A0;

extern s32 lbl_8035B1A0;

extern s32 lbl_8035B1A0;

s32 fn_80208518(void *arg0) {
    u32 offset;
    u32 i;
    u32 count;

    if (*(u32 *)((u8 *)arg0 + 0x4) == 0) {
        return 0;
    }
    count = *(u32 *)((u8 *)arg0 + 0x14);
    for (i = 0, offset = 0; i < count; i++) {
        if ((*(u32 *)((u8 *)(*(u8 **)arg0) + offset + 8) & 2) == 0) {
            *(u32 *)((u8 *)(*(u8 **)arg0) + i * 0x18 + 8) |= lbl_803657B8;
            return (s32)((u8 *)(*(u8 **)arg0) + i * 0x18);
        }
        offset += 0x18;
    }
    return 0;
}

void fn_80208590(s32 arg0) {
    lbl_8035B1A0 = arg0;
}
extern s32 lbl_8035B1A0;
