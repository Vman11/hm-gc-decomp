/* Functions from 0x8020B114 to 0x8020B224, found by decomp-toolkit. */
#include "common.h"

s32 fn_8020B1E0(s32 arg0) {
    switch (arg0) {
    case 0:
    case 10:
        return 0;
    case -1:
    case 4:
    case 5:
    case 6:
    case 11:
        return 7;
    case 1:
    case 2:
        return 7;
    default:
        return 3;
    }
}
