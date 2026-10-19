// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803658C8;
extern f32 lbl_803658CC;
extern f32 lbl_803658D0;
void fn_80118944(void *, f32);

void fn_80219BC0(u8 *p, f32 f) {
    switch (*(s32 *)(p + 8)) {
    case 0x40000000:
    case 0x40000001:
        if (f > lbl_803658C8) {
            f = lbl_803658C8;
        }
        break;
    case 0x40000002:
    case 0x40000003:
        if (f > lbl_803658CC) {
            f = lbl_803658CC;
        }
        break;
    default:
        if (f > lbl_803658D0) {
            f = lbl_803658D0;
        }
        break;
    }
    fn_80118944(p, f);
}

} /* extern "C" */
