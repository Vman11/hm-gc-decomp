// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 *lbl_8035B488;
extern u8 *lbl_8035B65C;
extern u32 lbl_8035B8A0;
extern u32 lbl_8035B968;
extern u32 lbl_8035B970;
void fn_800303A8(void *, s32);
s32 fn_800F6CD0(void *, void *);
void fn_8002CA0C(void *, f32);
void fn_80180600(void *, f32);
void *fn_801AA960(void *, void *, void *);
void fn_801DB204(void *, void *);

void fn_8002AD6C(u8 *p) {
    u32 buf[4];
    f32 f = *(f32 *)(lbl_8035B488 + 0x14);
    *(f32 *)(p + 0x264) += f;
    fn_800303A8(buf, 0);
    if (fn_800F6CD0(buf, &lbl_8035B8A0) == 0) {
        *(s32 *)(p + 0x28C) = 1;
    }
    fn_8002CA0C(p, f);
    fn_80180600(*(void **)(p + 0xB4), f);
    if (fn_800F6CD0(buf, &lbl_8035B968) == 0) {
        u8 *g = lbl_8035B65C;
        u8 *r = *(u8 **)(g + 0x78);
        fn_801DB204(fn_801AA960(*(void **)(*(u8 **)(g + 0x24) + 0x33B0), &lbl_8035B970, &lbl_8035B968), *(void **)(r + 4));
    }
}

} /* extern "C" */
