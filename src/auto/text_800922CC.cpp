// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V3 { f32 x, y, z; };

struct VE {
    virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5();
    virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11();
    virtual void s12();
    virtual void getPos(V3 *p, s32 a, s32 b, s32 c, s32 d);
    virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21();
    virtual void s22(); virtual void s23(); virtual void s24();
    virtual void off();
    virtual void on();
};

struct VT {
    u32 f0;
    u8 pad4[0x14];
    V3 pos;
    u8 pad24[0x68 - 0x24];
    virtual void s0(); virtual void s1();
    virtual void upd();
};

struct VQ {
    u8 pad[0x80];
    virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5();
    virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11();
    virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17();
    virtual void s18(); virtual void s19();
    virtual void tog(s32 on);
};

struct VS {
    u8 pad[0xc0];
    virtual void s0(); virtual void s1(); virtual void s2();
    virtual void get(char *buf, s32 n);
};

struct GQ {
    u8 pad[0x1c0];
    VQ *f1c0;
    u8 pad1c4[0x1e8 - 0x1c4];
    VQ *f1e8;
    VQ *f1ec;
};

struct L48 { u8 pad[0x9c]; VT *f9c; };
struct G308 { u8 pad[0x48]; L48 *f48; };
struct G24 { u8 pad[0x33b0]; void *f33b0; };
struct G65C { u8 pad[0x24]; G24 *f24; };
struct R { u8 pad[0x24]; void *f24; };

struct Obj {
    u8 pad0[0x60];
    s32 f60;
    u8 pad64[0xe0 - 0x64];
    VE *fe0;
    u8 pade4[0x118 - 0xe4];
    char *f118;
    u32 *f11c;
    u8 pad120[0x12c - 0x120];
    f32 *f12c;
    u32 *f130;
    f32 *f134;
    f32 *f138;
    u32 *f13c;
    u32 *f140;
    u32 f144;
    u32 f148;
    u8 pad14c[4];
    s32 f150;
    s32 f154;
    s32 f158;
    u8 pad15c[4];
    s32 f160;
    u32 *f164;
    u32 f168;
    s32 f16c;
    s32 f170;
};

struct Snd { volatile s32 flag; volatile f32 val; };

extern char lbl_80299840[];
extern char lbl_80360BD0[8];
extern char lbl_80360BD8[8];
extern char lbl_80360BE0[8];
extern char lbl_80360C04[8];
extern char lbl_80360C0C[8];
extern char lbl_80360C1C[8];
extern char lbl_80360C24[8];
extern char lbl_80360C2C[8];
extern char lbl_80360C34[8];
extern f32 lbl_80360C3C;
extern G308 *lbl_8035B308;
extern G65C *volatile lbl_8035B65C;
extern VS *lbl_8035B684;
extern GQ *lbl_80359F2C;
extern void *lbl_8035A0A4;

void fn_8022A7A8(VE *);
void fn_8022AD0C(VE *);
void *fn_80242144(Obj *, s32);
void fn_80242BC0(void *, const char *, s32, s32, s32, s32);
f32 fn_80101590(V3 *, V3 *);
void fn_80240C2C(Obj *, s32);
void fn_80240DBC(Obj *, f32);
void __ct__9C80253F24Fiiii(void *, char *, VE *, s32, Snd *);
void fn_8022C128(VE *, u32, u32, u32, s32, f32);
void fn_800F6E88(char *, char *);
int fn_800F6CD0(char *, char *);
s32 fn_8003CF0C(void *, char *);
u32 fn_8003CE68(void *, char *);
void fn_8002CFA0(GQ *, char *);
R *fn_801AAA08(void *, s32, char *, s32);
void fn_800FA474(void *, char *, s32);
int fn_800E8F6C(char *s, const char *fmt, ...);
void fn_800FA5D8(void *, char *);
void fn_8023FE08(Obj *, f32);

inline R *Find(char *name) { return fn_801AAA08(lbl_8035B65C->f24->f33b0, 1, name, 0); }

inline void Play(Obj *o, char *str, s32 flag, Snd &s, char *buf) {
    s.flag = flag;
    s.val = *o->f12c;
    __ct__9C80253F24Fiiii(lbl_8035B65C, str + 0x6c, o->fe0, 0, &s);
    u32 c;
    if (s.flag) c = *o->f130; else c = 0;
    fn_8022C128(o->fe0, c, c, c, 0, s.val);
    if (o->f60 == 1) {
        if (s.flag) fn_800F6E88(buf, lbl_80360C04);
        else fn_800F6E88(buf, lbl_80360C0C);
        fn_80242BC0(fn_80242144(o, 2), buf, 0, 0, (s32)o->f130, (s32)((char *)&s + 4));
    }
}

