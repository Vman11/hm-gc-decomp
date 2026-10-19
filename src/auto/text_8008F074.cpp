/* Functions from 0x8008F074 to 0x8008F0F8, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern "C" {

}


extern "C" int fn_8008F074(void *arg0, u32 arg1) {
    void *p = *(void **)((u8 *)arg0 + 0x98);
    if (p != NULL) {
        return (*(int **)((u8 *)p + 0xC))[arg1];
    }
    switch (arg1) {
    case 0: return 1;
    case 1: return 1;
    case 2: return 1;
    case 3: return 1;
    case 4: return 1;
    case 5: return 1;
    case 6: return 1;
    case 7: return 1;
    default: return 1;
    }
}

} /* extern "C" */
