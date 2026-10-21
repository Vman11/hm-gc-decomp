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
extern char lbl_80366550[4];
extern char lbl_80366554[4];
s32 fn_80215C84(C80215F50 *, void *, char *, s32, s32);
void fn_80060E30(char *, ...);
void fn_80252614(void *, void *, void *, u32);
void fn_80215BFC(C80215F50 *);

s32 fn_80252558(void *a, void *b, void *c, void *d, s32 e) {
    C80215F50 f;
    s32 r;
    if (e != 0) {
        r = fn_80215C84(&f, c, lbl_80366550, 2, 0);
    } else {
        r = fn_80215C84(&f, c, lbl_80366554, 2, 0);
    }
    if (r != 0) {
        fn_80060E30((char *)r, c);
    }
    fn_80252614(a, b, d, f.x);
    fn_80215BFC(&f);
    return 0;
}

} /* extern "C" */
