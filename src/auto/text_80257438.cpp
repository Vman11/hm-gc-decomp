// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct Vec80257438 {
    f32 x, y, z;
} Vec80257438;

extern char lbl_803666D4[4];
extern char lbl_803666D8[8];
extern char lbl_803666E0[8];
extern char lbl_803666E8[4];
extern char lbl_803666EC[4];
extern char lbl_803666F0[4];
void *fn_80261114(void *p, char *name, s32 x);
void fn_80261B18(void *p, void *q);
static inline void SET(Vec80257438 *d, f32 x, f32 y, f32 z) { d->x = x; d->y = y; d->z = z; }
static inline void CP(Vec80257438 *d, Vec80257438 *s) { SET(d, s->x, s->y, s->z); }

void fn_80257438(u8 *p, void *arg) {
    *(void **)(p + 180) = fn_80261114(p, lbl_803666D4, 1);
    *(void **)(p + 188) = fn_80261114(p, lbl_803666D8, 1);
    *(void **)(p + 184) = fn_80261114(p, lbl_803666E0, 1);
    CP((Vec80257438 *)(p + 80), (Vec80257438 *)fn_80261114(p, lbl_803666E8, 1));
    CP((Vec80257438 *)(p + 104), (Vec80257438 *)fn_80261114(p, lbl_803666EC, 1));
    CP((Vec80257438 *)(p + 92), (Vec80257438 *)fn_80261114(p, lbl_803666F0, 1));
    fn_80261B18(p, arg);
}

} /* extern "C" */
