#include "common.h"

extern "C" {

/* NonMatching draft (wMF): SDIFF 8. Left: target sets li r5,0 first and builds &lbl_80302DDC in r4 after the argv store (mine: lis r5 at the top). Tried store order, inline wrappers, C++ object type, GC 1.3/2.0p1/2.6. */
extern char **lbl_8035A1D0;
extern int lbl_8035A1D4;
struct C800642B8 { u8 d[0x100]; };
extern C800642B8 lbl_80302DDC;
int fn_800629DC(void *, int, int);
void fn_80061E80(void *);
void fn_800619B8(void *);
int main(int argc, char **argv) {
    lbl_8035A1D0 = argv;
    lbl_8035A1D4 = argc;
    if (fn_800629DC(&lbl_80302DDC, 0, 0) == 0) {
        fn_80061E80(&lbl_80302DDC);
    }
    fn_800619B8(&lbl_80302DDC);
    return 1;
}

} /* extern "C" */
