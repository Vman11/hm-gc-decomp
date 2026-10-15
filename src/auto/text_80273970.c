/* Functions from 0x80273970 to 0x802739A0, found by decomp-toolkit. */
#include "common.h"

void fn_80273970(void) {

}

void fn_80273980(void* arg0) {
    if (*(volatile s32*)((u8*)arg0 + 0x4) != 0) {
        *(volatile s32*)((u8*)arg0 + 0x4) = 0;
    }
    *(volatile s32*)((u8*)arg0 + 0x4) = 1;
}

