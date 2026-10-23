// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern u8 *lbl_8035B65C;
extern u32 lbl_8035B978;
extern char lbl_8035B8A0[6];
extern f32 lbl_8035B97C;
extern char lbl_8035B980[6];
extern char lbl_8035B988[7];
void fn_8002B42C(void *, s32);
void fn_8002B760(void *, s32);
void fn_800F6E88(void *, void *);
s32 fn_800F6CD0(void *, void *);
void *fn_801AA960(void *, void *, void *);
void fn_801C2368(void *, void *, s32);
} /* extern "C" */
struct V8002AE30 {
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
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void f(s32, s32);
};
extern "C" {

void fn_8002AE30(u8 *p) {
    char buf[16];
    V8002AE30 *o;
    fn_8002B42C(p, 1);
    *(u32 *)(*(u8 **)(p + 332) + 152) |= lbl_8035B978;
    *(u32 *)(*(u8 **)(p + 336) + 152) |= lbl_8035B978;
    *(u32 *)(*(u8 **)(p + 340) + 152) |= lbl_8035B978;
    *(u32 *)(*(u8 **)(p + 344) + 152) |= lbl_8035B978;
    *(u32 *)(*(u8 **)(p + 348) + 152) |= lbl_8035B978;
    *(u32 *)(*(u8 **)(p + 352) + 152) |= lbl_8035B978;
    *(u32 *)(p + 376) = 0;
    buf[0] = 0;
    {
        u8 *a = *(u8 **)(lbl_8035B65C + 120);
        if (a != 0) {
            a = *(u8 **)(a + 4);
            if (a != 0) {
                a = *(u8 **)(a + 352);
                if (a != 0) {
                    if (*(void **)(a + 12) != 0) {
                        fn_800F6E88(buf, *(void **)(a + 12));
                    }
                }
            }
        }
    }
    if (fn_800F6CD0(buf, lbl_8035B8A0) != 0) {
        *(f32 *)(p + 612) = lbl_8035B97C;
    } else {
        V8002AE30 *t = *(V8002AE30 **)(p + 204);
        if (t != 0) {
            *(V8002AE30 **)(p + 204) = 0;
            o = t;
        } else {
            o = (V8002AE30 *)fn_801AA960(*(void **)(*(u8 **)(lbl_8035B65C + 36) + 13232), lbl_8035B980, lbl_8035B988);
        }
        o->f(0, 1);
        fn_801C2368(*(void **)(lbl_8035B65C + 120), o, 1);
    }
    fn_8002B760(p, 1);
}

} /* extern "C" */
