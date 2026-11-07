/* Functions from 0x8019F188 to 0x8019F1B0, found by decomp-toolkit. */
#include "common.h"
extern f32 lbl_80364D74;
extern f32 lbl_80364D70;

typedef struct Unk8019F188 {
    u8 pad0[0x14];
    f32 unk14;
} Unk8019F188;

void fn_8019F188(Unk8019F188 *arg0, f32 *arg1) {
    f32 w, k;
    k = *(volatile f32 *)&lbl_80364D74;
    w = *(volatile f32 *)&arg0->unk14;
    arg1[0] = k;
    arg1[1] = lbl_80364D70;
    arg1[2] = lbl_80364D70;
    arg1[3] = -w;
}
