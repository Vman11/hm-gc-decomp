/* Functions from 0x800F9BB4 to 0x800F9BEC, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035AA00;

void fn_800F9BB4(s32 arg0) {
    lbl_8035AA00 = arg0;
}

void *fn_800F9BBC(void **arg0) {
    void *temp = *arg0;
    if (temp != NULL) {
        while (*(void **)((char *)temp + 4) != NULL) {
            temp = *(void **)((char *)temp + 4);
        }
        return temp;
    }
    return NULL;
}

