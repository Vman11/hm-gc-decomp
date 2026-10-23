// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct T74_619 {
    u8 pad[0x74];
    virtual void del(s32);
    virtual void rel();
};
struct TA4_619 {
    u8 pad[0xa4];
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
    virtual void off();
};
struct T70_619 {
    u8 pad[0x70];
    virtual void del(s32);
    virtual void v1();
    virtual void rel();
};
struct TC0_619 {
    u8 pad[0xc0];
    virtual void del(s32);
    virtual void v1();
    virtual void rel();
};
struct T24_619 {
    u8 pad[0x24];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void off();
};
struct Mgr619 {
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
    virtual void rem2(T24_619 *);
    virtual void v27();
    virtual void rem(TA4_619 *);
};
struct Cam619 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void drop(void *);
};
struct P619 {
    u8 pad0[0x2c44];
    Mgr619 * f2c44;
    u8 pad2c48[0x764];
    u32 f33ac;
    u8 pad33b0[0x14];
    TA4_619 * f33c4;
    TA4_619 * f33c8;
    TA4_619 * f33cc;
    T74_619 * f33d0;
    TA4_619 * f33d4;
    T74_619 * f33d8;
    Cam619 * f33dc;
    u8 pad33e0[0x4];
    void * f33e4;
    void * f33e8;
    void * f33ec;
    u8 pad33f0[0x4];
    void * f33f4;
    void * f33f8;
    u8 pad33fc[0x10];
    void * f340c;
    u8 pad3410[0xe0];
    T24_619 * f34f0;
    u8 pad34f4[0xc];
    void * f3500;
    void * f3504;
    void * f3508;
    void * f350c;
    void * f3510;
    void * f3514;
    void * f3518;
    TC0_619 * f351c;
    void * f3520;
    void * f3524;
    void * f3528;
    void * f352c;
    u8 pad3530[0x138];
    u8 * f3668;
    u8 pad366c[0x9c];
    T70_619 * f3708;
    void * f370c;
};
void fn_80250D40(void *);
void fn_80250DA4(void *, s32);
void fn_8026F5CC(void *);
void fn_8026F5E8(void *, s32);
void fn_8026A370(void *);
void fn_8026A41C(void *, s32);
void fn_80253960(void *);
void fn_8025396C(void *, s32);
void fn_80252C4C(void *);
void fn_80252CC0(void *, s32);
void fn_80244BBC(void *);
void fn_80244C24(void *, s32);
void fn_8024A334(void *);
void fn_8024A340(void *, s32);
void fn_8022E058(void *);
void fn_8022E5D4(void *, s32);
void fn_80262D38(void *);
void fn_80262E58(void *, s32);
void fn_80255AD0(void *);
void fn_80255B0C(void *, s32);
void fn_8023D6F4(void *);
void fn_8023DAD0(void *, s32);
void fn_8021125C(Cam619 *, void *);
void fn_80210938(void *);
void __dt__9C80210CECFv(void *, s32);
void fn_801AD0A8(void *);
void __dt__9C801AD710Fv(void *, s32);
void fn_8023DD14(void *, void *);
void fn_8003925C(void *);
void fn_8003A4FC(void *);
void fn_8003A014(void *);
void fn_80039BE8(void *);
void fn_8003C0EC(void *);
void fn_8003B198(void *);
void fn_80219A18(void *);
void fn_801A3408(struct P619 *);
void fn_80061894(struct P619 *);
extern s32 lbl_803592A0;
extern void *lbl_8035B478;
extern u8 lbl_80356DAC[];
void fn_800619B8(P619 *p) {
    if (lbl_803592A0 != 0) {
        if (p->f33e8) fn_8021125C(p->f33dc, p->f33e8);
        if (p->f33f4 && p->f33f4 != p->f33e4) p->f33dc->drop(p->f33f4);
        if (p->f33f8) p->f33dc->drop(p->f33f8);
    }
    if (p->f33ec) {
        fn_80210938(p->f33ec);
        __dt__9C80210CECFv(p->f33ec, 1);
    }
    if (p->f3668) delete p->f3668;
    if (p->f33d0) {
        p->f33d0->rel();
        if (p->f33d0) p->f33d0->del(1);
    }
    if (p->f33c4) {
        p->f33c4->off();
        p->f2c44->rem(p->f33c4);
    }
    if (p->f33c8) {
        p->f33c8->off();
        p->f2c44->rem(p->f33c8);
    }
    if (p->f33cc) {
        p->f33cc->off();
        p->f2c44->rem(p->f33cc);
    }
    if (p->f33d8) {
        p->f33d8->rel();
        if (p->f33d8) p->f33d8->del(1);
    }
    if (p->f33d4) {
        p->f33d4->off();
        p->f2c44->rem(p->f33d4);
    }
    if (lbl_8035B478 && p->f340c) fn_8023DD14(lbl_8035B478, p->f340c);
    fn_8003925C((u8 *)p + 0x364c);
    fn_8003A4FC((u8 *)p + 0x3618);
    fn_8003A014((u8 *)p + 0x35ec);
    fn_80039BE8((u8 *)p + 0x35cc);
    fn_8003C0EC((u8 *)p + 0x3550);
    fn_8003B198((u8 *)p + 0x3530);
    if (p->f340c) {
        fn_801AD0A8(p->f340c);
        __dt__9C801AD710Fv(p->f340c, 1);
        p->f340c = 0;
    }
    if (p->f370c) {
        fn_801AD0A8(p->f370c);
        __dt__9C801AD710Fv(p->f370c, 1);
    }
    if (p->f3708) {
        p->f3708->rel();
        if (p->f3708) p->f3708->del(1);
    }
    if (p->f3510) {
        fn_80250D40(p->f3510);
        fn_80250DA4(p->f3510, 1);
    }
    if (p->f3528) {
        fn_8026F5CC(p->f3528);
        fn_8026F5E8(p->f3528, 1);
    }
    if (p->f3524) {
        fn_8026A370(p->f3524);
        fn_8026A41C(p->f3524, 1);
    }
    if (p->f351c) {
        p->f351c->rel();
        if (p->f351c) p->f351c->del(1);
    }
    if (p->f3518) {
        fn_80253960(p->f3518);
        fn_8025396C(p->f3518, 1);
    }
    if (p->f3514) {
        fn_80252C4C(p->f3514);
        fn_80252CC0(p->f3514, 1);
    }
    if (p->f3508) {
        fn_80244BBC(p->f3508);
        fn_80244C24(p->f3508, 1);
    }
    if (p->f350c) {
        fn_8024A334(p->f350c);
        fn_8024A340(p->f350c, 1);
    }
    if (p->f3500) {
        fn_8022E058(p->f3500);
        fn_8022E5D4(p->f3500, 1);
    }
    if (p->f3520) {
        fn_80262D38(p->f3520);
        fn_80262E58(p->f3520, 1);
    }
    if (p->f352c) {
        fn_80255AD0(p->f352c);
        fn_80255B0C(p->f352c, 1);
    }
    if (p->f3504) {
        fn_8023D6F4(p->f3504);
        fn_8023DAD0(p->f3504, 1);
    }
    if (p->f34f0) {
        p->f34f0->off();
        p->f2c44->rem2(p->f34f0);
    }
    fn_80219A18(lbl_80356DAC);
    if (p->f33e4 && lbl_803592A0 == 0) p->f33dc->drop(p->f33e4);
    if (p->f33ac) fn_801A3408(p);
    fn_80061894(p);
}

} /* extern "C" */
