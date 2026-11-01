// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern f32 lbl_803655B8;
extern f32 lbl_8036558C;
extern f32 lbl_803655BC;
extern f32 lbl_80365594;
extern f32 lbl_80365598;
extern f64 lbl_803655C0;
f64 fn_800F04FC(f64 a, f64 b);
f32 fn_801FC18C(f32 x) { f32 t = lbl_803655B8 * x + lbl_8036558C; if (t < lbl_803655BC) t = lbl_80365594; else if (t >= lbl_8036558C) t = lbl_8036558C; else t = fn_800F04FC(lbl_803655C0, lbl_80365598 * (t - lbl_8036558C)); return t; }
