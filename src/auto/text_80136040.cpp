// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80136040 { u8 pad[0x10]; virtual void p0(); virtual void m(); };
extern "C" { void fn_800F9638(void *); void fn_8012C4A8(void *); }

void fn_80136040(u8 *p) {
    fn_800F9638(p + 780);
    fn_800F9638(p + 756);
    fn_800F9638(p + 732);
    fn_800F9638(p + 708);
    fn_800F9638(p + 660);
    fn_800F9638(p + 684);
    ((V_80136040 *)(p + 624))->m();
    fn_800F9638(p + 600);
    ((V_80136040 *)(p + 564))->m();
    fn_800F9638(p + 540);
    ((V_80136040 *)(p + 504))->m();
    fn_800F9638(p + 480);
    ((V_80136040 *)(p + 444))->m();
    fn_800F9638(p + 420);
    ((V_80136040 *)(p + 384))->m();
    fn_800F9638(p + 360);
    ((V_80136040 *)(p + 324))->m();
    fn_800F9638(p + 300);
    ((V_80136040 *)(p + 264))->m();
    fn_800F9638(p + 240);
    ((V_80136040 *)(p + 204))->m();
    fn_800F9638(p + 180);
    ((V_80136040 *)(p + 144))->m();
    fn_800F9638(p + 120);
    ((V_80136040 *)(p + 84))->m();
    fn_800F9638(p + 60);
    *(s32 *)(p + 52) = 0;
    fn_8012C4A8(p);
}

} /* extern "C" */
