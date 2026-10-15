/* Functions from 0x802054EC to 0x80205504, found by decomp-toolkit. */
#include "common.h"

void fn_802054EC(void) {
}

void fn_802054F0(void* arg0) {
    char* p = *(char**)((char*)arg0 + 4);
    *(unsigned short*)(p + 0x128) &= ~8;
}

