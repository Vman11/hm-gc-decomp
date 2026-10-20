// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_803636D8[8];
void *memcpy(void *, const void *, u32);
void fn_800EB6F4(void *, void *);

void fn_800F6F68(void *p, char *s) {
    char buf[12];
    if (s == NULL) {
        s = lbl_803636D8;
    }
    memcpy(buf, s, 8);
    buf[8] = 0;
    fn_800EB6F4(p, buf);
}

} /* extern "C" */
