/* Functions from 0x801F5DF4 to 0x801F5E3C, found by decomp-toolkit. */
#include "common.h"

typedef struct Inner {
    u32 pad0;
    s32 unk4;
    s32 unk8;
} Inner;

typedef struct Outer {
    Inner ***unk0;
    s32 unk4;
    s32 unk8;
} Outer;

void fn_801F5DF4(Outer *arg0, s32 arg1, s32 arg2) {
    arg0->unk4 = arg1;
    (**arg0->unk0)->unk4 = arg0->unk4;
    (**arg0->unk0)->unk8 = arg0->unk4 + arg2;
    arg0->unk8 = (**arg0->unk0)->unk8;
}
