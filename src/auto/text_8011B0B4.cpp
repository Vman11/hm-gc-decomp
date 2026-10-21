// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035AB30;
u32 OSGetArenaLo(void);
void fn_800604C4(s32, s32, s32, s32);
u32 fn_800FBB08(void);
void fn_800F7D54(void *, u32, u32, u32);
void *fn_800F7B04(void *, u32, s32);
void *fn_802078CC(void);
void *fn_802078E4(void);
void *fn_800F79FC(void *, void *, void *, s32);

void fn_8011B0B4(u8 *self, u32 *cfg) {
    u32 v;
    u32 s;
    *(u32 *)(self + 668) = (OSGetArenaLo() + 31) & ~31;
    if (*(u32 *)(self + 668) == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    v = fn_800FBB08() - 0x40000;
    if (cfg[0] == 0 || cfg[0] > v) {
        cfg[0] = v;
    }
    fn_800F7D54(self + 4, *(u32 *)(self + 668), cfg[0], cfg[1]);
    s = cfg[2];
    if (s == 0) {
        s = 0x10000;
    }
    *(void **)(self + 660) = fn_800F7B04(self + 4, s, 2);
    lbl_8035AB30 = fn_800F79FC(self + 4, fn_802078E4(), fn_802078CC(), 2);
}

} /* extern "C" */
