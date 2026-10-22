// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_80357740[];
extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035B654;
extern f32 lbl_8035B650;
extern volatile f64 lbl_80366610;
f64 fn_800EFDA4(f64 x);
void *__ct__9C8018B724Fv(void *p);
void __dt__9C8018B724Fv(void *p, s16 f);
void *__ct__9C8018C334Fv(void *p);
void __dt__9C8018C334Fv(void *p, s16 f);
void __register_global_object(void *obj, void *dtor, void *chain);

#pragma opt_propagation off
void fn_802557E0(void) {
    u8 *base = lbl_80357740;
    lbl_8035B654 = lbl_803596E0[0];
    lbl_8035B650 = fn_800EFDA4(lbl_80366610);
    __register_global_object(__ct__9C8018B724Fv(base + 268), (void *)__dt__9C8018B724Fv, base + 256);
    __register_global_object(__ct__9C8018C334Fv(base + 432), (void *)__dt__9C8018C334Fv, base + 420);
}
#pragma opt_propagation reset

__declspec(section ".ctors") static void (*const ctor_802557E0)(void) = fn_802557E0;

} /* extern "C" */
