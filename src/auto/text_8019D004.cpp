// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct Vec { f32 x, y, z; } Vec;
typedef struct Ent { u32 f0; void *f4; u8 pad[8]; } Ent;
typedef struct G { u8 pad[120]; s32 f120; u8 pad2[144 - 124]; Ent *f144; } G;
typedef struct Obj { u8 pad[28]; u8 f28[4]; } Obj;
extern Vec lbl_803301F8;
extern Vec lbl_80330204;
extern Vec lbl_80330210;
extern f64 lbl_80364CD8;
extern f32 lbl_8035AD9C;
extern G *lbl_8035AD98;
s32 fn_801009DC(void *, Vec *, Vec *, f32 *, Vec *, Vec *, f32 *, s32);
s32 fn_800FC4A0(G *, f32);
void fn_8018B500(G *, s32);

void fn_8019D004(Obj *o) {
    f32 out12;
    f32 t;
    Vec out16;
    t = lbl_80364CD8 * lbl_8035AD9C;
    if (fn_801009DC(o->f28, &lbl_803301F8, &lbl_80330204, &t, &lbl_80330210, &out16, &out12, 0)) {
        if (fn_800FC4A0(lbl_8035AD98, out12)) {
            lbl_8035AD98->f144[lbl_8035AD98->f120].f4 = o;
            fn_8018B500(lbl_8035AD98, 3);
        }
    }
}

} /* extern "C" */
