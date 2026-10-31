// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct OA { u8 pad[16]; s32 n; };
struct OV { OA *a; u8 pad[4]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual s32 s5(s32); };
typedef struct E28 { u8 a[8]; u8 b[8]; s32 f16, f20, f24; } E28;
typedef struct DB { u8 pad[12]; void *db; } DB;
typedef struct P {
    s32 f0[23]; s32 arr92[2]; s32 f100; s8 cnt104; u8 pad105[3]; s32 n108; E28 *e112; s32 f116[10]; s32 loaded156;
    virtual void u0(); virtual void u1(); virtual void Unload();
} P;
extern DB *lbl_8035B754;
extern void *lbl_8035B718;
extern char lbl_802A9CF8[];
extern char lbl_80366A28[8], lbl_80366A30[8], lbl_80366A38[8], lbl_80366A40[8];
OV **fn_8010FEDC(void *, void *, const char *, int);
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void *__nwa__FUl(u32);
void fn_800F6E88(void *, s32);
static inline s32 get(void *db, void *key, const char *nm) { OV *o = *fn_8010FEDC(db, key, nm, 1); return o->s5(0); }
s32 fn_8025EF94(P *p, void *key) {
    char *b = lbl_802A9CF8;
    void *db;
    s32 i;
    OV *o;
    if (p->loaded156 != 0) p->Unload();
    db = lbl_8035B754->db;
    *(s32 *)((u8 *)p + 0) = get(db, key, lbl_80366A28);
    *(s32 *)((u8 *)p + 4) = get(db, key, lbl_80366A30);
    *(s32 *)((u8 *)p + 8) = get(db, key, b + 16);
    *(s32 *)((u8 *)p + 12) = get(db, key, lbl_80366A38);
    *(s32 *)((u8 *)p + 16) = get(db, key, b + 28);
    *(s32 *)((u8 *)p + 20) = get(db, key, b + 40);
    *(s32 *)((u8 *)p + 24) = get(db, key, b + 52);
    *(s32 *)((u8 *)p + 28) = get(db, key, b + 68);
    *(s32 *)((u8 *)p + 32) = get(db, key, b + 88);
    *(s32 *)((u8 *)p + 36) = get(db, key, b + 108);
    *(s32 *)((u8 *)p + 44) = get(db, key, b + 128);
    *(s32 *)((u8 *)p + 48) = get(db, key, b + 140);
    *(s32 *)((u8 *)p + 52) = get(db, key, lbl_80366A40);
    *(s32 *)((u8 *)p + 56) = get(db, key, b + 152);
    *(s32 *)((u8 *)p + 60) = get(db, key, b + 176);
    *(s32 *)((u8 *)p + 64) = get(db, key, b + 196);
    *(s32 *)((u8 *)p + 68) = get(db, key, b + 208);
    *(s32 *)((u8 *)p + 72) = get(db, key, b + 228);
    *(s32 *)((u8 *)p + 76) = get(db, key, b + 240);
    *(s32 *)((u8 *)p + 80) = get(db, key, b + 260);
    *(s32 *)((u8 *)p + 84) = get(db, key, b + 280);
    *(s32 *)((u8 *)p + 88) = get(db, key, b + 296);
    o = *fn_8010FEDC(db, key, b + 308, 1);
    p->cnt104 = o->a->n;
    for (i = 0; i < p->cnt104; i++) p->arr92[i] = o->s5(i);
    p->f100 = get(db, key, b + 324);
    p->n108 = *(s32 *)get(db, key, b + 340);
    if (lbl_8035B718 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B718);
    p->e112 = (E28 *)__nwa__FUl(p->n108 * 28);
    fn_800F7E98();
    if (p->e112 == 0) fn_800604C4(-4, 0, 0, 0);
    o = *fn_8010FEDC(db, key, b + 352, 1);
    for (i = 0; i < p->n108; i++) fn_800F6E88(&p->e112[i], o->s5(i));
    o = *fn_8010FEDC(db, key, b + 364, 1);
    for (i = 0; i < p->n108; i++) {
        fn_800F6E88(p->e112[i].b, o->s5(i));
        p->e112[i].f20 = 0;
        p->e112[i].f24 = 0;
        p->e112[i].f16 = 0;
    }
    *(s32 *)((u8 *)p + 116) = get(db, key, b + 376);
    *(s32 *)((u8 *)p + 120) = get(db, key, b + 392);
    *(s32 *)((u8 *)p + 124) = get(db, key, b + 412);
    *(s32 *)((u8 *)p + 128) = get(db, key, b + 424);
    *(s32 *)((u8 *)p + 132) = get(db, key, b + 456);
    *(s32 *)((u8 *)p + 136) = get(db, key, b + 476);
    *(s32 *)((u8 *)p + 140) = get(db, key, b + 496);
    *(s32 *)((u8 *)p + 144) = get(db, key, b + 516);
    *(s32 *)((u8 *)p + 148) = get(db, key, b + 536);
    *(s32 *)((u8 *)p + 152) = get(db, key, b + 548);
    p->loaded156 = 1;
    return 0;
}

} /* extern "C" */
