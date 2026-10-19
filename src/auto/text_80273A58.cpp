/* Functions from 0x80273A58 to 0x80273A88, found by decomp-toolkit. */
#include "common.h"

extern "C" {

void fn_80273A58(void) {

}

void fn_80273A5C(void) {

}

void fn_80273A60(void *arg0) {
    s32 temp = *(s32 *)((u8 *)arg0 + 4);
    *(s32 *)((u8 *)arg0 + 4) = 0;
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    *(s32 *)((u8 *)arg0 + 8) = 0;
    *(s32 *)((u8 *)arg0 + 0xC) = 7;
    *(s32 *)((u8 *)arg0 + 4) = temp;
}

void fn_80273A84(void) {

}

} /* extern "C" */
