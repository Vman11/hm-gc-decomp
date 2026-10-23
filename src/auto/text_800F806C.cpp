// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct { char name[8]; void *key; } E800F806C;
typedef struct { E800F806C *e; u32 n; } T800F806C;
void fn_800F6E88(u8 *dst, char *src);
void fn_800F806C(const T800F806C *t, void *key, u8 *dst) {
    E800F806C *e = t->e;
    u32 i;
    for (i = 0; i < t->n; i++) {
        if (t->e[i].key == key) {
            fn_800F6E88(dst, e[i].name);
            return;
        }
    }
    dst[0] = 0;
}

} /* extern "C" */
