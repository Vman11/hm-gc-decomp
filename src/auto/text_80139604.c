/* Functions from 0x80139604 to 0x801397FC, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    u8 pad[0x10];
    u32 flags;
    u32 count;
} Unk80139604A;

typedef struct {
    u32 flags;
    u32 count;
    f32 v[4];
    f32 w[8];
} Unk80139604B;

typedef struct {
    u8 *data0;
    u32 stride0;
    u8 *data1;
    u32 stride1;
} Unk80139604C;
