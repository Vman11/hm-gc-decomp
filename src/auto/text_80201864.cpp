// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_80365714;
void fn_800F6E40(void *, void *);
s32 fn_802031E4(void *, void *);
s32 fn_802010A0(void *, void *);
s32 fn_802041B8(void *, void *);

void fn_80201864(u8 *p) {
    s32 r = 3;
    u32 fl = *(u32 *)(p + 8);
    u8 buf[144];
    if (fl & 0x400) {
        if (!(fl & 0x80) && *(void **)(p + 36) != NULL) {
            fn_800F6E40(buf, p);
            r = fn_802031E4(*(void **)(p + 36), buf);
        }
    } else if (fl & 0x200) {
        if (*(void **)(p + 36) != NULL) {
            fn_800F6E40(buf, p);
            r = fn_802010A0(*(void **)(p + 36), buf);
        }
    } else if (fl & 0x800) {
        if (*(void **)(p + 36) != NULL) {
            fn_800F6E40(buf, p);
            r = fn_802041B8(*(void **)(p + 36), buf);
        }
    }
    if (r == 0) {
        *(u32 *)(p + 8) |= lbl_80365714;
    }
}

} /* extern "C" */
