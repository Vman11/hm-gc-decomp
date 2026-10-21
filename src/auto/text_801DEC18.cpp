// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800FB064(void *, char *);
void *fn_800F9398(u8 *, char *);
void *fn_800F9788(u8 *, char *, char *);
void *fn_8019565C(void *);
void fn_801EF720(u8 *, void *, s32);
struct H_801DEC18 { void *a; s32 b; void set(void *x) { b = 0; a = 0; a = x; } };

static inline void *lookup_801DEC18(u8 *t, char *grp, char *name) {
    if (grp == 0 || grp[0] == '\0') {
        return fn_800F9398(t + 144, name);
    }
    return fn_800F9788(t + 168, grp, name);
}

void fn_801DEC18(u8 *p, void *msg, s32 id) {
    char name[8];
    char grp[8];
    void *r;
    switch (id) {
    case 98:
        fn_800FB064(msg, name);
        fn_800FB064(msg, grp);
        r = lookup_801DEC18(*(u8 **)(*(u8 **)(p + 8) + 212), grp, name);
        if (r) {
            r = fn_8019565C(r);
        }
        ((H_801DEC18 *)(p + 40))->set(r);
        break;
    case 163:
        *(s32 *)(p + 12) = 1;
        break;
    case 164:
        *(s32 *)(p + 12) = 2;
        break;
    case 157:
        *(s32 *)(p + 12) = 3;
        break;
    case 158:
        *(s32 *)(p + 12) = 4;
        break;
    default:
        fn_801EF720(p, msg, id);
        break;
    }
}

} /* extern "C" */
