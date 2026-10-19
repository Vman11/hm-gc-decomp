/* Functions from 0x800E24F0 to 0x800E2C68, found by decomp-toolkit. */
#include "common.h"

s32 fn_800E2B24(s32 arg0, u32 arg1, s32 arg2) {
    return (arg0 << arg2) | (arg1 >> (0x20 - arg2)) | (arg1 << (arg2 - 0x20));
}

unsigned long long fn_800E2B48(unsigned long long x, int n) { return x >> n; }

unsigned fn_800E2B6C(int hi, unsigned lo, int n) {
int left = 32-n;
int excess = n-32;
unsigned result = (lo >> n) | ((unsigned)hi << left);
int upper = hi >> excess;
if (excess > 0) result |= upper;
return result;
}
