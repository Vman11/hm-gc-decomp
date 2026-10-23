// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct S801EFCFC {
    u8 pad0[8];
    u8 *f8;
    s32 fC;
    u8 pad10[24];
    u32 f28;
    u8 pad2C[4];
    char f30[8];
    char f38[8];
} S801EFCFC;
void fn_800FB064(void *, char *);
u32 fn_800F9398(u8 *, char *);
u32 fn_800F9788(u8 *, char *, char *);
void fn_801EF720(S801EFCFC *, void *, s32);

void fn_801EFCFC(S801EFCFC *p, void *a, s32 id) {
    switch (id) {
    case 90: {
        char n2[8];
        char n1[8];
        u8 *t;
        u32 r;
        fn_800FB064(a, n2);
        fn_800FB064(a, n1);
        t = p->f8;
        if (n1 == 0 || n1[0] == 0) {
            r = fn_800F9398(t + 120, n2);
        } else {
            r = fn_800F9788(t + 144, n1, n2);
        }
        p->f28 = r;
        break;
    }
    case 89:
        fn_800FB064(a, p->f30);
        fn_800FB064(a, p->f38);
        break;
    case 185:
        p->fC = 51;
        break;
    case 186:
        p->fC = 52;
        break;
    case 183:
        p->fC = 49;
        break;
    case 184:
        p->fC = 50;
        break;
    default:
        fn_801EF720(p, a, id);
        break;
    }
}

} /* extern "C" */
