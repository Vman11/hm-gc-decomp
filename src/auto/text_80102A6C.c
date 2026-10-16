/* Functions from 0x80102A6C to 0x80102C30, found by decomp-toolkit. */
#include "common.h"
typedef struct {
    f32 x;
    u8 pad[0x10];
} Unk14;

typedef struct {
    f32 x;
    u8 pad[0xC];
} Unk10;

typedef struct {
    Unk14 *a;
    Unk10 *b;
    Unk10 *c;
    u32 countAB;
    u32 countC;
} UnkArrays;

extern f32 lbl_80363864;
