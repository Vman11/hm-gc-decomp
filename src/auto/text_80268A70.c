/* Functions from 0x80268A70 to 0x80268A8C, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_80366D50;

f32 fn_80268A70(void *arg0) {
    f32 *value = *(f32 **)((u8 *)arg0 + 0x544);
    if (value != 0) {
        return *value;
    }
    return lbl_80366D50;
}
