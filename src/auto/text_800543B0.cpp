// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct P { u8 b[1]; };
extern char lbl_80296598[];
#pragma opt_propagation off
extern char lbl_8035DE24[4];
extern char lbl_8035E024[4];
extern char lbl_8035E02C[4];
extern char lbl_8035E034[4];
void *fn_8023F52C(P *, char *, char *, char *, int, int);
void fn_8023F214(P *);
void fn_800543B0(P *p) {
    char *str = lbl_80296598;
    *(void **)((u8 *)p + 308) = fn_8023F52C(p, lbl_8035DE24, lbl_8035DE24, (char *)(str + 300), 1, 0);
    *(void **)((u8 *)p + 312) = fn_8023F52C(p, lbl_8035DE24, lbl_8035DE24, (char *)(str + 316), 1, 0);
    *(void **)((u8 *)p + 316) = fn_8023F52C(p, lbl_8035DE24, lbl_8035DE24, (char *)(str + 328), 1, 0);
    *(void **)((u8 *)p + 324) = fn_8023F52C(p, lbl_8035DE24, lbl_8035DE24, (char *)(str + 340), 1, 0);
    *(void **)((u8 *)p + 328) = fn_8023F52C(p, lbl_8035DE24, lbl_8035DE24, (char *)(str + 352), 1, 0);
    *(void **)((u8 *)p + 332) = fn_8023F52C(p, lbl_8035DE24, lbl_8035DE24, lbl_8035E024, 1, 0);
    *(void **)((u8 *)p + 336) = fn_8023F52C(p, lbl_8035DE24, lbl_8035DE24, (char *)(str + 364), 1, 0);
    *(void **)((u8 *)p + 340) = fn_8023F52C(p, lbl_8035DE24, lbl_8035DE24, (char *)(str + 376), 1, 0);
    *(void **)((u8 *)p + 356) = fn_8023F52C(p, lbl_8035DE24, lbl_8035DE24, (char *)(str + 388), 1, 0);
    *(void **)((u8 *)p + 360) = fn_8023F52C(p, lbl_8035DE24, lbl_8035DE24, (char *)(str + 400), 1, 0);
    *(void **)((u8 *)p + 364) = fn_8023F52C(p, lbl_8035DE24, lbl_8035DE24, (char *)(str + 412), 1, 0);
    *(void **)((u8 *)p + 368) = fn_8023F52C(p, lbl_8035DE24, lbl_8035E02C, (char *)(str + 424), 1, 0);
    *(void **)((u8 *)p + 372) = fn_8023F52C(p, lbl_8035DE24, lbl_8035E02C, (char *)(str + 440), 1, 0);
    *(void **)((u8 *)p + 404) = fn_8023F52C(p, lbl_8035DE24, lbl_8035DE24, (char *)(str + 456), 0, 0);
    *(void **)((u8 *)p + 408) = fn_8023F52C(p, lbl_8035DE24, lbl_8035DE24, (char *)(str + 468), 1, 0);
    *(void **)((u8 *)p + 412) = fn_8023F52C(p, lbl_8035DE24, lbl_8035DE24, lbl_8035E034, 1, 0);
    *(void **)((u8 *)p + 416) = fn_8023F52C(p, lbl_8035DE24, lbl_8035DE24, (char *)(str + 484), 1, 0);
    *(void **)((u8 *)p + 420) = fn_8023F52C(p, lbl_8035DE24, lbl_8035DE24, (char *)(str + 496), 1, 0);
    fn_8023F214(p);
}

} /* extern "C" */
