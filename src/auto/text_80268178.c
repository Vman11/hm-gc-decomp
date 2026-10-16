/* Functions from 0x80268178 to 0x80268290, found by decomp-toolkit. */
#include "common.h"

void fn_80268178(s32 *object, s32 value) {
    s32 index;
    switch (value) {
    case 13: index = 1; break;
    case 12: index = 2; break;
    case 10: case 11: case 14: index = 3; break;
    case 1: case 5: case 6: index = 4; break;
    case 2: case 3: index = 5; break;
    case 0: case 4: index = 6; break;
    case 9: index = 7; break;
    case 8: index = 8; break;
    case 7: index = 9; break;
    case 15: index = 20; break;
    default: index = 0; break;
    }
    {
        s32 current = object[index + 346];
        if (current != value) return;
        object[index + 346] = 15;
    }
}

void fn_8026820C(s32 *object, u32 value) {
    s32 index;
    switch (value) {
    case 13: index = 1; break;
    case 12: index = 2; break;
    case 10: case 11: case 14: index = 3; break;
    case 1: case 5: case 6: index = 4; break;
    case 2: case 3: index = 5; break;
    case 0: case 4: index = 6; break;
    case 9: index = 7; break;
    case 8: index = 8; break;
    case 7: index = 9; break;
    case 15: index = 20; break;
    default: index = 0; break;
    }
    object[index + 346] = value;
}

