// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct V8006FC88 {
    u8 pad[128];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20(s32 a);
};
struct D8006FC88 {
    u8 pad[1344];
    s32 *m1344;
};
struct S8006FC88 {
    u8 pad[280];
    D8006FC88 *m280;
};
extern "C" {
extern u8 *lbl_8035A1DC;
extern u8 *lbl_80359F2C;
void fn_802491DC(S8006FC88 *s, s32 a);
void fn_802494A4(S8006FC88 *s, s32 a);

void fn_8006FC88(S8006FC88 *s) {
    s32 *p;
    s32 v;
    D8006FC88 *d;
    d = s->m280;
    p = d->m1344;
    v = *p;
    if (v <= 0) {
        if (*(s32 *)(lbl_8035A1DC + 13992) != 0) {
            V8006FC88 *vv = *(V8006FC88 **)(lbl_80359F2C + 456);
            if (vv) {
                vv->v20(1);
            }
            fn_802491DC(s, 4);
            return;
        }
        *p = v + 5;
        if (*d->m1344 < 0) {
            *d->m1344 = 0;
        }
        fn_802494A4(s, 21);
    } else {
        *p = v - 1;
        if (*d->m1344 < 0) {
            *d->m1344 = 0;
        }
        fn_802494A4(s, 21);
    }
}

} /* extern "C" */
