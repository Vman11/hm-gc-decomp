// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct X {
    u8 pad[1912];
    f32 f1912, f1916, f1920, f1924;
    u8 pad2[8];
    f32 f1936, f1940;
    s32 i1944, i1948, i1952, i1956, i1960, i1964, i1968, i1972, i1976, i1980, i1984;
} X;
typedef struct G { u8 pad[13320]; s32 f13320; } G;
extern void *lbl_8035A00C;
extern G *lbl_8035A1DC;
extern X *lbl_8035B65C;
extern f32 lbl_8035BFA0;
void fn_800391E4(void *, s32);
void fn_800391A8(void *, s32);
void fn_80252314(void *, void *, s32);

void fn_80037620(void *a, void *b, s32 c) {
    if (c == 0) {
        fn_800391E4(lbl_8035A00C, 1);
        fn_800391A8(lbl_8035A00C, 0);
        if (lbl_8035A1DC->f13320 == 1 && lbl_8035B65C != 0) {
            X *x = lbl_8035B65C;
            x->f1912 = x->f1916 = x->f1920 = x->f1924 = x->f1936 = x->f1940 = lbl_8035BFA0;
            x->i1944 = x->i1948 = x->i1952 = x->i1956 = x->i1960 = x->i1964 = x->i1968 = x->i1972 = x->i1976 = x->i1980 = x->i1984 = 0;
        }
    }
    fn_80252314(a, b, c);
}

} /* extern "C" */
