// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_8035AADC;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(u32);
void fn_800F7E98(void);
struct C8010C41C { u8 d[12]; C8010C41C(); ~C8010C41C(); void f(u32, s32); };
struct C8010AC94 { u8 d[16]; C8010AC94(); ~C8010AC94(); void f(u32, s32); };
struct C8010AB20 { u8 d[16]; C8010AB20(); ~C8010AB20(); void f(u32, s32); };
struct C8010A9AC { u8 d[16]; C8010A9AC(); ~C8010A9AC(); void f(u32, s32); };
struct C8010A838 { u8 d[20]; C8010A838(); ~C8010A838(); void f(u32, s32); };
struct C8010A664 { u8 d[60]; C8010A664(); ~C8010A664(); void f(u32, s32); };
struct C8011497C { u8 d[16]; C8011497C(); ~C8011497C(); void f(u32, s32); };
struct C801145C8 { u8 d[16]; C801145C8(); ~C801145C8(); void f(u32, s32); };
struct C80114210 { u8 d[16]; C80114210(); ~C80114210(); void f(u32, s32); };
struct C80113E5C { u8 d[16]; C80113E5C(); ~C80113E5C(); void f(u32, s32); };
struct C80113AA8 { u8 d[16]; C80113AA8(); ~C80113AA8(); void f(u32, s32); };
struct C801136E0 { u8 d[20]; C801136E0(); ~C801136E0(); void f(u32, s32); };
struct C8010C958 { u8 d[32]; C8010C958(); ~C8010C958(); void f(u32, s32); };
struct B8010CE30 { u8 d[28]; B8010CE30(); ~B8010CE30(); void f(u32, s32); };
struct T { u32 n; u32 f4; u32 type; u32 fc; void *a16; C8010C958 *a20; B8010CE30 *a24; };
void fn_8010C790(C8010C958 *, u32, s32);
#define ALLOC(dst, expr) \
    if (!lbl_8035AADC) fn_800604C4(-2, 0, 0, 0); \
    fn_800F7EC0(lbl_8035AADC); \
    dst = expr; \
    fn_800F7E98(); \
    if (!dst) fn_800604C4(-4, 0, 0, 0);
void fn_8011131C(T *t) {
    u32 i;
    if (t->n != 0 && t->a16 == 0) {
    switch (t->type) {
    case 0: ALLOC(t->a16, new C8010C41C[t->n]) break;
    case 1: ALLOC(t->a16, new C8010AC94[t->n]) break;
    case 2: ALLOC(t->a16, new C8010AB20[t->n]) break;
    case 3: ALLOC(t->a16, new C8010A9AC[t->n]) break;
    case 4: ALLOC(t->a16, new C8010A838[t->n]) break;
    case 5: ALLOC(t->a16, new C8010A664[t->n]) break;
    case 6: ALLOC(t->a16, new C8011497C[t->n]) break;
    case 7: ALLOC(t->a16, new C801145C8[t->n]) break;
    case 8: ALLOC(t->a16, new C80114210[t->n]) break;
    case 9: ALLOC(t->a16, new C80113E5C[t->n]) break;
    case 10: ALLOC(t->a16, new C80113AA8[t->n]) break;
    case 11: ALLOC(t->a16, new C801136E0[t->n]) break;
    }
    ALLOC(t->a20, new C8010C958[t->n])
    for (i = 0; i < t->n; i++) fn_8010C790(&t->a20[i], t->type, 1);
    ALLOC(t->a24, new B8010CE30[t->n])
    }
}

} /* extern "C" */
