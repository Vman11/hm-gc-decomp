// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035B7BC;
extern char lbl_802A8E1C[];
s32 fn_800F6CD0(void *, void *);
void *fn_8026D254(void *, void *);
void fn_800E8F6C(char *, const char *, ...);

void fn_80241338(u8 *p, void *a, void *b) {
    char buf[100];
    s32 i;
    for (i = 0; i < *(s32 *)(p + 0x84); i++) {
        if (fn_800F6CD0(((void **)*(u8 **)(p + 0xCC))[i * 3], a) != 0) {
            (*(void ***)(p + 0xD4))[i] = fn_8026D254(lbl_8035B7BC, b);
            return;
        }
    }
    fn_800E8F6C(buf, lbl_802A8E1C, a, b);
}

} /* extern "C" */
