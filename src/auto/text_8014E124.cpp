// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct V8014E1E0 { u8 pad[12]; virtual void f0(); };
extern "C" {
extern void *lbl_802E66B0[];
extern void __dt__9C80219CACFv(void);
extern void fn_800E1F04(void *arr, void (*dtor)(void), u32 size, u32 n);
extern void __dt__9C80118E78Fv(void *p, s16 f);
extern void __dt__9C8011F770Fv(void *p, s16 f);
extern void __dl__FPv(void *p);

void *__dt__9C8014E1E0Fv(u8 *self, s16 flags) {
    if (self != 0) {
        *(void ***)(self + 12) = lbl_802E66B0;
        *(void ***)(*(u8 **)self + 208) = lbl_802E66B0 + 19;
        *(s32 *)(*(u8 **)self + 212) = (self + 548) - *(u8 **)self;
        ((V8014E1E0 *)self)->f0();
        fn_800E1F04(self + 36, __dt__9C80219CACFv, 64, 6);
        __dt__9C80118E78Fv(self, 0);
        if (flags) __dt__9C8011F770Fv(self + 548, 0);
        if (flags > 0) __dl__FPv(self);
    }
    return self;
}

} /* extern "C" */
