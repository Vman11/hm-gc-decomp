// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct E { char name[20]; u32 x; } E;
typedef struct O { u8 p[1120]; E e[40]; u8 p2[10084 - 1120 - 960]; u32 n; } O;
char *strcpy(char *, const char *);
int fn_80115714(O *o, u32 x, const char *s) {
    if (o->n < 40) {
        o->e[o->n].x = x;
        strcpy(o->e[o->n].name, s);
        o->n++;
        return 1;
    }
    return 0;
}

} /* extern "C" */
