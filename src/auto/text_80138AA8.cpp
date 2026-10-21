// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_803641C0[4];
extern char lbl_803641C4[6];
void fn_80060E30(...);
struct C80215F50 { u8 pad[0x24]; u8 *f36; u8 *f40; u8 *f44; u8 pad2[0x8]; C80215F50(); ~C80215F50(); };
s32 fn_80215C84(C80215F50 *, void *, char *, s32, s32);
void fn_80207A54(void *, void *);
void fn_801381AC(void *, void *, void *);
void fn_802079F0(void *, s32);
void fn_80215BFC(C80215F50 *);

void fn_80138AA8(void *a, void *b, void *c) {
    C80215F50 obj;
    s32 r;
    r = fn_80215C84(&obj, c, lbl_803641C0, 2, 0);
    if (r != 0) {
        fn_80060E30(r, lbl_803641C4, c, lbl_803641C0);
    }
    fn_80207A54(obj.f36, *(void **)(obj.f40 + 12));
    fn_801381AC(a, b, obj.f44);
    fn_802079F0(obj.f36, 0);
    fn_80215BFC(&obj);
}

} /* extern "C" */
