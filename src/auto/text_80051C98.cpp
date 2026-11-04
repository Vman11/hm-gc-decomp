// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct P { u8 b[1]; };
extern char lbl_80296378[];
#pragma opt_propagation off
extern char lbl_8035DB88[4];
void *fn_8023F52C(P *, char *, char *, char *, int, int);
void fn_800A2AF0(P *);
void fn_80051C98(P *p) {
    char *str = lbl_80296378;
    *(void **)((u8 *)p + 532) = fn_8023F52C(p, lbl_8035DB88, lbl_8035DB88, (char *)(str + 276), 1, 0);
    *(void **)((u8 *)p + 536) = fn_8023F52C(p, lbl_8035DB88, lbl_8035DB88, (char *)(str + 292), 1, 0);
    *(void **)((u8 *)p + 540) = fn_8023F52C(p, lbl_8035DB88, lbl_8035DB88, (char *)(str + 308), 1, 0);
    *(void **)((u8 *)p + 544) = fn_8023F52C(p, lbl_8035DB88, lbl_8035DB88, (char *)(str + 324), 1, 0);
    *(void **)((u8 *)p + 548) = fn_8023F52C(p, lbl_8035DB88, lbl_8035DB88, (char *)(str + 340), 1, 0);
    *(void **)((u8 *)p + 552) = fn_8023F52C(p, lbl_8035DB88, lbl_8035DB88, (char *)(str + 356), 1, 0);
    *(void **)((u8 *)p + 556) = fn_8023F52C(p, lbl_8035DB88, lbl_8035DB88, (char *)(str + 368), 1, 0);
    *(void **)((u8 *)p + 560) = fn_8023F52C(p, lbl_8035DB88, lbl_8035DB88, (char *)(str + 380), 1, 0);
    *(void **)((u8 *)p + 564) = fn_8023F52C(p, lbl_8035DB88, lbl_8035DB88, (char *)(str + 404), 1, 0);
    *(void **)((u8 *)p + 568) = fn_8023F52C(p, lbl_8035DB88, lbl_8035DB88, (char *)(str + 420), 1, 0);
    *(void **)((u8 *)p + 572) = fn_8023F52C(p, lbl_8035DB88, lbl_8035DB88, (char *)(str + 436), 1, 0);
    *(void **)((u8 *)p + 576) = fn_8023F52C(p, lbl_8035DB88, lbl_8035DB88, (char *)(str + 452), 1, 0);
    *(void **)((u8 *)p + 580) = fn_8023F52C(p, lbl_8035DB88, lbl_8035DB88, (char *)(str + 472), 1, 0);
    *(void **)((u8 *)p + 584) = fn_8023F52C(p, lbl_8035DB88, lbl_8035DB88, (char *)(str + 492), 1, 0);
    *(void **)((u8 *)p + 588) = fn_8023F52C(p, lbl_8035DB88, lbl_8035DB88, (char *)(str + 504), 1, 0);
    fn_800A2AF0(p);
}

} /* extern "C" */
