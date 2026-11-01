// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void *memcpy(void *d, const void *s, u32 n);
char *strcat(char *d, const char *s);
extern char lbl_8029CED8[];
typedef struct S801061A4 { void *o; u8 pad4[0x10]; void *r; char name[8]; } S801061A4;
void *fn_800F8274(void *o, char *n);
void fn_801061A4(S801061A4 *p) {
    char buf[80];
    if (p->name[0] == 0) {
        p->r = p;
    } else {
        if ((p->r = fn_800F8274(p->o, p->name)) == 0) {
            memcpy(buf, p->name, 8);
            buf[8] = 0;
            strcat(buf, lbl_8029CED8);
        }
    }
}
