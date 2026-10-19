/* Functions from 0x802539FC to 0x80253A48, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern f32 lbl_803665A8;

f32 fn_802539FC(void* arg0) {
    s32* index = *(s32**)((u8*)arg0 + 0x2cc);
    if (index != NULL) {
        f32* values = *(f32**)((u8*)arg0 + 0x2d0);
        if (values != NULL) {
            return values[*index];
        }
    }
    return lbl_803665A8;
}

void fn_80253A2C(void) {

}

void fn_80253A30(void) {

}

void fn_80253A34(void) {

}

void fn_80253A38(void) {

}

void fn_80253A3C(void) {

}

void fn_80253A40(void) {

}

void fn_80253A44(void) {

}

} /* extern "C" */
