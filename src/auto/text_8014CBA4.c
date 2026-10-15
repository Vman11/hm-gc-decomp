/* Functions from 0x8014CBA4 to 0x8014CC80, found by decomp-toolkit. */
#include "common.h"
typedef struct {
    s32 v[4];
} Quad;

typedef struct {
    Quad q;
    f32 x;
    f32 y;
} QuadXY;

typedef struct {
    f32 x, y, z, w;
} Plane;

extern f32 lbl_803644E0;
extern f32 lbl_803644E4;
