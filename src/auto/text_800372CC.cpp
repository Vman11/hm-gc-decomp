// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_800372CC { u8 pad[0x8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void *m(s32); };
extern "C" { extern char lbl_80294AC4[]; extern char lbl_8035BF80[8]; extern char lbl_8035BF88[8]; void *fn_80261114(void *, const char *, s32); void *fn_80110444(void *, const char *, s32); V_800372CC **fn_8010FEDC(void *, void *, const char *, s32); void fn_800662C4(void *, void *); }

void fn_800372CC(u8 *p, void *a) {
    void *r;
    *(void **)(p + 388) = fn_80261114(p, lbl_80294AC4, 1);
    r = fn_80110444(*(void **)(p + 12), lbl_8035BF80, 0);
    *(void **)(p + 392) = (*fn_8010FEDC(*(void **)(p + 12), r, lbl_8035BF88, 0))->m(0);
    fn_800662C4(p, a);
}

} /* extern "C" */
