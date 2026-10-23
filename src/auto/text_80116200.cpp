// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern s32 lbl_8035AB00;
void *memset(void *, int, u32);
} /* extern "C" */
struct C800F92E8 { u8 pad[20]; C800F92E8(); ~C800F92E8(); };
struct C80116200 {
    u8 f0[1120];
    u8 pad1[960];
    s32 f2080[2000];
    s32 f10080;
    s32 f10084;
    s32 f10088;
    s32 f10092;
    s32 f10096;
    s32 f10100;
    s32 f10104;
    C800F92E8 m10108;
    s32 f10128;
    s32 f10132;
    s32 f10136;
    s32 f10140;
    s32 f10144;
    s32 f10148;
    s32 f10152;
    C80116200();
};
C80116200::C80116200() {
    u32 i;
    f10148 = 0;
    lbl_8035AB00 = 0;
    f10096 = 0;
    f10128 = 0;
    f10100 = 0;
    f10080 = 0;
    f10088 = 0;
    f10092 = 0;
    f10136 = 0;
    f10140 = 4;
    f10104 = 0;
    f10152 = 0;
    f10132 = 0;
    memset(this, 0, 1120);
    for (i = 0; i < 2000; i++) f2080[i] = 0;
}
extern "C" {

} /* extern "C" */
