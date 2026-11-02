// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

#include "common.h"
typedef struct { char name[20]; s32 f14; s32 f18; } E;
typedef struct { E e[40]; u8 pad[0x2760 - 40 * 28]; u32 n; } O;
char *strcpy(char *, const char *);
s32 fn_80115784(O *o, s32 a, const char *s, s32 b) {
    if (o->n < 40) {
        o->e[o->n].f18 = a;
        o->e[o->n].f14 = b;
        strcpy(o->e[o->n].name, s);
        o->n++;
        return 1;
    }
    return 0;
}
