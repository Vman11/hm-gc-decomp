// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80248EAC { u8 pad[0x8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void *m(s32); };
extern void *lbl_8035B478;
u8 *fn_800F80DC(void *, void *, s32);
void *fn_801104C0(void *, s8 *, void *, s32);
V_80248EAC **fn_8010FEDC(void *, void *, void *, s32);

static inline V_80248EAC *find_80248EAC(void *a, s8 *b, void *c) {
    u8 *r = fn_800F80DC(lbl_8035B478, a, 0);
    if (r != NULL) {
        void *k;
        V_80248EAC **t;
        if (b[0] != 0) {
            k = fn_801104C0(r, b, r + 8, 0);
        } else {
            k = r + 8;
        }
        t = fn_8010FEDC(r, k, c, 1);
        if (t != NULL) {
            return *t;
        }
    }
    return 0;
}

void *fn_80248EAC(void *a, s8 *b, void *c) {
    return find_80248EAC(a, b, c)->m(0);
}

} /* extern "C" */
