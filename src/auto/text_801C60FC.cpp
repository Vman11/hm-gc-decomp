// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern "C" { extern void *lbl_8035AFCC; extern u8 lbl_802EBF58[]; extern f32 lbl_80365000; extern f32 lbl_80364FFC; void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); void fn_801B31A4(void *); }

struct C_801C60FC {
    u8 pad[384];
    C_801C60FC() {
        fn_801B31A4(this);
        *(void **)(pad + 128) = lbl_802EBF58;
        *(s32 *)(pad + 356) = 0;
        *(s32 *)(pad + 360) = 0;
        *(s32 *)(pad + 364) = 0;
        *(f32 *)(pad + 372) = lbl_80365000;
        *(f32 *)(pad + 368) = lbl_80364FFC;
    }
};

void *fn_801C60FC(void) {
    C_801C60FC *o;
    if (lbl_8035AFCC == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AFCC);
    o = new C_801C60FC;
    fn_800F7E98();
    if (o == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return o;
}

} /* extern "C" */
