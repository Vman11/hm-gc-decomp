// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8010A474 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual u32 m(); };
extern u32 lbl_80363940;
void *fn_800FB284(void *);
s32 stricmp(void *, void *);
void fn_8010A02C(void *, void *, void *);

s32 fn_8010A474(u8 *p, void *a, V_8010A474 *q) {
    void *r = fn_800FB284(q);
    if (q->m() == 2) {
        *(s32 *)(p + 0x34) = stricmp((u8 *)q + 0x14, &lbl_80363940) == 0;
    } else {
        *(s32 *)((u8 *)q + 4) = 1;
    }
    fn_8010A02C(p, a, r);
    return 0;
}

} /* extern "C" */
