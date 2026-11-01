// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { void *o; u8 pad4[4]; s32 f8; u8 padc[8]; char str[256]; } S800F5DBC;
char *strncpy(char *d, const char *s, u32 n);
void fn_800F9FE0(void *o, s32 c);
void fn_800F5DBC(S800F5DBC *p, const char *s) {
    char *c;
    strncpy(p->str, s, 255);
    p->str[255] = 0;
    p->f8 = 2;
    fn_800F9FE0(p->o, '"');
    for (c = p->str; *c != 0; c++) fn_800F9FE0(p->o, *c);
    fn_800F9FE0(p->o, '"');
}
