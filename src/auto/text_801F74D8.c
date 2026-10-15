/* Functions from 0x801F74D8 to 0x801F7518, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    f32 x;
    f32 y;
} Vec2;

void fn_801F74D8(u8* arg0) {
    u8* obj;

    if (*(s32*)(arg0 + 0x68) == 0) {
        f32 y;
        f32 x;
        obj = *(u8**)(arg0 + 0x74);
        y = *(f32*)(obj + 0x10);
        x = *(f32*)(obj + 0xC);
        *(f32*)(arg0 + 0x58) = x;
        *(f32*)(arg0 + 0x5C) = y;
    }
    *(f32*)(arg0 + 0x70) = *(f32*)(arg0 + 0x6C);
    obj = *(u8**)(arg0 + 0x74);
    *(f32*)(obj + 0xC) = *(f32*)(arg0 + 0x58);
    *(f32*)(obj + 0x10) = *(f32*)(arg0 + 0x5C);
}
