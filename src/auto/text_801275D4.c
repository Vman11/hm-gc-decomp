/* Functions from 0x801275D4 to 0x80127658, found by decomp-toolkit. */
#include "common.h"

s32 fn_801275D4(void *arg0, u16 arg1) {
    s32 low;
    s32 high;
    s32 middle;
    u32 count;
    u16 value;
    count = M2C_FIELD(arg0, u32 *, 0xC);
    low = 0;
    high = count - 1;
    middle = count >> 1;
    while (low <= high && arg1 != (value = M2C_FIELD(arg0, u16 **, 0x54)[middle * 8 + 2])) {
        if (value > arg1) high = middle - 1;
        if (((u32)(arg1 - value) >> 31) == 0) low = middle + 1;
        middle = (low + high) >> 1;
    }
    if (low > high) return arg1 == 10 ? -1 : 0;
    return middle;
}
