// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct { f32 x, y, z; } Vec_8017D1F0;
typedef struct { u32 a; void *p; u32 r; u32 d; } Ent_8017D1F0;
typedef struct {
    u32 flags;
    u8 pad[116];
    s32 idx;
    u8 pad2[20];
    Ent_8017D1F0 *ents;
} G_8017D1F0;

extern u8 lbl_803301F8[];
extern u8 lbl_80330204[];
extern G_8017D1F0 *lbl_8035AD98;
u32 fn_800FE938(void *, void *, void *, Vec_8017D1F0 *, Vec_8017D1F0 *, f32 *, f32 *);
s32 fn_800FC4A0(G_8017D1F0 *, f32);
void fn_8018B500(G_8017D1F0 *, s32);

void fn_8017D1F0(u8 *p) {
    Vec_8017D1F0 a, b;
    f32 t1, t2;
    u32 r = fn_800FE938(p + 28, lbl_803301F8, lbl_80330204, &a, &b, &t1, &t2);
    if (r & 0x3F) {
        if (fn_800FC4A0(lbl_8035AD98, t1)) {
            lbl_8035AD98->ents[lbl_8035AD98->idx].p = p;
            lbl_8035AD98->ents[lbl_8035AD98->idx].r = r;
            fn_8018B500(lbl_8035AD98, 2);
        }
    }
    if (r & 0xFC0) {
        if (!(lbl_8035AD98->flags & 0x10)) {
            if (fn_800FC4A0(lbl_8035AD98, t2)) {
                lbl_8035AD98->ents[lbl_8035AD98->idx].p = p;
                lbl_8035AD98->ents[lbl_8035AD98->idx].r = r;
                fn_8018B500(lbl_8035AD98, 2);
            }
        }
    }
}

} /* extern "C" */
