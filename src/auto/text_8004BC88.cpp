// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80295BE8[];
extern char lbl_8035D38C[0x8];
extern char lbl_8035D288[0x4];
extern char lbl_8035D36C[0x6];
extern char lbl_8035D374[0x6];
extern char lbl_8035D37C[0x7];
extern char lbl_8035D384[0x6];
s32 fn_8023F52C(void *p, char *a, char *b, char *name, s32 x, s32 y);
s32 fn_80248EAC(char *, char *, char *);
void fn_8023F214(u8 *);
#pragma opt_propagation off
void fn_8004BC88(u8 *p) {
    char *s = lbl_80295BE8;
    *(s32 *)(p + 280) = fn_8023F52C(p, lbl_8035D288, lbl_8035D288, lbl_8035D36C, 1, 0);
    *(s32 *)(p + 284) = fn_8023F52C(p, lbl_8035D288, lbl_8035D288, lbl_8035D374, 1, 0);
    *(s32 *)(p + 288) = fn_8023F52C(p, lbl_8035D288, lbl_8035D288, s + 236, 1, 0);
    *(s32 *)(p + 292) = fn_8023F52C(p, lbl_8035D288, lbl_8035D288, s + 248, 1, 0);
    *(s32 *)(p + 296) = fn_8023F52C(p, lbl_8035D288, lbl_8035D288, s + 264, 1, 0);
    *(s32 *)(p + 300) = fn_8023F52C(p, lbl_8035D288, lbl_8035D288, s + 276, 1, 0);
    *(s32 *)(p + 304) = fn_8023F52C(p, lbl_8035D288, lbl_8035D288, lbl_8035D37C, 1, 0);
    *(s32 *)(p + 308) = fn_8023F52C(p, lbl_8035D288, lbl_8035D288, s + 288, 1, 0);
    *(s32 *)(p + 312) = fn_8023F52C(p, lbl_8035D288, lbl_8035D288, s + 300, 1, 0);
    *(s32 *)(p + 316) = fn_8023F52C(p, lbl_8035D288, lbl_8035D288, s + 312, 1, 0);
    *(s32 *)(p + 320) = fn_8023F52C(p, lbl_8035D288, lbl_8035D288, s + 328, 1, 0);
    *(s32 *)(p + 324) = fn_8023F52C(p, lbl_8035D288, lbl_8035D288, s + 340, 1, 0);
    *(s32 *)(p + 328) = fn_8023F52C(p, lbl_8035D288, lbl_8035D288, s + 360, 1, 0);
    *(s32 *)(p + 332) = fn_8023F52C(p, lbl_8035D288, lbl_8035D288, lbl_8035D384, 1, 0);
    *(s32 *)(p + 336) = fn_8023F52C(p, lbl_8035D288, lbl_8035D288, s + 372, 1, 0);
    *(s32 *)(p + 340) = fn_8023F52C(p, lbl_8035D288, lbl_8035D288, s + 384, 1, 0);
    *(s32 *)(p + 344) = fn_8023F52C(p, lbl_8035D288, lbl_8035D288, s + 396, 1, 0);
    *(s32 *)(p + 348) = fn_8023F52C(p, lbl_8035D288, lbl_8035D288, s + 408, 1, 0);
    *(s32 *)(p + 352) = fn_8023F52C(p, lbl_8035D288, lbl_8035D288, s + 420, 1, 0);
    *(s32 *)(p + 356) = fn_8023F52C(p, lbl_8035D288, lbl_8035D288, s + 432, 1, 0);
    *(s32 *)(p + 360) = fn_8023F52C(p, lbl_8035D288, lbl_8035D288, s + 444, 1, 0);
    *(s32 *)(p + 364) = fn_8023F52C(p, lbl_8035D288, lbl_8035D288, s + 460, 1, 0);
    *(s32 *)(p + 368) = fn_8023F52C(p, lbl_8035D288, lbl_8035D288, s + 476, 1, 0);
    *(s32 *)(p + 372) = fn_8023F52C(p, lbl_8035D288, lbl_8035D288, s + 488, 1, 0);
    *(s32 *)(p + 376) = fn_8023F52C(p, lbl_8035D288, lbl_8035D288, s + 504, 1, 0);
    *(s32 *)(p + 380) = fn_8023F52C(p, lbl_8035D288, lbl_8035D288, s + 520, 1, 0);
    *(s32 *)(p + 384) = fn_8023F52C(p, lbl_8035D288, lbl_8035D288, s + 540, 1, 0);
    *(s32 *)(p + 388) = fn_8023F52C(p, lbl_8035D288, lbl_8035D288, s + 552, 1, 0);
    *(s32 *)(p + 392) = fn_80248EAC(lbl_8035D38C, lbl_8035D288, s + 576);
    fn_8023F214(p);
}

} /* extern "C" */
