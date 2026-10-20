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
extern char lbl_80364E74[8];
extern char lbl_80364E78[8];
s32 fn_80215C84(C80215F50 *, char *, char *, s32, s32);
void fn_80060E30(char *, char *, ...);
void fn_801A5560(void *, void *, u32, void *, void *);
void fn_80215BFC(C80215F50 *);

s32 fn_801A62DC(void *p, void *a, char *c, void *x, void *d, void *e) {
    C80215F50 f;
    s32 r;
    r = fn_80215C84(&f, c, lbl_80364E74, 2, 0);
    if (r != 0) {
        fn_80060E30((char *)r, lbl_80364E78, c, lbl_80364E74);
    }
    fn_801A5560(p, a, f.x, d, e);
    fn_80215BFC(&f);
    return 0;
}

} /* extern "C" */
