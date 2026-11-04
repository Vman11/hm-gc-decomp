// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct P { u8 b[1]; };
extern char lbl_80298A60[];
#pragma opt_propagation off
extern char lbl_8035FB58[4];
extern char lbl_8035FC4C[4];
extern char lbl_8035FC54[4];
void *fn_8023F52C(P *, char *, char *, char *, int, int);
void fn_8023F214(P *);
void fn_80083908(P *p) {
    char *str = lbl_80298A60;
    *(void **)((u8 *)p + 280) = fn_8023F52C(p, lbl_8035FB58, lbl_8035FB58, (char *)(str + 232), 1, 0);
    *(void **)((u8 *)p + 284) = fn_8023F52C(p, lbl_8035FB58, lbl_8035FB58, (char *)(str + 244), 1, 0);
    *(void **)((u8 *)p + 288) = fn_8023F52C(p, lbl_8035FB58, lbl_8035FB58, (char *)(str + 260), 1, 0);
    *(void **)((u8 *)p + 292) = fn_8023F52C(p, lbl_8035FB58, lbl_8035FB58, (char *)(str + 284), 1, 0);
    *(void **)((u8 *)p + 296) = fn_8023F52C(p, lbl_8035FB58, lbl_8035FB58, lbl_8035FC4C, 1, 0);
    *(void **)((u8 *)p + 300) = fn_8023F52C(p, lbl_8035FB58, lbl_8035FB58, (char *)(str + 296), 1, 0);
    *(void **)((u8 *)p + 304) = fn_8023F52C(p, lbl_8035FB58, lbl_8035FB58, lbl_8035FC54, 1, 0);
    *(void **)((u8 *)p + 308) = fn_8023F52C(p, lbl_8035FB58, lbl_8035FB58, (char *)(str + 308), 1, 0);
    *(void **)((u8 *)p + 312) = fn_8023F52C(p, lbl_8035FB58, lbl_8035FB58, (char *)(str + 320), 1, 0);
    *(void **)((u8 *)p + 316) = fn_8023F52C(p, lbl_8035FB58, lbl_8035FB58, (char *)(str + 340), 1, 0);
    *(void **)((u8 *)p + 320) = fn_8023F52C(p, lbl_8035FB58, lbl_8035FB58, (char *)(str + 364), 1, 0);
    *(void **)((u8 *)p + 324) = fn_8023F52C(p, lbl_8035FB58, lbl_8035FB58, (char *)(str + 380), 1, 0);
    *(void **)((u8 *)p + 328) = fn_8023F52C(p, lbl_8035FB58, lbl_8035FB58, (char *)(str + 396), 1, 0);
    *(void **)((u8 *)p + 332) = fn_8023F52C(p, lbl_8035FB58, lbl_8035FB58, (char *)(str + 416), 1, 0);
    *(void **)((u8 *)p + 336) = fn_8023F52C(p, lbl_8035FB58, lbl_8035FB58, (char *)(str + 432), 1, 0);
    *(void **)((u8 *)p + 340) = fn_8023F52C(p, lbl_8035FB58, lbl_8035FB58, (char *)(str + 456), 1, 0);
    *(void **)((u8 *)p + 344) = fn_8023F52C(p, lbl_8035FB58, lbl_8035FB58, (char *)(str + 484), 1, 0);
    *(void **)((u8 *)p + 348) = fn_8023F52C(p, lbl_8035FB58, lbl_8035FB58, (char *)(str + 504), 1, 0);
    *(void **)((u8 *)p + 352) = fn_8023F52C(p, lbl_8035FB58, lbl_8035FB58, (char *)(str + 524), 1, 0);
    *(void **)((u8 *)p + 356) = fn_8023F52C(p, lbl_8035FB58, lbl_8035FB58, (char *)(str + 536), 1, 0);
    fn_8023F214(p);
}

} /* extern "C" */
