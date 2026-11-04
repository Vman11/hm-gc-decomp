// fn_80033C38: GmMoFramework::vInit (level/framework init).
// Not linkable alone: its .rodata string pool (0x802947C8..) is shared with text_800316C8/80031928/80033754 (one TU).
#include "common.h"

#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
typedef void (*Fvp)(void *, void *);
typedef void (*Fvppp)(void *, void *, const void *, const void *);

struct O1C {
    u8 pad_[6448];
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual void d29();
    virtual void d30();
    virtual void d31();
    virtual void d32();
    virtual void d33();
    virtual void d34();
    virtual void d35();
    virtual void d36();
    virtual void d37();
    virtual void d38();
    virtual void d39();
    virtual void d40();
    virtual void d41();
    virtual void d42();
    virtual void d43();
    virtual void d44();
    virtual void d45();
    virtual void d46();
    virtual void d47();
    virtual void d48();
    virtual void d49();
    virtual void d50();
    virtual void d51();
    virtual void d52();
    virtual void dc();
    virtual void e0();
    virtual void e4(void *);
    virtual void e8(s32);
    virtual void ec(s32);
    virtual void f0(s32);
    virtual void f4(f32);
    virtual void f8(f32);
    virtual void d61();
    virtual void d62();
    virtual void x104(void *);
};
struct OF10 {
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void * x6c();
};
struct OB684 {
    u8 pad_[192];
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void x14(char *, s32);
    virtual void x18(char *, s32);
    virtual void x1c(char *);
};
struct OA8 {
    virtual void d0();
    virtual void d1();
    virtual void x10();
};
struct OSelf {
    u8 pad_[752];
    virtual void x8();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void x18();
};
struct OVal {
    u8 pad_[8];
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void * x1c(s32);
};
struct OSh {
    u8 pad_[160];
    virtual void x8(void *, const char *, const char *);
};
struct OCam {
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual void d29();
    virtual void d30();
    virtual void d31();
    virtual void d32();
    virtual void x8c(const char *, s32, s32, s32, s32);
};
struct OMenu {
    u8 pad_[128];
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void x58(s32);
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual void d29();
    virtual void d30();
    virtual void d31();
    virtual void d32();
    virtual void d33();
    virtual void d34();
    virtual void d35();
    virtual void d36();
    virtual void d37();
    virtual void d38();
    virtual void d39();
    virtual void d40();
    virtual void d41();
    virtual void d42();
    virtual void d43();
    virtual void d44();
    virtual void d45();
    virtual void d46();
    virtual void d47();
    virtual void d48();
    virtual void d49();
    virtual void d50();
    virtual void d51();
    virtual void d52();
    virtual void d53();
    virtual void d54();
    virtual void d55();
    virtual void d56();
    virtual void d57();
    virtual void d58();
    virtual void xf4(s32, s32);
};

struct C8023B4DC { u8 pad[0xa4]; C8023B4DC(); };
struct V3 { f32 x, y, z; V3() {} void set(f32 a, f32 b, f32 c) { *(volatile f32 *)&x = a; *(volatile f32 *)&y = b; *(volatile f32 *)&z = c; } };
struct C4 { u8 r, g, b, a; };

