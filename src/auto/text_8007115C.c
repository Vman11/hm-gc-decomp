// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

#include "common.h"
typedef struct { u8 p[0x13c]; u8 m[4]; } O;
extern void *lbl_8035B7BC;
extern f32 lbl_8035F338;
extern f32 lbl_8035F33C;
s32 fn_8026B090(void *, O *, void *, s32, s32);
void fn_8026AE28(void *, O *, void *, u32, f32);
void fn_8007115C(O *o) {
    if (fn_8026B090(lbl_8035B7BC, o, o->m, (s32)lbl_8035F338, 0)) {
        fn_8026AE28(lbl_8035B7BC, o, o->m, (u32)lbl_8035F338, lbl_8035F33C);
    }
}
