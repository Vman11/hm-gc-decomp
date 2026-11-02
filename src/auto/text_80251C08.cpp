// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct D { u32 f0; u32 f4; u32 f8; u32 fc; u32 f10; u32 f14; f32 f18; u32 f1c; };
struct S18 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
  virtual void v10(); virtual void v11(); virtual void v12(D *); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual u32 v18(); };
struct S14 { virtual void v0(); virtual void v1(); virtual void v2(); virtual S18 *v3(u32); };
struct Sub { u8 pad[0x30]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual u32 v7(); virtual u32 v8(); };
struct G { u8 pad[0x2c34]; Sub sub; u8 pad2[0x2f28 - 0x2c34 - sizeof(Sub)]; S14 *f2f28; };
class C8011C518 { public: C8011C518(); u8 d[0x80]; };
class C80251FB4 { public: C80251FB4(); ~C80251FB4(); void init(void *p, u32 i) { f2c = p; f0 = i; } u32 f0; u8 pad[0x28]; void *f2c; u8 pad2[4]; };
struct O { u8 pad[0x10]; virtual void v0(); virtual void v1(); S14 *f14; S18 *f18; u8 pad1c[8]; C8011C518 *f24; u32 *f28; u32 n2c; u32 *f30; u32 n34; u8 pad38[0x6c - 0x38]; u32 f6c; C80251FB4 *f70; u32 n74; s32 f78; };
extern void *lbl_8035B5E0;
extern volatile f32 lbl_80366518;
void *memset(void *, int, u32);
void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void);
void fn_8011C388(C8011C518 *, S18 *, s32, s32);
void fn_800F8E38(O *, u32);

void fn_80251C08(O *o, G *g, u32 n34, u32 n2c, u32 v6c) {
    D d;
    u32 i;
    if (o->f78) o->v1();
    o->f14 = g->f2f28;
    o->f6c = v6c;
    memset(&d, 0, 0x20);
    d.fc = g->sub.v8();
    *(volatile u32 *)&d.f8 = g->sub.v7();
    *(volatile u32 *)&d.f14 = 6;
    *(volatile f32 *)&d.f18 = lbl_80366518;
    *(volatile u32 *)&d.f10 = 9;
    d.f0 = o->f6c;
    o->f18 = o->f14->v3(d.fc);
    o->f18->v12(&d);
    o->n34 = n34;
    o->n2c = n2c;
    if (!lbl_8035B5E0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B5E0);
    o->f30 = new u32[o->n34];
    fn_800F7E98();
    if (!o->f30) fn_800604C4(-4, 0, 0, 0);
    for (i = 0; i < o->n34; i++) o->f30[i] = 0;
    if (!lbl_8035B5E0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B5E0);
    o->f28 = new u32[o->n2c];
    fn_800F7E98();
    if (!o->f28) fn_800604C4(-4, 0, 0, 0);
    for (i = 0; i < o->n2c; i++) o->f28[i] = 0;
    if (!lbl_8035B5E0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B5E0);
    o->f24 = new C8011C518;
    fn_800F7E98();
    if (!o->f24) fn_800604C4(-4, 0, 0, 0);
    fn_8011C388(o->f24, o->f18, 1, 1);
    o->n74 = o->f18->v18();
    if (!lbl_8035B5E0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B5E0);
    o->f70 = new C80251FB4[o->n74];
    fn_800F7E98();
    if (!o->f70) fn_800604C4(-4, 0, 0, 0);
    {
        u32 j;
        for (j = 0; j < o->n74; j++) o->f70[j].init(o, j);
    }
    fn_800F8E38(o, o->n34);
    o->f78 = 1;
}

} /* extern "C" */
