// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800EB6F4(int, int);
void fn_800EB764(int, int);
s32 strlen(int);


} /* extern "C" */

typedef struct { u8 pad[664]; char names[7][128]; u8 pad2[0x698 - 664 - 896]; s32 n; } T_80207DAC;

BOOL fn_80207DAC(T_80207DAC *p, char *d, u32 max) {
    u32 n = strlen((char *)p);
    if (p->n != -1) {
        n += strlen(p->names[p->n]);
    }
    if (n >= max) {
        return FALSE;
    }
    fn_800EB764(d, p);
    if (p->n != -1) {
        fn_800EB6F4(d, p->names[p->n]);
    }
    return TRUE;
}
