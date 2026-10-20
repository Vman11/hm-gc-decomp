// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8024B898 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(void *, void *); };
extern "C" { extern u8 *lbl_8035B594; extern char lbl_80366398[8]; u32 fn_800EB1B4(void); void *fn_8024E69C(void *, void *); void fn_802502BC(void *); void *fn_8024E57C(void *, void *); void fn_80250EBC(void *); void *fn_8024E3DC(void *, void *, void *); }

void fn_8024B898(u8 *p) {
    *(s32 *)(p + 28) = 2;
    *(s32 *)(p + 32) = 1;
    (*(s32 **)(lbl_8035B594 + 844))[*(s32 *)(p + 48)] = 1;
    if (*(s32 *)(p + 40) != 0) {
        u32 n = *(u32 *)(p + 88);
        u32 k = 0;
        u32 i;
        if (n != 0) {
            k = fn_800EB1B4() % n;
        }
        *(u32 *)(p + 44) = k;
        i = *(u32 *)(p + 44);
        switch ((*(s32 **)(p + 96))[i]) {
        case 1:
            fn_802502BC(fn_8024E69C(lbl_8035B594, *(u8 **)(p + 92) + i * 8));
            break;
        case 2:
            fn_80250EBC(fn_8024E57C(lbl_8035B594, *(u8 **)(p + 92) + i * 8));
            break;
        case 3: {
            u8 buf[8];
            ((V_8024B898 *)fn_8024E3DC(lbl_8035B594, *(u8 **)(p + 92) + i * 8, buf))->m(lbl_80366398, lbl_80366398);
            break;
        }
        }
    }
}

} /* extern "C" */
