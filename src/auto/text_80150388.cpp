// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef f32 Row80150388[4];

void fn_80150388(Row80150388 *__restrict out, Row80150388 *__restrict a, Row80150388 *__restrict b) {
    out[0][0] = b[0][0] * a[0][0] + b[0][1] * a[1][0] + b[0][2] * a[2][0];
    out[0][1] = b[0][0] * a[0][1] + b[0][1] * a[1][1] + b[0][2] * a[2][1];
    out[0][2] = b[0][0] * a[0][2] + b[0][1] * a[1][2] + b[0][2] * a[2][2];
    out[1][0] = b[1][0] * a[0][0] + b[1][1] * a[1][0] + b[1][2] * a[2][0];
    out[1][1] = b[1][0] * a[0][1] + b[1][1] * a[1][1] + b[1][2] * a[2][1];
    out[1][2] = b[1][0] * a[0][2] + b[1][1] * a[1][2] + b[1][2] * a[2][2];
    out[2][0] = b[2][0] * a[0][0] + b[2][1] * a[1][0] + b[2][2] * a[2][0];
    out[2][1] = b[2][0] * a[0][1] + b[2][1] * a[1][1] + b[2][2] * a[2][1];
    out[2][2] = b[2][0] * a[0][2] + b[2][1] * a[1][2] + b[2][2] * a[2][2];
}

} /* extern "C" */
