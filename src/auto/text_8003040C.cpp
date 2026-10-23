// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern const char lbl_8035BC58[6];
extern u8 *volatile lbl_8035B65C;
extern void *lbl_8035A02C;
extern void *lbl_8035A00C;
s32 fn_800F6CD0(const char *, const char *);
char *fn_800F6E88(char *, const char *);
void fn_8019AA94(void *, void *);
} /* extern "C" */

struct V8003040C {
    u8 pad[6448];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3(void *, s32, s32);
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
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
};

struct D8003040C {
    u8 pad[12];
    char *f12;
};
struct B8003040C {
    u8 pad[352];
    D8003040C *f352;
};
struct A8003040C {
    u8 pad[4];
    B8003040C *f4;
};

struct C8003040C {
    u8 pad[12];
    void *f12;
    u8 pad2[8];
    void *f24;
    u8 pad3[12];
    void *f40;
    u8 pad4[76];
    void *f120;
    u8 pad5[552];
    void *f676;
    u8 pad6[8];
    void *f688;
    u8 pad7[4];
    s32 f696;
};

extern "C" {
void fn_801C3050(void *, V8003040C *);
void fn_802540E0(C8003040C *, V8003040C *);
void fn_80039F78(void *, V8003040C *);
void fn_80039258(void *, V8003040C *);

void fn_8003040C(C8003040C *p, V8003040C *ctx) {
    char buf[16];
    A8003040C *a;

    if (p->f696 != 0) {
        ctx->v3(p->f676, 7, 0);
        if (p->f688 != 0) {
            fn_8019AA94(p->f688, p->f24);
        }
        ctx->v62();
    } else {
        ctx->v3(p->f40, 0, 0);
        fn_801C3050(p->f120, ctx);
        ctx->v62();
        fn_802540E0(p, ctx);
        *(volatile char *)buf = 0;
        a = *(A8003040C **)(lbl_8035B65C + 120);
        if (a != 0 && a->f4 != 0 && a->f4->f352 != 0 && a->f4->f352->f12 != 0) {
            fn_800F6E88(buf, a->f4->f352->f12);
        }
        if (fn_800F6CD0(buf, lbl_8035BC58) != 0) {
            ctx->v3(p->f676, 2, 0);
            fn_8019AA94(p->f12, p->f24);
            ctx->v62();
        }
    }
    fn_80039F78(lbl_8035A02C, ctx);
    fn_80039258(lbl_8035A00C, ctx);
}

} /* extern "C" */
