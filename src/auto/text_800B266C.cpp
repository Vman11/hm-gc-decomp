// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct P { u8 b[1]; };
extern char lbl_8029BBB8[];
#pragma opt_propagation off
extern char lbl_80362EB0[4];
extern char lbl_80362FB8[4];
void *fn_8023F52C(P *, char *, char *, char *, int, int);
void fn_8023F214(P *);
void fn_800B266C(P *p) {
    char *str = lbl_8029BBB8;
    *(void **)((u8 *)p + 280) = fn_8023F52C(p, lbl_80362EB0, lbl_80362EB0, (char *)(str + 96), 1, 0);
    *(void **)((u8 *)p + 284) = fn_8023F52C(p, lbl_80362EB0, lbl_80362EB0, (char *)(str + 108), 1, 0);
    *(void **)((u8 *)p + 288) = fn_8023F52C(p, lbl_80362EB0, lbl_80362EB0, lbl_80362FB8, 1, 0);
    *(void **)((u8 *)p + 292) = fn_8023F52C(p, lbl_80362EB0, lbl_80362EB0, (char *)(str + 128), 1, 0);
    *(void **)((u8 *)p + 296) = fn_8023F52C(p, lbl_80362EB0, lbl_80362EB0, (char *)(str + 140), 1, 0);
    *(void **)((u8 *)p + 300) = fn_8023F52C(p, lbl_80362EB0, lbl_80362EB0, (char *)(str + 160), 1, 0);
    *(void **)((u8 *)p + 304) = fn_8023F52C(p, lbl_80362EB0, lbl_80362EB0, (char *)(str + 180), 1, 0);
    *(void **)((u8 *)p + 308) = fn_8023F52C(p, lbl_80362EB0, lbl_80362EB0, (char *)(str + 200), 1, 0);
    *(void **)((u8 *)p + 312) = fn_8023F52C(p, lbl_80362EB0, lbl_80362EB0, (char *)(str + 220), 1, 0);
    *(void **)((u8 *)p + 316) = fn_8023F52C(p, lbl_80362EB0, lbl_80362EB0, (char *)(str + 232), 1, 0);
    *(void **)((u8 *)p + 320) = fn_8023F52C(p, lbl_80362EB0, lbl_80362EB0, (char *)(str + 244), 1, 0);
    *(void **)((u8 *)p + 324) = fn_8023F52C(p, lbl_80362EB0, lbl_80362EB0, (char *)(str + 260), 1, 0);
    *(void **)((u8 *)p + 328) = fn_8023F52C(p, lbl_80362EB0, lbl_80362EB0, (char *)(str + 280), 1, 0);
    *(void **)((u8 *)p + 332) = fn_8023F52C(p, lbl_80362EB0, lbl_80362EB0, (char *)(str + 300), 1, 0);
    *(void **)((u8 *)p + 336) = fn_8023F52C(p, lbl_80362EB0, lbl_80362EB0, (char *)(str + 316), 1, 0);
    *(void **)((u8 *)p + 340) = fn_8023F52C(p, lbl_80362EB0, lbl_80362EB0, (char *)(str + 336), 1, 0);
    *(void **)((u8 *)p + 344) = fn_8023F52C(p, lbl_80362EB0, lbl_80362EB0, (char *)(str + 352), 1, 0);
    *(void **)((u8 *)p + 348) = fn_8023F52C(p, lbl_80362EB0, lbl_80362EB0, (char *)(str + 368), 1, 0);
    *(void **)((u8 *)p + 352) = fn_8023F52C(p, lbl_80362EB0, lbl_80362EB0, (char *)(str + 396), 1, 0);
    *(void **)((u8 *)p + 356) = fn_8023F52C(p, lbl_80362EB0, lbl_80362EB0, (char *)(str + 424), 1, 0);
    fn_8023F214(p);
}

} /* extern "C" */
