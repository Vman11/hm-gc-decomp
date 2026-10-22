// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80365878[4];
void *memset(void *, s32, u32);
void strncpy(void *, void *, u32);
void strcat(void *, void *);
void strncat(void *, void *, u32);

BOOL fn_8021272C(u8 **p, u32 i, u32 j, char *o) {
    if (i >= ((u32 *)p)[4] || j >= ((u32 *)p)[5]) {
        *o = 0;
        return FALSE;
    }
    memset(o, 0, 12);
    strncpy(o, p[0] + i * 8, 8);
    strcat(o, lbl_80365878);
    strncat(o, p[1] + j * 4, 3);
    return TRUE;
}

} /* extern "C" */
