/* RAD Bink: 0x802876F8-0x802878C0 */
#include "bink_common.h"

void fn_802876F8(u8 *arg0, u32 size) {
    void *memcpy();
    if (lbl_80301D30 == lbl_80301D24) {
        u8 **newPtrs = (u8 **)fn_8027B6D4(lbl_80301D30 * 16);
        u32 *newSizes = (u32 *)(newPtrs + lbl_80301D30 * 2);
        memcpy(newPtrs, lbl_80301D28, lbl_80301D30 * 4);
        memcpy(newSizes, lbl_80301D2C, lbl_80301D30 * 4);
        lbl_80301D30 += lbl_80301D30;
        if (lbl_80301D30 != 64) {
            fn_8027B790(lbl_80301D28);
        }
        lbl_80301D28 = newPtrs;
        lbl_80301D2C = newSizes;
    }
    size = (size + 31) & ~31;
    size += ((((lbl_80301D20 >> 5) & 31) - ((size >> 5) & 31) + 33) & 31) << 5;
    lbl_80301D20 += size;
    lbl_80301D2C[lbl_80301D24] = size;
    lbl_80301D28[lbl_80301D24] = arg0;
    lbl_80301D24++;
}

s32 fn_80287804(void) {
    return wCa_80301D20[0];
}

u8 *wC_fn_80287810(u32 size) {
    u32 sz = (size + 31) & ~31;
    u8 *mem = fn_8027B6D4(wCa_80301D20_87810[0] + sz);
    wCa_80301D20_87810[0] = 0;
    if (mem != 0) {
        u8 *p = mem + sz;
        u32 i;
        for (i = 0; i < wCa_80301D24_87810[0]; i++) {
            *wCa_80301D28_87810[0][i] = p;
            p += wCa_80301D2C_87810[0][i];
        }
    }
    wCa_80301D24_87810[0] = 0;
    return mem;
}
