/* Functions from 0x800F8CD8 to 0x800F8DD0, found by decomp-toolkit. */
#include "common.h"

extern "C" {

s32 fn_800F8CD8(void *arg0, char *arg1) {
 u32 value = arg1[0];
 u32 shift = 7;
 int i;
 for (i = 1; i < 8; i++) {
 if (!arg1[i]) break;
 value += arg1[i] << shift;
 shift = (shift + 7) & 31;
 }
 return value % ((u32 *)arg0)[1];
}

} /* extern "C" */
