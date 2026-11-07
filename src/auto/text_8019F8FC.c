/* Functions from 0x8019F8FC to 0x8019F924, found by decomp-toolkit. */
#include "common.h"
extern f32 lbl_80364D78;
extern f32 lbl_80364D7C;

typedef struct Unk8019F8FC {
    u8 pad0[0x14];
    f32 unk14;
} Unk8019F8FC;

void fn_8019F8FC(Unk8019F8FC *arg0, f32 *arg1) {
    f32 w, k;
    k = *(volatile f32 *)&lbl_80364D78;
    w = *(volatile f32 *)&arg0->unk14;
    arg1[0] = k;
    arg1[1] = lbl_80364D7C;
    arg1[2] = lbl_80364D78;
    arg1[3] = -w;
}
