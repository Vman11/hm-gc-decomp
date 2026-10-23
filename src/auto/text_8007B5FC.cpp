// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802984B8[];
extern char lbl_8035F720[0x4];
extern char lbl_8035F794[0x7];
extern char lbl_8035F79C[0x6];
s32 fn_8023F52C(void *p, char *a, char *b, char *name, s32 x, s32 y);
void fn_8023F214(u8 *);
#pragma opt_propagation off
void fn_8007B5FC(u8 *p) {
    char *s = lbl_802984B8;
    *(s32 *)(p + 280) = fn_8023F52C(p, lbl_8035F720, lbl_8035F720, s + 160, 1, 0);
    *(s32 *)(p + 284) = fn_8023F52C(p, lbl_8035F720, lbl_8035F720, s + 176, 1, 0);
    *(s32 *)(p + 288) = fn_8023F52C(p, lbl_8035F720, lbl_8035F720, s + 192, 1, 0);
    *(s32 *)(p + 292) = fn_8023F52C(p, lbl_8035F720, lbl_8035F720, s + 208, 1, 0);
    *(s32 *)(p + 296) = fn_8023F52C(p, lbl_8035F720, lbl_8035F720, s + 220, 1, 0);
    *(s32 *)(p + 300) = fn_8023F52C(p, lbl_8035F720, lbl_8035F720, s + 236, 1, 0);
    *(s32 *)(p + 304) = fn_8023F52C(p, lbl_8035F720, lbl_8035F720, s + 248, 1, 0);
    *(s32 *)(p + 308) = fn_8023F52C(p, lbl_8035F720, lbl_8035F720, s + 264, 1, 0);
    *(s32 *)(p + 312) = fn_8023F52C(p, lbl_8035F720, lbl_8035F720, s + 276, 1, 0);
    *(s32 *)(p + 316) = fn_8023F52C(p, lbl_8035F720, lbl_8035F720, s + 292, 1, 0);
    *(s32 *)(p + 320) = fn_8023F52C(p, lbl_8035F720, lbl_8035F720, s + 308, 1, 0);
    *(s32 *)(p + 324) = fn_8023F52C(p, lbl_8035F720, lbl_8035F720, s + 320, 1, 0);
    *(s32 *)(p + 328) = fn_8023F52C(p, lbl_8035F720, lbl_8035F720, lbl_8035F794, 1, 0);
    *(s32 *)(p + 332) = fn_8023F52C(p, lbl_8035F720, lbl_8035F720, lbl_8035F79C, 1, 0);
    *(s32 *)(p + 336) = fn_8023F52C(p, lbl_8035F720, lbl_8035F720, s + 336, 1, 0);
    *(s32 *)(p + 340) = fn_8023F52C(p, lbl_8035F720, lbl_8035F720, s + 356, 1, 0);
    *(s32 *)(p + 344) = fn_8023F52C(p, lbl_8035F720, lbl_8035F720, s + 368, 1, 0);
    *(s32 *)(p + 348) = fn_8023F52C(p, lbl_8035F720, lbl_8035F720, s + 380, 1, 0);
    *(s32 *)(p + 352) = fn_8023F52C(p, lbl_8035F720, lbl_8035F720, s + 392, 1, 0);
    *(s32 *)(p + 356) = fn_8023F52C(p, lbl_8035F720, lbl_8035F720, s + 408, 1, 0);
    *(s32 *)(p + 360) = fn_8023F52C(p, lbl_8035F720, lbl_8035F720, s + 420, 1, 0);
    *(s32 *)(p + 364) = fn_8023F52C(p, lbl_8035F720, lbl_8035F720, s + 432, 1, 0);
    *(s32 *)(p + 368) = fn_8023F52C(p, lbl_8035F720, lbl_8035F720, s + 444, 1, 0);
    *(s32 *)(p + 372) = fn_8023F52C(p, lbl_8035F720, lbl_8035F720, s + 460, 1, 0);
    *(s32 *)(p + 376) = fn_8023F52C(p, lbl_8035F720, lbl_8035F720, s + 476, 1, 0);
    fn_8023F214(p);
}

} /* extern "C" */
