// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_8035DCB0;
extern volatile f32 lbl_8035DCA0;
void fn_800A2ABC(void *);

void fn_80051AA8(u8 *p) {
    *(s32 *)(p + 532) = 0;
    *(s32 *)(p + 536) = 0;
    *(s32 *)(p + 540) = 0;
    *(s32 *)(p + 544) = 0;
    *(s32 *)(p + 548) = 0;
    *(s32 *)(p + 552) = 0;
    *(s32 *)(p + 556) = 0;
    *(s32 *)(p + 560) = 0;
    *(s32 *)(p + 564) = 0;
    *(s32 *)(p + 568) = 0;
    *(s32 *)(p + 572) = 0;
    *(s32 *)(p + 576) = 0;
    *(s32 *)(p + 580) = 0;
    *(s32 *)(p + 584) = 0;
    *(s32 *)(p + 588) = 0;
    *(s32 *)(p + 592) = 0;
    *(s32 *)(p + 596) = 0;
    *(f32 *)(p + 600) = lbl_8035DCB0;
    *(f32 *)(p + 604) = lbl_8035DCA0;
    *(f32 *)(p + 608) = lbl_8035DCA0;
    *(f32 *)(p + 612) = lbl_8035DCA0;
    *(f32 *)(p + 616) = lbl_8035DCA0;
    *(s32 *)(p + 620) = 0;
    *(f32 *)(p + 624) = lbl_8035DCA0;
    *(f32 *)(p + 628) = lbl_8035DCA0;
    *(s32 *)(p + 632) = 0;
    fn_800A2ABC(p);
}

} /* extern "C" */
