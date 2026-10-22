// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E66B0[];
void *memset(void *, int, unsigned long);
void fn_800FB700(void *, void *, s32);
} /* extern "C" */
struct C8011F770 {
    u8 pad[216];
    C8011F770();
    ~C8011F770();
};
struct C80118E78 : virtual C8011F770 {
    u32 x4;
    u32 x8;
    u32 xC;
    C80118E78();
    ~C80118E78();
};
struct C80219CAC {
    u8 data[64];
    C80219CAC();
    ~C80219CAC();
};
struct V8014E1E0 {
    u32 x10;
    V8014E1E0() {
        u8 *self = (u8 *)this - 16;
        *(u8 **)(self + 12) = lbl_802E66B0;
        *(u8 **)(*(u8 **)self + 208) = lbl_802E66B0 + 76;
        *(s32 *)(*(u8 **)self + 212) = (self + 548) - *(u8 **)self;
    }
};
struct C8014E1E0 : C80118E78 {
    V8014E1E0 v;
    u32 x14;
    u8 x18[4];
    u8 x1C[4];
    u32 x20;
    C80219CAC arr[6];
    u8 x1A4[128];
    C8014E1E0();
};
C8014E1E0::C8014E1E0() {
    v.x10 = 0;
    x14 = 0;
    memset(x18, 0, 4);
    memset(x1C, 0, 4);
    x20 = 0;
    memset(x1A4, 0, 128);
    fn_800FB700(pad + 36, x1A4, 63);
}
extern "C" {

} /* extern "C" */
