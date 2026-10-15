/* Functions from 0x80272F0C to 0x80272F28, found by decomp-toolkit. */
#include "common.h"
extern void *lbl_8035B7E4;

void fn_80272F0C(void *arg0) {
    void *temp_r4 = *(void **)((char *)lbl_8035B7E4 + 0x4);
    if (temp_r4 != NULL) {
        *(s32 *)((char *)arg0 + 0x80) = *(s32 *)((char *)temp_r4 + 0x4);
    }
}
