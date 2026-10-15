/* Functions from 0x8003E88C to 0x8003E8A0, found by decomp-toolkit. */
#include "common.h"

extern u8 *lbl_8035A1DC;

void fn_8003E88C(void *arg0) {
    *(u32 *)((u8 *)arg0 + 0x29C) = *(u32 *)(lbl_8035A1DC + 0x3708);
}

void fn_8003E89C(void) {

}
