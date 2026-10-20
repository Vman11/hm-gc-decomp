// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8024B754 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void m(s32); };
extern "C" { extern void *lbl_8035B594; void *fn_8024E69C(void *, void *); void fn_802501D4(void *); void *fn_8024E57C(void *, void *); void fn_80250E80(void *); void *fn_8024E3DC(void *, void *, void *); }

void fn_8024B754(u8 *p) {
    *(s32 *)(p + 28) = 0;
    if (*(s32 *)(p + 40) != 0 && *(u32 *)(p + 44) != 0xFFFFFFFF) {
        u32 i = *(u32 *)(p + 44);
        switch ((*(s32 **)(p + 96))[i]) {
        case 1:
            fn_802501D4(fn_8024E69C(lbl_8035B594, *(u8 **)(p + 92) + i * 8));
            break;
        case 2:
            fn_80250E80(fn_8024E57C(lbl_8035B594, *(u8 **)(p + 92) + i * 8));
            break;
        case 3: {
            u8 buf[8];
            ((V_8024B754 *)fn_8024E3DC(lbl_8035B594, *(u8 **)(p + 92) + i * 8, buf))->m(0);
            break;
        }
        }
    }
}

} /* extern "C" */
