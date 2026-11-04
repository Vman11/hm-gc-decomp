// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct P { u8 b[1]; };
extern char lbl_80294F38[];
#pragma opt_propagation off
extern char lbl_8035C2F8[4];
void *fn_8023F52C(P *, char *, char *, char *, int, int);
void *fn_8023F4A0(P *, char *, char *, char *, int);
void fn_8023F214(P *);
void fn_80040CD8(P *p) {
    char *str = lbl_80294F38;
    *(void **)((u8 *)p + 280) = fn_8023F52C(p, lbl_8035C2F8, lbl_8035C2F8, (char *)(str + 40), 0, 0);
    *(void **)((u8 *)p + 284) = fn_8023F52C(p, lbl_8035C2F8, lbl_8035C2F8, (char *)(str + 52), 0, 0);
    *(void **)((u8 *)p + 288) = fn_8023F52C(p, lbl_8035C2F8, lbl_8035C2F8, (char *)(str + 68), 0, 0);
    *(void **)((u8 *)p + 292) = fn_8023F52C(p, lbl_8035C2F8, lbl_8035C2F8, (char *)(str + 84), 0, 0);
    *(void **)((u8 *)p + 296) = fn_8023F52C(p, lbl_8035C2F8, lbl_8035C2F8, (char *)(str + 100), 0, 0);
    *(void **)((u8 *)p + 300) = fn_8023F52C(p, lbl_8035C2F8, lbl_8035C2F8, (char *)(str + 112), 0, 0);
    *(void **)((u8 *)p + 304) = fn_8023F52C(p, lbl_8035C2F8, lbl_8035C2F8, (char *)(str + 128), 1, 0);
    *(void **)((u8 *)p + 308) = fn_8023F52C(p, lbl_8035C2F8, lbl_8035C2F8, (char *)(str + 140), 1, 0);
    *(void **)((u8 *)p + 312) = fn_8023F52C(p, lbl_8035C2F8, lbl_8035C2F8, (char *)(str + 156), 1, 0);
    *(void **)((u8 *)p + 316) = fn_8023F52C(p, lbl_8035C2F8, lbl_8035C2F8, (char *)(str + 168), 1, 0);
    *(void **)((u8 *)p + 320) = fn_8023F52C(p, lbl_8035C2F8, lbl_8035C2F8, (char *)(str + 184), 1, 0);
    *(void **)((u8 *)p + 324) = fn_8023F52C(p, lbl_8035C2F8, lbl_8035C2F8, (char *)(str + 200), 1, 0);
    *(void **)((u8 *)p + 328) = fn_8023F52C(p, lbl_8035C2F8, lbl_8035C2F8, (char *)(str + 220), 1, 0);
    *(void **)((u8 *)p + 332) = fn_8023F4A0(p, lbl_8035C2F8, lbl_8035C2F8, (char *)(str + 240), 1);
    *(f32 *)((u8 *)p + 344) = *(f32 *)fn_8023F52C(p, lbl_8035C2F8, lbl_8035C2F8, (char *)(str + 252), 1, 0);
    fn_8023F214(p);
}

} /* extern "C" */
