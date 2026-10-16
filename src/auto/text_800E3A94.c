/* Functions from 0x800E3A94 to 0x800E3CDC, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    f64 d;
    f32 ps0;
    f32 ps1;
} UnkFReg;

typedef struct UnkFrame {
    struct UnkFrame* prev;
    u32 unk4;
} UnkFrame;

typedef struct {
    UnkFReg f[32];
    u32 r[32];
    u32 unk280;
    UnkFrame* frame;
} UnkRegCtx;
