/* Functions from 0x8022EAB4 to 0x8022EB48, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    u32 flags;
    u8 pad4[0x94];
    u32 flags98;
    u8 pad9C[0x48];
} UnkElem8022EAB4;

typedef struct {
    u8 pad0[4];
    u32 *counts;
    u8 pad8[4];
    u32 num;
    UnkElem8022EAB4 **elems;
} UnkObj8022EAB4;
