// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern u8 lbl_802E3998[];
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
C80118E78::C80118E78() {
    *(u8 **)((u8 *)this + 12) = lbl_802E3998;
    *(u8 **)(*(u8 **)this + 208) = lbl_802E3998 + 24;
    *(s32 *)(*(u8 **)this + 212) = ((u8 *)this + 16) - *(u8 **)this;
    *(u32 *)(pad + 20) = 0x30000000;
    *(u32 *)(pad + 16) = 4;
    x4 = 1;
    x8 = 1;
}
extern "C" {

} /* extern "C" */
