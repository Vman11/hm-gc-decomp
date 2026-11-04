// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct P { u8 b[1]; };
extern char lbl_8029AE88[];
#pragma opt_propagation off
extern char lbl_80361EC0[4];
extern char lbl_80361F50[4];
extern char lbl_80361F78[4];
void *fn_8023F52C(P *, char *, char *, char *, int, int);
void fn_8023F214(P *);
void fn_800A7DE0(P *p) {
    char *str = lbl_8029AE88;
    *(void **)((u8 *)p + 280) = fn_8023F52C(p, lbl_80361F50, lbl_80361F50, lbl_80361F78, 1, 0);
    *(void **)((u8 *)p + 284) = fn_8023F52C(p, lbl_80361F50, lbl_80361F50, (char *)(str + 36), 1, 0);
    *(void **)((u8 *)p + 288) = fn_8023F52C(p, lbl_80361F50, lbl_80361F50, (char *)(str + 48), 1, 0);
    *(void **)((u8 *)p + 292) = fn_8023F52C(p, lbl_80361F50, lbl_80361F50, (char *)(str + 64), 1, 0);
    *(void **)((u8 *)p + 296) = fn_8023F52C(p, lbl_80361F50, lbl_80361F50, (char *)(str + 76), 1, 0);
    *(void **)((u8 *)p + 300) = fn_8023F52C(p, lbl_80361F50, lbl_80361F50, (char *)(str + 92), 1, 0);
    *(void **)((u8 *)p + 304) = fn_8023F52C(p, lbl_80361F50, lbl_80361F50, (char *)(str + 108), 1, 0);
    *(void **)((u8 *)p + 308) = fn_8023F52C(p, lbl_80361F50, lbl_80361F50, (char *)(str + 124), 1, 0);
    *(void **)((u8 *)p + 312) = fn_8023F52C(p, lbl_80361F50, lbl_80361F50, (char *)(str + 136), 1, 0);
    *(void **)((u8 *)p + 316) = fn_8023F52C(p, lbl_80361F50, lbl_80361F50, (char *)(str + 148), 1, 0);
    *(void **)((u8 *)p + 320) = fn_8023F52C(p, lbl_80361F50, lbl_80361F50, (char *)(str + 160), 1, 0);
    *(void **)((u8 *)p + 324) = fn_8023F52C(p, lbl_80361F50, lbl_80361F50, (char *)(str + 172), 1, 0);
    *(void **)((u8 *)p + 328) = fn_8023F52C(p, lbl_80361F50, lbl_80361F50, (char *)(str + 184), 1, 0);
    *(void **)((u8 *)p + 332) = fn_8023F52C(p, lbl_80361F50, lbl_80361F50, (char *)(str + 200), 1, 0);
    *(void **)((u8 *)p + 336) = fn_8023F52C(p, lbl_80361F50, lbl_80361F50, (char *)(str + 216), 1, 0);
    *(void **)((u8 *)p + 340) = fn_8023F52C(p, lbl_80361F50, lbl_80361EC0, (char *)(str + 232), 1, 0);
    fn_8023F214(p);
}

} /* extern "C" */
