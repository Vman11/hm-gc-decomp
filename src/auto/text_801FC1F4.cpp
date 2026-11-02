// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803655BC, lbl_80365594, lbl_8036558C, lbl_803655C8, lbl_803655CC;
f64 fn_800F04DC(f64);
static inline f32 g(f32 x) { f32 t; if (x < lbl_803655BC) t = lbl_80365594; else if (x >= lbl_8036558C) t = lbl_8036558C; else t = lbl_803655C8 * (f32)fn_800F04DC(x) + lbl_8036558C; return t; }
f32 fn_801FC1F4(f32 x) { return lbl_803655CC * (g(x) - lbl_8036558C); }

} /* extern "C" */
