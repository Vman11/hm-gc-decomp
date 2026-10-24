// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char __vt__9C8010AC94[];
extern char __vt__9C8010AB20[];
extern char __vt__9C8010A9AC[];
extern char __vt__9C8010A838[];
extern char lbl_802E25CC[];
extern char lbl_802E2568[];
extern u32 lbl_8035AAB4;
extern u32 lbl_8035AAB8;
struct C8010C41C { u32 a, b; void *vt; C8010C41C(); };
struct C800FBA24 { u8 d[20]; C800FBA24(); };
struct C800FB754 { u8 d[20]; C800FB754(); };
struct C8011497C { u8 d[16]; C8011497C(); };
struct C801145C8 { u8 d[16]; C801145C8(); };
struct C80114210 { u8 d[16]; C80114210(); };
struct C80113E5C { u8 d[16]; C80113E5C(); };
struct C80113AA8 { u8 d[16]; C80113AA8(); };
struct C801136E0 { u8 d[20]; C801136E0(); };
struct D1 : C8010C41C { u32 f12; D1() { vt = __vt__9C8010AC94; f12 = 0; } };
struct D2 : C8010C41C { u32 f12; D2() { vt = __vt__9C8010AB20; } };
struct D3 : C8010C41C { u32 f12; D3() { vt = __vt__9C8010A9AC; } };
struct D4 : C8010C41C { u32 f12, f16; D4() { vt = __vt__9C8010A838; } };
struct H5 { H5() { *(void **)((u8 *)this - 4) = lbl_802E25CC; } };
struct D5 : C8010C41C, H5 { C800FBA24 m12; C800FB754 m32; u32 f52, f56; D5() { f52 = 0; f56 = 0; } };
struct D12 : C8010C41C { u32 f12, f16, f20, f24, f28, f32; D12() { vt = lbl_802E2568; f12 = 0; f16 = 0; f20 = 0; f24 = 0; f28 = 0; f32 = 0; } };
struct Prod { u32 a, b; void *vt; };
struct ProdV { u8 pad_[8]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void init(void *, void *); };
struct T { u8 pad[20]; u8 *f20; void *f24; ProdV *f28; };
void fn_8010C3BC(T *, void *, void *);
void *fn_8010B928(u32, void *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(u32);
void fn_800F7E98(void);
#define ALLOC(dst, expr) \
    if (!lbl_8035AAB8) fn_800604C4(-2, 0, 0, 0); \
    fn_800F7EC0(lbl_8035AAB8); \
    dst = (ProdV *)(expr); \
    fn_800F7E98(); \
    if (!dst) fn_800604C4(-4, 0, 0, 0);
int fn_801095E0(T *t, void *b, void *c) {
    u8 buf[8];
    fn_8010C3BC(t, b, c);
    t->f20 = (u8 *)fn_8010B928(lbl_8035AAB4, buf);
    t->f24 = fn_8010B928(lbl_8035AAB4, buf);
    switch (*(u32 *)(t->f20 + 8)) {
    case 1: ALLOC(t->f28, new D1) break;
    case 2: ALLOC(t->f28, new D2) break;
    case 3: ALLOC(t->f28, new D3) break;
    case 4: ALLOC(t->f28, new D4) break;
    case 5: ALLOC(t->f28, new D5) break;
    case 6: ALLOC(t->f28, new C8011497C) break;
    case 7: ALLOC(t->f28, new C801145C8) break;
    case 8: ALLOC(t->f28, new C80114210) break;
    case 9: ALLOC(t->f28, new C80113E5C) break;
    case 10: ALLOC(t->f28, new C80113AA8) break;
    case 11: ALLOC(t->f28, new C801136E0) break;
    case 12: ALLOC(t->f28, new D12) break;
    default: t->f28 = 0; break;
    }
    t->f28->init(t->f20, c);
    return 0;
}

} /* extern "C" */
