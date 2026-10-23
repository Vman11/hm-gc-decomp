// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802A9AA8[];
extern char lbl_80366838[5];
extern char lbl_80366840[8];
extern char lbl_80366848[8];

struct V8025ACF4 {
    u8 pad[8];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void *get(s32 x);
};

void *fn_80261114(void *p, char *name, s32 x);
void fn_80261B18(void *p, void *q);
void *fn_80110444(void *p, char *name, s32 x);
V8025ACF4 **fn_8010FEDC(void *p, void *g, char *name, s32 x);

#pragma opt_propagation off
void fn_8025ACF4(u8 *p, void *q) {
    char *base = lbl_802A9AA8;
    void *g;
    *(void **)(p + 0xb4) = fn_80261114(p, lbl_80366838, 1);
    *(void **)(p + 0xb8) = fn_80261114(p, base + 80, 1);
    *(void **)(p + 0xbc) = fn_80261114(p, base + 92, 1);
    *(void **)(p + 0xc0) = fn_80261114(p, base + 108, 0);
    *(void **)(p + 0xb0) = fn_80261114(p, lbl_80366840, 0);
    if (*(void **)(p + 0xb0) == 0) {
        g = fn_80110444(*(void **)(p + 12), lbl_80366848, 0);
        *(void **)(p + 0xb0) = (*fn_8010FEDC(*(void **)(p + 12), g, lbl_80366840, 0))->get(0);
    }
    fn_80261B18(p, q);
}
#pragma opt_propagation reset

} /* extern "C" */
