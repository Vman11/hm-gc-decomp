// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct X80270258 {
    u8 pad[292];
    virtual void v0();
    virtual void v1();
    virtual void v2(void *desc, s32 a, s32 b);
};
struct C80215F50 {
    u8 pad[0x2C];
    X80270258 *x;
    u8 pad2[8];
    C80215F50();
    ~C80215F50();
};
extern "C" {

extern char lbl_80366E88[4];
extern char lbl_80366E8C[4];
extern u8 lbl_80359E68[8];
s32 fn_80215C84(C80215F50 *f, char *name, char *mode, s32 a, s32 b);
void fn_80215BFC(C80215F50 *f);
void fn_8026F768(void *self, X80270258 *x);

void fn_80270258(void *self, char *name, s32 flag) {
    C80215F50 f;
    X80270258 *x;
    if (fn_80215C84(&f, name, flag ? lbl_80366E88 : lbl_80366E8C, 2, 0) != 0) {
        return;
    }
    x = f.x;
    x->v2(lbl_80359E68, 1, 0);
    fn_8026F768(self, x);
    fn_80215BFC(&f);
}

} /* extern "C" */
