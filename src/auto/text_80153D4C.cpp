// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct { u32 a; u32 b; u16 h8; u16 c; u8 rest[16]; u32 x, y; } E80153D4C;
typedef struct { u8 pad[120]; u32 n; E80153D4C arr[1]; } P80153D4C;
void fn_8014CAA0(E80153D4C *dst, const E80153D4C *src);
void fn_80153D4C(const P80153D4C *p, u32 a, u32 b, u32 c, E80153D4C *dst) {
    u32 i;
    for (i = 0; i < p->n; i++) {
        if (a == p->arr[i].a && b == p->arr[i].b && c == p->arr[i].c) {
            fn_8014CAA0(dst, &p->arr[i]);
            return;
        }
    }
    for (i = 0; i < p->n; i++) {
        if (a == p->arr[i].a && b == p->arr[i].b && p->arr[i].c > c) {
            fn_8014CAA0(dst, &p->arr[i]);
            return;
        }
    }
    for (i = 0; i < p->n; i++) {
        if (p->arr[i].a >= a && p->arr[i].b >= b && p->arr[i].c >= c) {
            fn_8014CAA0(dst, &p->arr[i]);
            return;
        }
    }
    fn_8014CAA0(dst, &p->arr[0]);
}

} /* extern "C" */
