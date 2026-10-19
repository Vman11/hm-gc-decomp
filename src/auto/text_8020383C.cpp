/* Functions from 0x8020383C to 0x80203860, found by decomp-toolkit. */
#include "common.h"

extern "C" {

void fn_8020383C(void) {

}

void* fn_80203840(void* arg0, s32 arg1) {
    return *(u8**)((u8*)arg0 + 0x28) + arg1 * 0x60;
}

void* fn_80203850(void* arg0, s32 arg1) {
    return *(u8**)((u8*)arg0 + 0x24) + arg1 * 0xE0;
}

} /* extern "C" */
