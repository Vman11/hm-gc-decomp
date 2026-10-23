// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80296C30[];
extern char lbl_8035E1F8[0x4];
extern char lbl_8035E278[0x7];
s32 fn_8023F52C(void *p, char *a, char *b, char *name, s32 x, s32 y);
void fn_8023F214(u8 *);
#pragma opt_propagation off
void fn_80059B6C(u8 *p) {
    char *s = lbl_80296C30;
    *(s32 *)(p + 280) = fn_8023F52C(p, lbl_8035E1F8, lbl_8035E1F8, s + 108, 1, 0);
    *(s32 *)(p + 284) = fn_8023F52C(p, lbl_8035E1F8, lbl_8035E1F8, s + 124, 1, 0);
    *(s32 *)(p + 288) = fn_8023F52C(p, lbl_8035E1F8, lbl_8035E1F8, s + 144, 1, 0);
    *(s32 *)(p + 292) = fn_8023F52C(p, lbl_8035E1F8, lbl_8035E1F8, s + 160, 1, 0);
    *(s32 *)(p + 296) = fn_8023F52C(p, lbl_8035E1F8, lbl_8035E1F8, s + 176, 1, 0);
    *(s32 *)(p + 300) = fn_8023F52C(p, lbl_8035E1F8, lbl_8035E1F8, s + 192, 1, 0);
    *(s32 *)(p + 304) = fn_8023F52C(p, lbl_8035E1F8, lbl_8035E1F8, s + 212, 1, 0);
    *(s32 *)(p + 308) = fn_8023F52C(p, lbl_8035E1F8, lbl_8035E1F8, s + 228, 1, 0);
    *(s32 *)(p + 312) = fn_8023F52C(p, lbl_8035E1F8, lbl_8035E1F8, s + 244, 1, 0);
    *(s32 *)(p + 316) = fn_8023F52C(p, lbl_8035E1F8, lbl_8035E1F8, s + 264, 1, 0);
    *(s32 *)(p + 320) = fn_8023F52C(p, lbl_8035E1F8, lbl_8035E1F8, s + 284, 1, 0);
    *(s32 *)(p + 324) = fn_8023F52C(p, lbl_8035E1F8, lbl_8035E1F8, s + 300, 1, 0);
    *(s32 *)(p + 328) = fn_8023F52C(p, lbl_8035E1F8, lbl_8035E1F8, s + 320, 1, 0);
    *(s32 *)(p + 332) = fn_8023F52C(p, lbl_8035E1F8, lbl_8035E1F8, s + 336, 1, 0);
    *(s32 *)(p + 336) = fn_8023F52C(p, lbl_8035E1F8, lbl_8035E1F8, s + 348, 1, 0);
    *(s32 *)(p + 340) = fn_8023F52C(p, lbl_8035E1F8, lbl_8035E1F8, s + 364, 1, 0);
    *(s32 *)(p + 344) = fn_8023F52C(p, lbl_8035E1F8, lbl_8035E1F8, s + 384, 1, 0);
    *(s32 *)(p + 348) = fn_8023F52C(p, lbl_8035E1F8, lbl_8035E1F8, s + 400, 1, 0);
    *(s32 *)(p + 352) = fn_8023F52C(p, lbl_8035E1F8, lbl_8035E1F8, s + 420, 1, 0);
    *(s32 *)(p + 356) = fn_8023F52C(p, lbl_8035E1F8, lbl_8035E1F8, s + 432, 1, 0);
    *(s32 *)(p + 360) = fn_8023F52C(p, lbl_8035E1F8, lbl_8035E1F8, s + 460, 1, 0);
    *(s32 *)(p + 364) = fn_8023F52C(p, lbl_8035E1F8, lbl_8035E1F8, s + 488, 1, 0);
    *(s32 *)(p + 368) = fn_8023F52C(p, lbl_8035E1F8, lbl_8035E1F8, s + 512, 1, 0);
    *(s32 *)(p + 372) = fn_8023F52C(p, lbl_8035E1F8, lbl_8035E1F8, s + 536, 1, 0);
    *(s32 *)(p + 376) = fn_8023F52C(p, lbl_8035E1F8, lbl_8035E1F8, s + 560, 1, 0);
    *(s32 *)(p + 380) = fn_8023F52C(p, lbl_8035E1F8, lbl_8035E1F8, s + 576, 1, 0);
    *(s32 *)(p + 384) = fn_8023F52C(p, lbl_8035E1F8, lbl_8035E1F8, s + 600, 1, 0);
    *(s32 *)(p + 388) = fn_8023F52C(p, lbl_8035E1F8, lbl_8035E1F8, s + 620, 1, 0);
    *(s32 *)(p + 392) = fn_8023F52C(p, lbl_8035E1F8, lbl_8035E1F8, lbl_8035E278, 1, 0);
    fn_8023F214(p);
}

} /* extern "C" */
