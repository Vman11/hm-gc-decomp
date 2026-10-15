/* Functions from 0x80207CB4 to 0x80207CDC, found by decomp-toolkit. */
#include "common.h"

u8* fn_80207CB4(u8* arg0) {
    struct { u8 pad[0x298]; u8 arr[8][0x80]; s32 idx; }* p = (void*)arg0;
    if (p->idx != -1) {
        return p->arr[p->idx];
    }
    return NULL;
}