void fn_800922CC(Obj *o, f32 dt) {
    char msg1[52];
    char num1[52];
    char msg2[52];
    char num2[52];
    V3 tp;
    V3 cp;
    char buf1[8];
    char buf2[8];
    char nm3[8];
    char ev1[8];
    char nm1[8];
    char ev2[8];
    char nm2[8];
    Snd s1;
    Snd s2;
    u32 m;
    u32 n;
    char *str = lbl_80299840;
    if (*o->f164 & o->f168) {
        o->fe0->on();
        fn_8022A7A8(o->fe0);
        fn_80242BC0(fn_80242144(o, 2), lbl_80360BD8, 0, 0, 0, 0);
    } else {
        o->fe0->off();
        fn_8022AD0C(o->fe0);
    }
    if (o->f150 != 0 && o->f60 == 1) {
        fn_80242BC0(fn_80242144(o, 3), lbl_80360BD8, 0, 0, 0, 0);
        if (o->f160 != 0) fn_80242BC0(fn_80242144(o, 2), lbl_80360BD0, 0, 0, 0, 0);
        else fn_80242BC0(fn_80242144(o, 2), lbl_80360BD8, 0, 0, 0, 0);
        fn_80242BC0(fn_80242144(o, 0), lbl_80360C1C, (s32)o->fe0, 0, 0, 0);
        o->f150 = 0;
    }
    if (o->f60 == 1 || o->f60 == 3) {
        VT *t = lbl_8035B308->f48->f9c;
        if (t->f0 & 4) t->upd();
        tp = t->pos;
        o->fe0->getPos(&cp, 0, 0, 0, 0);
        f32 d = fn_80101590(&cp, &tp);
        if (o->f60 == 1) {
            if (o->f160 != 0 && (o->f16c != 0 || d <= *o->f138) && o->f154 == 0) {
                fn_80240C2C(o, 0);
                o->f154 = 1;
                __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_80360BE0, o->fe0, 0, 0);
                if (o->f170 == 0) Play(o, str, 1, s1, buf1);
            } else if (o->f160 == 0 || (o->f16c == 0 && d > *o->f138 && o->f154 != 0)) {
                fn_80240DBC(o, lbl_80360C3C);
                o->f154 = 0;
                __ct__9C80253F24Fiiii(lbl_8035B65C, str + 0x60, o->fe0, 0, 0);
                if (o->f170 == 0) Play(o, str, 0, s2, buf2);
            }
        }
        if (o->f160 != 0 && o->f16c == 0 && d <= *o->f134 && o->f158 == 0) {
            o->f158 = 1;
            if (o->f60 == 1) {
                lbl_8035B684->get(nm1, -1);
                if (fn_800F6CD0(o->f118, lbl_80360C24) != 0 &&
                    (fn_800F6CD0(nm1, lbl_80360C2C) != 0 || fn_8003CF0C(lbl_8035A0A4, lbl_80360C24) == 0))
                    fn_800F6E88(ev1, str + 0x78);
                else
                    fn_800F6E88(ev1, o->f118);
                fn_8002CFA0(lbl_80359F2C, ev1);
                if (lbl_80359F2C->f1c0) lbl_80359F2C->f1c0->tog(1);
                if (o->f13c) *o->f13c = *o->f11c;
                if (lbl_80359F2C->f1ec) lbl_80359F2C->f1ec->tog(1);
                R *a = Find(str + 0xa8);
                void *w = Find(str + 0x90)->f24;
                fn_800FA474(a->f24, num1, 0x19);
                fn_800E8F6C(msg1, lbl_80360C34, *o->f11c, num1);
                fn_800FA5D8(w, msg1);
            } else {
                lbl_8035B684->get(nm2, -1);
                if (fn_800F6CD0(o->f118, lbl_80360C24) != 0 &&
                    (fn_800F6CD0(nm2, lbl_80360C2C) != 0 || fn_8003CF0C(lbl_8035A0A4, lbl_80360C24) == 0))
                    fn_800F6E88(ev2, str + 0x78);
                else
                    fn_800F6E88(ev2, o->f118);
                fn_8002CFA0(lbl_80359F2C, ev2);
                if (lbl_80359F2C->f1c0) lbl_80359F2C->f1c0->tog(1);
                if (o->f140) *o->f140 = o->f148;
                n = o->f144;
                m = o->f148;
                if (n != 0) {
                    lbl_8035B684->get(nm3, -1);
                    if (fn_800F6CD0(o->f118, lbl_80360C24) != 0 && fn_800F6CD0(nm3, lbl_80360C2C) == 0) {
                        n += 0x19;
                        m += fn_8003CE68(lbl_8035A0A4, lbl_80360C2C);
                    }
                    if (lbl_80359F2C->f1e8) lbl_80359F2C->f1e8->tog(1);
                    R *a = Find(str + 0x84);
                    void *w = Find(str + 0x90)->f24;
                    fn_800FA474(a->f24, num2, 0x19);
                    fn_800E8F6C(msg2, str + 0x9c, m, n, num2);
                    fn_800FA5D8(w, msg2);
                }
            }
        } else if ((o->f160 == 0 || o->f16c != 0 || d > *o->f134) && o->f158 != 0) {
            o->f158 = 0;
            if (lbl_80359F2C->f1c0) lbl_80359F2C->f1c0->tog(0);
            if (lbl_80359F2C->f1e8) lbl_80359F2C->f1e8->tog(0);
            if (lbl_80359F2C->f1ec) lbl_80359F2C->f1ec->tog(0);
        }
    }
    fn_8023FE08(o, dt);
}

} /* extern "C" */
