// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct P { u8 b[1]; };
extern char lbl_80299C50[];
#pragma opt_propagation off
extern char lbl_803610A4[4];
extern char lbl_803610A8[4];
extern char lbl_803610B0[4];
extern char lbl_803610B8[4];
extern char lbl_803610C0[4];
extern char lbl_803610C8[4];
void *fn_8023F52C(P *, char *, char *, char *, int, int);
void fn_8023F214(P *);
void *fn_80248EAC(char *, char *, const char *);
void fn_80096710(P *p) {
    char *str = lbl_80299C50;
    *(void **)((u8 *)p + 280) = fn_8023F52C(p, lbl_803610A4, lbl_803610A4, (char *)(str + 60), 1, 0);
    *(void **)((u8 *)p + 284) = fn_80248EAC(lbl_803610A8, lbl_803610B0, (char *)(str + 76));
    *(void **)((u8 *)p + 288) = fn_80248EAC(lbl_803610A8, lbl_803610B0, (char *)(str + 96));
    *(void **)((u8 *)p + 292) = fn_80248EAC(lbl_803610A8, lbl_803610B0, (char *)(str + 116));
    *(void **)((u8 *)p + 296) = fn_80248EAC(lbl_803610A8, (char *)(str + 136), (char *)(str + 148));
    *(void **)((u8 *)p + 300) = fn_80248EAC(lbl_803610A8, (char *)(str + 136), (char *)(str + 160));
    *(void **)((u8 *)p + 304) = fn_80248EAC(lbl_803610A8, lbl_803610B8, lbl_803610C0);
    *(void **)((u8 *)p + 308) = fn_8023F52C(p, lbl_803610A4, lbl_803610A4, (char *)(str + 176), 1, 0);
    *(void **)((u8 *)p + 312) = fn_8023F52C(p, lbl_803610A4, lbl_803610A4, (char *)(str + 200), 1, 0);
    *(void **)((u8 *)p + 316) = fn_8023F52C(p, lbl_803610A4, lbl_803610A4, (char *)(str + 224), 1, 0);
    *(void **)((u8 *)p + 320) = fn_8023F52C(p, lbl_803610A4, lbl_803610A4, (char *)(str + 248), 1, 0);
    *(void **)((u8 *)p + 324) = fn_8023F52C(p, lbl_803610A4, lbl_803610A4, (char *)(str + 264), 1, 0);
    *(void **)((u8 *)p + 328) = fn_8023F52C(p, lbl_803610A4, lbl_803610A4, (char *)(str + 284), 1, 0);
    *(void **)((u8 *)p + 332) = fn_8023F52C(p, lbl_803610A4, lbl_803610A4, (char *)(str + 296), 1, 0);
    *(void **)((u8 *)p + 336) = fn_8023F52C(p, lbl_803610A4, lbl_803610A4, (char *)(str + 316), 1, 0);
    *(void **)((u8 *)p + 340) = fn_8023F52C(p, lbl_803610A4, lbl_803610A4, lbl_803610C8, 1, 0);
    *(void **)((u8 *)p + 344) = fn_8023F52C(p, lbl_803610A4, lbl_803610A4, (char *)(str + 340), 1, 0);
    fn_8023F214(p);
}

} /* extern "C" */
