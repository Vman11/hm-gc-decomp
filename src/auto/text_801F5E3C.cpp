// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EE9B8[];
extern u8 lbl_802EEA50[];
extern u8 lbl_802EEA28[];
extern u8 lbl_802EE918[];
void __dl__FPv(void *);

u8 *__dt__9C801F5F94Fv(u8 *p, s16 flag) {
    if (p != 0) {
        *(u8 **)(p + 12) = lbl_802EE9B8;
        *(u8 **)(*(u8 **)p + 4) = lbl_802EE9B8 + 76;
        *(u8 **)(**(u8 ***)p + 4) = lbl_802EE9B8 + 64;
        **(u8 ***)**(u8 ***)p = lbl_802EE9B8 + 36;
        *(s32 *)(*(u8 **)**(u8 ***)p + 16) = (p + 16) - *(u8 **)**(u8 ***)p;
        *(s32 *)(**(u8 ***)p + 8) = (p + 36) - **(u8 ***)p;
        *(s32 *)(*(u8 **)p + 20) = (p + 48) - *(u8 **)p;
        if (flag != 0) {
            if (p + 48 != 0) {
                *(u8 **)(p + 52) = lbl_802EEA50;
                *(u8 **)(*(u8 **)(p + 48) + 4) = lbl_802EEA50 + 64;
                **(u8 ***)*(u8 **)(p + 48) = lbl_802EEA50 + 36;
                *(s32 *)(**(u8 ***)(p + 48) + 16) = (p + 68) - **(u8 ***)(p + 48);
                *(s32 *)(*(u8 **)(p + 48) + 8) = (p + 88) - *(u8 **)(p + 48);
            }
            if (p + 36 != 0) {
                *(u8 **)(p + 40) = lbl_802EEA28;
                **(u8 ***)(p + 36) = lbl_802EEA28 + 12;
                *(s32 *)(*(u8 **)(p + 36) + 16) = (p + 44) - *(u8 **)(p + 36);
            }
            if (p + 16 != 0) {
                *(u8 **)(p + 16) = lbl_802EE918;
            }
        }
        if (flag > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
