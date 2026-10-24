// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct C80152B64 { u8 d[64]; C80152B64(); };
struct H { u8 pad[24]; u32 f24; u32 f28; };
struct V48 { u8 pad_[48]; virtual void s0(); virtual void clear(); };
struct V0 { virtual void s0(); virtual void set(int); };
struct V1040 { u8 pad_[6448]; virtual void s0(); virtual void init(void *, void *, void *); };
typedef void (*FnF)(void *, f32);
typedef void (*FnV)(void *, f32 *);
struct FT { void *f0; void (*f4)(void *); };
extern H *lbl_8035AD28;
extern u8 lbl_803286D0[];
extern f32 lbl_80364708;
extern f32 lbl_8036470C;
extern void *volatile lbl_8035AD20;
extern void *volatile lbl_8035AD24;
extern char lbl_802E7CB0[];
void fn_800C0EB4(void);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(H *);
void fn_800F7E98(void);
void fn_80131C2C(void *, void *);
void fn_80179968(void *);
void fn_801361C0(u8 *, void *, u32 *);
void fn_800D69D4(void (*)(void));
void fn_800C0BD0(void (*)(void));
void fn_8016E088(void);
void fn_8016E0B0(void);
int fn_8016CEF4(u8 *, void *, u32 *);
void fn_80158854(void *);
void fn_80159920(void *, u8 *);
void fn_80133A18(void *, u8 *, int, int);
void fn_802185C4(void *, u32);
void fn_800F8E38(void *, u32);
void fn_800F87F0(void *, char *, char *);
static inline void lvl(u32 n) { if (lbl_8035AD28->f24 >= n) lbl_8035AD28->f28 = lbl_8035AD28->f24; else lbl_8035AD28->f28 = n; }
#define ALLOC(dst, expr) \
    if (!lbl_8035AD28) fn_800604C4(-2, 0, 0, 0); \
    fn_800F7EC0(lbl_8035AD28); \
    dst = expr; \
    fn_800F7E98(); \
    if (!dst) fn_800604C4(-4, 0, 0, 0);
int fn_8016D7C4(u8 *p, void *a, u32 *fl) {
    int r;
    if (F(p,52,u32)) ((V48 *)p)->clear();
    fn_800C0EB4();
    lvl(5);
    ALLOC(F(p,7952,u8*), new u8[0x20000])
    lbl_8035AD28->f28 = lbl_8035AD28->f24;
    fn_80131C2C(p + 10648, p);
    *fl &= ~5;
    F(p,0x279cc,u32) = 0;
    fn_80179968(p + 0xbf10);
    fn_80179968(p + 0xbf20);
    fn_801361C0(p, a, fl);
    lvl(5);
    ALLOC(F(p,10872,C80152B64*), new C80152B64)
    ALLOC(F(p,10876,C80152B64*), new C80152B64)
    ALLOC(F(p,10880,C80152B64*), new C80152B64)
    ALLOC(F(p,10884,C80152B64*), new C80152B64)
    ALLOC(F(p,10888,C80152B64*), new C80152B64)
    ALLOC(F(p,10896,C80152B64*), new C80152B64)
    ALLOC(F(p,10904,C80152B64*), new C80152B64)
    ALLOC(F(p,10892,C80152B64*), new C80152B64)
    lbl_8035AD28->f28 = lbl_8035AD28->f24;
    {
        FT *ft = (FT *)lbl_803286D0;
        ft->f4(F(p,10872,void*));
        ft->f4(F(p,10892,void*));
    }
    F(lbl_803286D0,220,FnF)(F(p,10892,void*), lbl_80364708);
    F(lbl_803286D0,224,FnF)(F(p,10892,void*), lbl_8036470C);
    {
        f32 v[3];
        v[0] = lbl_80364708;
        v[1] = lbl_80364708;
        v[2] = lbl_80364708;
        F(lbl_803286D0,188,FnV)(F(p,10892,void*), v);
    }
    ((V0 *)(p + 0x1f7b0))->set(4000);
    ((V0 *)(p + 12964))->set(256);
    ((V0 *)(p + 14000))->set(256);
    if (*fl & 8) {
        F(p,836,int) = 2;
    } else {
        fn_800D69D4(fn_8016E088);
        fn_800C0BD0(fn_8016E0B0);
        F(p,836,int) = 1;
    }
    lbl_8035AD20 = p + 840;
    lbl_8035AD24 = p;
    r = fn_8016CEF4(p, a, fl);
    if (!r) {
        ((V1040 *)(p + 1040))->init(p, p + 840, p + 952);
        fn_80158854(p + 8004);
        fn_80159920(p + 10656, p);
        fn_80133A18(p + 10780, p, 32, 0);
        fn_802185C4(p + 0x27a0c, 0x20000);
        fn_800F8E38(p + 10852, 1);
        fn_800F87F0(p + 10852, lbl_802E7CB0, lbl_802E7CB0);
    }
    return r;
}

} /* extern "C" */
