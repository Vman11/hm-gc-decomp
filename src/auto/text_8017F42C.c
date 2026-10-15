/* Functions from 0x8017F42C to 0x8017F43C, found by decomp-toolkit. */
#include "common.h"

void fn_8017F42C(void* arg0, void* arg1) {
    *(void**)((char*)arg1 + 0x130) = *(void**)((char*)arg0 + 0x260);
    *(void**)((char*)arg0 + 0x260) = arg1;
}
