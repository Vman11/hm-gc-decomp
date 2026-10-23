// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80153420(f32 (*m)[4]) {
    f32 t[3][4];
    f32 (*tp)[4] = t;
    tp[0][0] = m[0][0];
    tp[0][1] = m[0][1];
    tp[0][2] = m[0][2];
    tp[1][0] = m[1][0];
    tp[1][1] = m[1][1];
    tp[1][2] = m[1][2];
    tp[2][0] = m[2][0];
    tp[2][1] = m[2][1];
    tp[2][2] = m[2][2];
    m[0][0] = t[1][1] * t[2][2] - t[1][2] * t[2][1];
    m[0][1] = -(t[0][1] * t[2][2] - t[0][2] * t[2][1]);
    m[0][2] = t[0][1] * t[1][2] - t[0][2] * t[1][1];
    m[1][0] = -(t[1][0] * t[2][2] - t[1][2] * t[2][0]);
    m[1][1] = t[0][0] * t[2][2] - t[0][2] * t[2][0];
    m[1][2] = -(t[0][0] * t[1][2] - t[0][2] * t[1][0]);
    m[2][0] = t[1][0] * t[2][1] - t[1][1] * t[2][0];
    m[2][1] = -(t[0][0] * t[2][1] - t[0][1] * t[2][0]);
    m[2][2] = t[0][0] * t[1][1] - t[0][1] * t[1][0];
}

} /* extern "C" */
