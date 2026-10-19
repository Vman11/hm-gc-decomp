/* Functions from 0x80046E50 to 0x80046EDC, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern "C" {

}


extern "C" int fn_80046E50(void *arg0, u32 arg1) {
    void *p = *(void **)((u8 *)arg0 + 0x98);
    if (p != NULL) {
        return (*(int **)((u8 *)p + 0xC))[arg1];
    }
    switch (arg1) {
    case 0: return 0;
    case 1: return 1;
    case 2: return 0;
    case 3: return 1;
    case 4: return 0;
    case 5: return 0;
    case 6: return 0;
    case 7: return 0;
    case 8: return 1;
    default: return 1;
    }
}

} /* extern "C" */
