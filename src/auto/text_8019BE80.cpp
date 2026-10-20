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
extern char lbl_80364CC8[8];
extern char lbl_80364CCC[8];
void fn_8019BB1C(void *);
s32 fn_80215C84(C80215F50 *, char *, char *, s32, s32);
void fn_80060E30(char *, char *, ...);
void fn_8019CB40(void *, void *, u32);
void fn_80215BFC(C80215F50 *);

void fn_8019BE80(u8 *p, void *a, char *c) {
    C80215F50 f;
    s32 r;
    if (*(void **)(p + 64) != 0) {
        fn_8019BB1C(p);
    }
    r = fn_80215C84(&f, c, lbl_80364CC8, 2, 0);
    if (r != 0) {
        fn_80060E30((char *)r, lbl_80364CCC, c, lbl_80364CC8);
    }
    fn_8019CB40(p, a, f.x);
    fn_80215BFC(&f);
}

} /* extern "C" */
