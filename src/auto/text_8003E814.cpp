// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8003E814 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void *m(); };
extern "C" { extern u8 *lbl_8035A1DC; extern f32 lbl_8035C22C; extern f32 lbl_8035C1E0; extern f32 lbl_8035C230; extern f32 lbl_8035C234; void fn_80129938(void *, void *); void fn_8012962C(void *, f32, f32, f32, f32); }

void fn_8003E814(u8 *p) {
    *(s32 *)(p + 676) = *(s32 *)(lbl_8035A1DC + 11344);
    *(void **)(p + 672) = (*(V_8003E814 **)(lbl_8035A1DC + 11332))->m();
    fn_80129938(*(void **)(p + 672), *(void **)(lbl_8035A1DC + 11340));
    fn_8012962C(*(void **)(p + 672), lbl_8035C22C, lbl_8035C1E0, lbl_8035C230, lbl_8035C234);
}

} /* extern "C" */
