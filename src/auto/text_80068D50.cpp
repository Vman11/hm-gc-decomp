// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct VG_80068D50 { u8 pad[8]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual s32 get(s32); };
s32 fn_80261114(u8 *, char *, s32);
void *fn_80110444(void *, char *, s32);
VG_80068D50 **fn_8010FEDC(void *, void *, char *, s32);
void fn_800662C4(u8 *, void *);
extern char lbl_80297878[];
extern char lbl_8035E7E4[5];
extern char lbl_8035E7EC[8];
extern char lbl_8035E7F4[8];

#pragma opt_propagation off
void fn_80068D50(u8 *p, void *a) {
    char *str = lbl_80297878;
    void *g;
    *(s32 *)(p + 372) = fn_80261114(p, str + 24, 1);
    *(s32 *)(p + 384) = fn_80261114(p, str + 36, 1);
    *(s32 *)(p + 376) = fn_80261114(p, str + 52, 1);
    *(s32 *)(p + 396) = fn_80261114(p, str + 72, 1);
    *(s32 *)(p + 392) = fn_80261114(p, lbl_8035E7E4, 1);
    *(s32 *)(p + 400) = fn_80261114(p, str + 84, 1);
    *(s32 *)(p + 404) = fn_80261114(p, str + 96, 1);
    *(s32 *)(p + 416) = fn_80261114(p, str + 108, 1);
    g = fn_80110444(*(void **)(p + 12), lbl_8035E7EC, 0);
    *(s32 *)(p + 388) = (*fn_8010FEDC(*(void **)(p + 12), g, lbl_8035E7F4, 0))->get(0);
    fn_800662C4(p, a);
}
#pragma opt_propagation reset

} /* extern "C" */
