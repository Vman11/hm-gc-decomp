#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern f32 lbl_8035AD50;
u8 lbl_8032FF18[0xc];
u8 lbl_8032FF24[0x12c];
static u8 lbl_80330050[0xc];
u8 lbl_8033005C[0x12c];
void *__ct__9C8015D9A4Fv(void *);
void __dt__9C8015D9A4Fv(void *, s32);
void __register_global_object(void *, void *, void *);

void fn_80179664(void) {
    lbl_8035AD50 = lbl_803596E0[0];
    __register_global_object(__ct__9C8015D9A4Fv(lbl_8032FF24), (void *)__dt__9C8015D9A4Fv, lbl_8032FF18);
    __register_global_object(__ct__9C8015D9A4Fv(lbl_8033005C), (void *)__dt__9C8015D9A4Fv, lbl_80330050);
}

__declspec(section ".ctors") static void (*const ctor_80179664)(void) = fn_80179664;

} /* extern "C" */
