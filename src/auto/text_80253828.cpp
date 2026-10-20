// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80253828 { u8 pad[0x10]; virtual void m(s32); };
extern "C" { extern u8 lbl_802F236C[]; void __dl__FPv(void *); }

void *fn_80253828(u8 *p, s16 f) {
    if (p != NULL) {
        V_80253828 *o;
        *(void **)p = lbl_802F236C;
        o = *(V_80253828 **)(p + 12);
        if (o != NULL) {
            if (o != NULL) {
                o->m(1);
            }
        }
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 12) = 0;
    *(s32 *)(p + 16) = 0;
    *(s32 *)(p + 20) = 1;
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