extern "C" {
extern u8 * volatile lbl_8035A074;
extern u8 *lbl_8035B308;
extern u8 *lbl_8035B65C;
extern u8 *lbl_8035B684;
extern u8 *lbl_8035A1DC;
extern u8 *lbl_8035B418;
extern u8 *lbl_8035B478;
extern u8 *lbl_8035B754;
extern u8 *lbl_8035A0A4;
extern u8 *lbl_8035B7F4;
extern u8 *lbl_8035B5C4;
extern u8 *lbl_8035B5E4;
extern u8 *lbl_8035B658;
extern u8 *lbl_8035B488;
extern u8 **lbl_8035B334;
extern u8 *lbl_80359F2C;
extern u8 lbl_80357740[];
extern u8 lbl_803575DC[];
extern u8 lbl_803286D0[];
extern f32 lbl_8035BE24, lbl_8035BE28, lbl_8035BD7C, lbl_8035BE2C, lbl_8035BD4C, lbl_8035BD78, lbl_8035BE30, lbl_8035BE34, lbl_8035BD48;
extern char lbl_8035BE38[8], lbl_8035BE40[8], lbl_8035BDE8[8], lbl_8035BE48[8], lbl_8035BDB8[8], lbl_8035BE50[8], lbl_8035BE58[8];
extern char lbl_8035BD50[8], lbl_8035BD58[8], lbl_8035BD60[8], lbl_8035BD68[8], lbl_8035BD70[8], lbl_8035BE60[8], lbl_8035BE68[8];
extern char lbl_8035BE70[8], lbl_8035BE78[8], lbl_8035BE80[8], lbl_8035BDA0[8], lbl_8035BE10[8], lbl_8035BE88[8];

void fn_800F710C(void);
void fn_802551DC(u8 *, u8 *, void *, void *, void *);
void fn_8003B5F8(void *, const char *);
void fn_802299B8(void *);
void *fn_80129938(void *, void *);
void fn_8012962C(void *, f32, f32, f32, f32);
void fn_80129710(void *, V3 *, V3 *, V3 *);
void fn_80216044(void *, const char *);
void fn_800F6E40(void *, const char *);
void fn_8026DF0C(void *, const char *);
void fn_8026B560(void *, f32);
void fn_802695B4(void *, const char *, s32);
void fn_8003215C(u8 *);
void fn_802604AC(void *);
void fn_8003C8A4(void *, const char *);
void fn_801C2368(void *, void *, s32);
void fn_801AAFAC(void *, void *);
void fn_8023E200(void *, void *);
void fn_80253FBC(u8 *);
void fn_8024973C(void *, const char *);
void *fn_800F9398(u8 *, const char *);
void *fn_800F9788(u8 *, const char *, const char *);
s32 fn_802160B8(void *, const char *, s32);
void fn_80110ADC(u8 *, u8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void fn_8010F01C(u8 *, const char *);
void fn_8010AD40(u8 *, u8 *, const char *, s32, s32);
void *fn_8010AD30(u8 *, u32);
void fn_8010FE74(void *, u8 *, s32);
void fn_8010FD54(u8 *, u8 *, const char *, s32, s32, u8 *);
void fn_80110DF0(u8 *, u8 *);
void fn_8023E5E4(void *, u8 *);
void fn_802290E4(void *, u8 *);
void fn_800FBB08(void);
void fn_80228EC8(void *, const char *, s32);
void fn_80215FDC(void *);
void fn_80270258(void *, const char *, s32);
u8 *fn_802288FC(void *, const char *);
void __ct__9C80031B94Fi(u8 *, void *);
void fn_8002D080(u8 *, void *, void *);
void fn_8002C408(u8 *);
void fn_8024F6D8(void *, u8 *, const char *, const char *, s32, s32, s32);
void fn_80037DD8(u8 *);
void fn_80038FF8(u8 *);
void fn_80037884(u8 *);
u8 *fn_80207198(u8 *, const char *, s32);
void fn_802514B8(void *, const char *, void *);
void fn_8003CFB8(void *);
void fn_80247B04(void *, const char *);
void fn_802286C4(void *);
u8 **fn_8010FEDC(u8 *, u8 *, const char *, s32);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_8023EC58(void *, s32);
void fn_80254990(u8 *, void *, void *);
void fn_80032478(void);
s32 fn_800F6CD0(const char *, const char *);
void fn_8002A9AC(void *, s32);
void fn_8002B42C(void *, s32);
u8 *fn_801AA960(void *, const char *, const char *);
void fn_80038BE4(void *);

static void pad_strs(void) {
    fn_8003B5F8(0, "MAINMENU");
    fn_8003B5F8(0, "MainMenu");
    fn_8003B5F8(0, "HMDem130");
    fn_8003B5F8(0, "HMDem230");
    fn_8003B5F8(0, "HM_Intro");
    fn_8003B5F8(0, "Materials");
    fn_8003B5F8(0, "PRERESET");
    fn_8003B5F8(0, "C_NOSHKE");
    fn_8003B5F8(0, "zbufonly");
    fn_8003B5F8(0, "TRANSOVR");
    fn_8003B5F8(0, "SAVEGAME");
    fn_8003B5F8(0, "Loaded Level.AGD ");
}
void *keep_pad = (void *)pad_strs;

static inline void *FindTex(u8 *o, const char *a, const char *b) {
    if (!a || !*a) return fn_800F9398(o + 0xf0, b);
    return fn_800F9788(o + 0x108, a, b);
}

static inline void *GetVal(u8 **p) {
    return ((OVal *)*p)->x1c(0);
}

static inline void HideMenu(const char *name) {
    u8 *o = fn_801AA960(F(lbl_8035A1DC, 0x33b0, void *), name, lbl_8035BE10);
    if (o) {
        ((OMenu *)o)->x58(0);
        F(o, 0x6c, u32) &= ~2;
    }
}

void fn_80033C38(u8 *self, u8 *p2, void *a3, void *a4, void *a5) {
    C4 c;
    char lvl[8];
    V3 va, vb, vc;
    V3 o3, o1, o2;
    char path[268];
    u8 **v;
    u8 *sec;
    u8 *reg;
    void *mgr;
    u32 n;
    u32 i;

    fn_800F710C();
    fn_802551DC(self, p2, a3, a4, a5);
    fn_8003B5F8(lbl_8035A074, "GmMoFramework::vInit");
    fn_802299B8(lbl_8035B308);
    *(volatile u8 *)&c.r = 0;
    *(volatile u8 *)&c.g = 0;
    *(volatile u8 *)&c.b = 0;
    *(volatile u8 *)&c.a = 0xff;
    fn_8003B5F8(lbl_8035A074, "GmAcManager::poInstance()->vInit()");
    F(self, 0x1c, O1C *)->x104(&c);
    F(self, 0x1c, O1C *)->f0(0);
    F(self, 0x1c, O1C *)->e8(0);
    F(self, 0x1c, O1C *)->ec(2);
    F(self, 0x2a4, void *) = F(F(lbl_8035B65C, 4, u8 *), 0x10, OF10 *)->x6c();
    fn_80129938(F(self, 0x2a4, void *), F(F(lbl_8035B65C, 4, u8 *), 0x18, void *));
    fn_8012962C(F(self, 0x2a4, void *), lbl_8035BE24, lbl_8035BE28, lbl_8035BD7C, lbl_8035BE2C);
    {
        f32 h, k;
        k = *(volatile f32 *)&lbl_8035BD4C;
        *(volatile f32 *)&vc.x = k;
        *(volatile f32 *)&vc.y = *(volatile f32 *)&lbl_8035BD78;
        h = *(volatile f32 *)&lbl_8035BE30;
        *(volatile f32 *)&vc.z = h;
        va.set(k, k, k);
        *(volatile f32 *)&va.z = *(volatile f32 *)&lbl_8035BE34;
        vb.set(k, h, k);
    }
    fn_80129710(F(self, 0x2a4, void *), &va, &vb, &vc);
    ((OB684 *)lbl_8035B684)->x18(path, -1);
    fn_80216044(F(self, 8, void *), path);
    ((OB684 *)lbl_8035B684)->x14(lvl, -1);
    fn_800F6E40(lbl_80357740, lvl);
    fn_8026DF0C(F(self, 0x80, void *), lvl);
    fn_8026B560(F(self, 0x80, void *), lbl_8035BD7C);
    fn_802695B4(F(self, 0x84, void *), lvl, 0);
    fn_8003B5F8(lbl_8035A074, lbl_8035BE38);
    ((OSelf *)self)->x8();
    fn_8003B5F8(lbl_8035A074, "vLoadGraphics");
    fn_8003215C(self);
    fn_802604AC(F(lbl_8035B754, 0x10, void *));
    fn_8003C8A4(lbl_8035A0A4, lvl);
    fn_8003B5F8(lbl_8035A074, "Materials");
    F(self, 0x78, u8 *) = F(lbl_8035A1DC, 0x3708, u8 *);
    fn_801C2368(F(self, 0x78, u8 *), F(F(self, 0x78, u8 *), 8, void *), 1);
    fn_8003B5F8(lbl_8035A074, "vSetRootToOriginal");
    F(self, 0x288, u8 *) = F(lbl_8035A1DC, 0x370c, u8 *);
    fn_801AAFAC(F(self, 0x288, u8 *), *(void **)lbl_8035B418);
    ((OB684 *)lbl_8035B684)->x1c(lvl);
    fn_8023E200(lbl_8035B478, F(self, 0x288, u8 *));
    F(self, 0x28c, u8 *) = F(lbl_8035A1DC, 0x340c, u8 *);
    if (F(lbl_8035B684, 0xb0, s32) != 0) {
        fn_80253FBC(self);
    }
    F(lbl_8035B684, 0xa8, OA8 *)->x10();
    fn_8024973C(F(lbl_8035B684, 0xa8, u8 *), lvl);
    fn_8003B5F8(lbl_8035A074, "Reggie/snoopie load and state machine init");
    F(self, 0x88, void *) = FindTex(*F(F(self, 4, u8 *), 0x1c, u8 **), lbl_8035BDE8, lbl_8035BE40);
    if (fn_802160B8(F(self, 8, void *), "Library.ADD", 0) == 0) {
        fn_80110ADC(self + 0x90, F(lbl_8035B65C, 0x24, u8 *) + 0x3e0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        fn_8010F01C(self + 0x90, lbl_8035BE48);
        fn_8010AD40(self + 0x6e4, F(lbl_8035B65C, 0x24, u8 *) + 0x3e0, lbl_8035BE48, 0, 0);
        n = F(self, 0x6f4, u16);
        for (i = 0; i < n; i++) {
            fn_8010FE74(fn_8010AD30(self + 0x6e4, i), self + 0x90, 0);
        }
    } else if (fn_802160B8(F(self, 8, void *), "Library.ADR", 0) == 0) {
        fn_8010FD54(self + 0x90, F(lbl_8035B65C, 0x24, u8 *) + 0x3e0, lbl_8035BE48, 0, 0, 0);
    } else {
        fn_80110DF0(self + 0x90, F(lbl_8035B65C, 0x24, u8 *) + 0x3e0);
    }
    if (fn_802160B8(F(self, 8, void *), "Level.ADR", 0) == 0) {
        fn_8010FD54(self + 0x304, F(lbl_8035B65C, 0x24, u8 *) + 0x3e0, lbl_8035BDB8, 0, 0, self + 0x90);
    }
    fn_80216044(F(self, 8, void *), "Objects\\");
    if (F(self, 0x278, s32) != 0 && fn_802160B8(F(self, 8, void *), "Generic.ADR", 0) == 0) {
        fn_8010FD54(self + 0x4f4, F(lbl_8035B65C, 0x24, u8 *) + 0x3e0, lbl_8035BE50, 0, 0, 0);
        fn_8010FE74(self + 0x4f4, self + 0x90, 0);
    }
    fn_8023E5E4(lbl_8035B478, self + 0x90);
    if (F(self, 0x278, s32) != 0) {
        fn_802290E4(lbl_8035B308, self + 0x90);
    }
    fn_8003B5F8(lbl_8035A074, "actors loaded from registry");
    fn_800FBB08();
    fn_80228EC8(lbl_8035B308, lbl_8035BE50, 0);
    fn_800FBB08();
    fn_80215FDC(F(self, 8, void *));
    fn_80270258(lbl_8035B7F4, "ActrPool", 0);
    if (fn_802288FC(lbl_8035B308, lbl_8035BE58) == 0) return;
    __ct__9C80031B94Fi(self, F(self, 0x14, void *));
    fn_8003B5F8(lbl_8035A074, "various actors and sounds loaded");
    (*(Fvp *)(lbl_803286D0 + 0x130))(F(F(self, 0x28, u8 *), 0x10, void *), &va);
    (*(Fvppp *)(lbl_803286D0 + 0x134))(F(F(self, 0x28, u8 *), 0x10, void *), &o1, &o2, &o3);
    fn_8002D080(self + 0x818, F(self, 0x24, void *), F(self, 8, void *));
    fn_8002C408(self + 0x818);
    F(F(self, 0x24, u8 *), 0x338c, s32) = F(self, 0x8d8, s32);
    fn_8024F6D8(F(lbl_8035B5C4, 4, void *), p2 + 0x32b4, "CinRip\\Cinema", "Cinema.gcf", 0, 0, 1);
    fn_80037DD8(self + 0x770);
    fn_80038FF8(self + 0x7cc);
    fn_80037884(self + 0x804);
    fn_8003B5F8(lbl_8035A074, "cinema and event handlers");
    {
        u8 *pm = fn_80207198(F(lbl_8035B65C, 0x24, u8 *) + 0x3e0, "PAUSEMNU", 0);
        F(self, 0xb74, void *) = ((OVal *)pm)->x1c(0);
    }
    mgr = lbl_8035B5E4;
    fn_802514B8(mgr, lbl_8035BD50, self + 0x770);
    fn_802514B8(mgr, lbl_8035BD58, self + 0x770);
    F(self, 0x7c8, u8 *) = lbl_8035A1DC + 0x3410;
    fn_802514B8(mgr, lbl_8035BD60, F(self, 0x7c8, u8 *));
    fn_802514B8(mgr, lbl_8035BD68, self + 0x7cc);
    fn_802514B8(mgr, lbl_8035BD70, self + 0x804);
    fn_8003B5F8(lbl_8035A074, "event handlers");
    fn_8003CFB8(lbl_8035A0A4);
    fn_80247B04(lbl_803575DC, "ElStatic.gbp");
    fn_8003B5F8(lbl_8035A074, "static paths");
    fn_802286C4(lbl_8035B308);
    fn_8003B5F8(lbl_8035A074, "vPostInit");
    fn_80215FDC(F(self, 8, void *));
    F(lbl_8035B684, 0xa8, OA8 *)->x10();
    fn_8003B5F8(lbl_8035A074, "eInitTree");
    {
        u8 *lv = fn_802288FC(lbl_8035B308, lbl_8035BDB8);
        reg = F(lv, 0xc, u8 *);
        sec = F(lv, 0x10, u8 *);
    }
    fn_8003B5F8(lbl_8035A074, "registry set-up");
    if (sec) {
        if ((v = fn_8010FEDC(reg, sec, lbl_8035BE60, 0)) != 0) {
            F(self, 0xb94, void *) = GetVal(v);
            F(self, 0xb9c, void *) = GetVal(fn_8010FEDC(reg, sec, "FogStartDepth", 0));
            F(self, 0xba0, void *) = GetVal(fn_8010FEDC(reg, sec, "FogEndDepth", 0));
            F(self, 0xba4, void *) = GetVal(fn_8010FEDC(reg, sec, "FogColorRed", 0));
            F(self, 0xba8, void *) = GetVal(fn_8010FEDC(reg, sec, "FogColorGreen", 0));
            F(self, 0xbac, void *) = GetVal(fn_8010FEDC(reg, sec, "FogColorBlue", 0));
        }
        if ((v = fn_8010FEDC(reg, sec, "UpdateDist", 0)) != 0) {
            F(self, 0x2d4, void *) = GetVal(v);
        } else {
            F(self, 0x2d4, void *) = 0;
        }
        if ((v = fn_8010FEDC(reg, sec, "AmbientColor", 0)) != 0) {
            f32 *col;
            F(self, 0xbb8, u8 *) = *v;
            col = F(F(self, 0xbb8, u8 *), 0xc, f32 *);
            {
                f32 w = col[3], z = col[2], y = col[1], x = col[0];
                F(self, 0x58, f32) = x;
                F(self, 0x5c, f32) = y;
                F(self, 0x60, f32) = z;
                F(self, 0x64, f32) = w;
            }
        }
        if ((v = fn_8010FEDC(reg, sec, "rResetHeight", 0)) != 0) {
            F(self, 0xbb0, void *) = GetVal(v);
        } else {
            F(self, 0xbb0, void *) = 0;
        }
    }
    if (F(self, 0xb94, s32 *) && *F(self, 0xb94, s32 *)) {
        F(self, 0x1c, O1C *)->dc();
        F(self, 0xb98, u8) = *F(self, 0xba4, s32 *);
        F(self, 0xb99, u8) = *F(self, 0xba8, s32 *);
        F(self, 0xb9a, u8) = *F(self, 0xbac, s32 *);
        F(self, 0x1c, O1C *)->e4(self + 0xb98);
        F(self, 0x1c, O1C *)->f4(*F(self, 0xb9c, f32 *));
        F(self, 0x1c, O1C *)->f8(*F(self, 0xba0, f32 *));
    } else {
        F(self, 0x1c, O1C *)->e0();
    }
    F(self, 0x30, void *) = fn_800F9398(*F(self, 0x1c, u8 **) + 0x168, lbl_8035BE68);
    F(self, 0x34, void *) = fn_800F9398(*F(self, 0x1c, u8 **) + 0x168, "NActBnds");
    if (lbl_8035B658 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B658);
    F(self, 0xc18, C8023B4DC *) = new C8023B4DC;
    fn_800F7E98();
    if (F(self, 0xc18, C8023B4DC *) == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    F(self, 0xc18, OSh *)->x8(F(self, 0x1c, void *), lbl_8035BE70, lbl_8035BDE8);
    fn_8023EC58(lbl_8035B488, 0);
    ((OSelf *)self)->x18();
    fn_80254990(self, F(self, 0x14, void *), (void *)fn_80032478);
    F(self, 0xb70, void *) = fn_802288FC(*lbl_8035B334, lbl_8035BE58);
    fn_8003B5F8(lbl_8035A074, "lights, fog, and postinit");
    F(lbl_8035B308, 0x48, OCam *)->x8c(lbl_8035BE78, 0, 0, 0, 0);
    F(self, 0x814, void *) = fn_800F9398(*F(self, 0x1c, u8 **) + 0x78, lbl_8035BE80);
    ((OB684 *)lbl_8035B684)->x14(lvl, -1);
    F(self, 0xb8c, s32) = fn_800F6CD0(lvl, lbl_8035BDA0);
    fn_8002A9AC(lbl_80359F2C, F(self, 0xb8c, s32));
    if (F(self, 0xb8c, s32) != 0) {
        u8 *cam;
        u8 *m;
        fn_8002B42C(lbl_80359F2C, 0);
        m = fn_801AA960(F(F(lbl_8035B65C, 0x24, u8 *), 0x33b0, void *), "MAINMENU", "MainMenu");
        ((OMenu *)m)->xf4(0, 1);
        fn_801C2368(F(self, 0x78, void *), m, 1);
        if ((cam = fn_802288FC(lbl_8035B308, lbl_8035BE58)) != 0) {
            ((OCam *)cam)->x8c("C_TITLEA", 0, 0, 0, 0);
        }
        F(self, 0xc20, f32) = lbl_8035BD48;
        F(self, 0xc24, s32) = 1;
        F(self, 0xc28, u8 *) = m;
        F(self, 0xc2c, s32) = F(F(self, 0x78, u8 *), 0xc, s32);
    } else {
        fn_8002B42C(lbl_80359F2C, 1);
    }
    HideMenu("SAVEGAME");
    HideMenu(lbl_8035BE88);
    fn_80038BE4(F(self, 0x7c8, void *));
}

} /* extern "C" */
