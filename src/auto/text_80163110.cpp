// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C80215F50 {
    u8 pad[44];
    u32 x;
    u8 pad2[8];
    C80215F50();
    ~C80215F50();
};
struct S_80163110 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void m(void *, s32, s32); };
extern "C" { extern char lbl_80364664[8]; extern char lbl_80364668[8]; extern u8 lbl_802E70C8[]; s32 fn_80215C84(C80215F50 *, char *, char *, s32, s32); void fn_80060E30(char *, char *, ...); void fn_80161E64(void *, void *, void *); void fn_80215BFC(C80215F50 *); }

void fn_80163110(u8 *p, void *a) {
    S_80163110 *s;
    C80215F50 f;
    s32 r;
    r = fn_80215C84(&f, *(char **)(p + 8), lbl_80364664, 2, 0);
    if (r != 0) {
        fn_80060E30((char *)r, lbl_80364668, *(char **)(p + 8), lbl_80364664);
    }
    s = (S_80163110 *)f.x;
    s->m(lbl_802E70C8, 103, 0);
    fn_80161E64(p, a, s);
    fn_80215BFC(&f);
}

} /* extern "C" */
