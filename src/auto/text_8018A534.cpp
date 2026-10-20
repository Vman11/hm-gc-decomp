// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_803649FC;
extern f32 lbl_80364A20;
extern f32 lbl_80364A24;
extern f32 lbl_803649F8;
void __dla__FPv(void *);
void __dl__FPv(void *);
void fn_8013E8C0(void *);
void fn_8014AB08(void *);
void __dt__9C8013ECE4Fv(void *, s32);

void *__dt__9C8018A604Fv(u8 *p, s16 f) {
    if (p != 0) {
        if (*(void **)(p + 84) != 0) {
            __dla__FPv(*(void **)(p + 84));
        }
        fn_8013E8C0(p + 8);
    *(s32 *)(p + 0) = 0;
    *(s32 *)(p + 4) = 0;
        fn_8014AB08(p + 16);
        fn_8014AB08(p + 32);
        fn_8014AB08(p + 48);
    *(f32 *)(p + 64) = lbl_803649FC;
    *(f32 *)(p + 68) = lbl_803649FC;
    *(f32 *)(p + 72) = lbl_80364A20;
    *(f32 *)(p + 76) = lbl_80364A24;
    *(s32 *)(p + 80) = 0;
    *(s32 *)(p + 84) = 0;
    *(f32 *)(p + 88) = lbl_803649FC;
    *(f32 *)(p + 92) = lbl_803649F8;
        __dt__9C8013ECE4Fv(p + 8, -1);
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
