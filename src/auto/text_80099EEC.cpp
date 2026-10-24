// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct FI { u8 d[60]; } FI;
}
struct V48 { u8 pad[48]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void f(); };
struct OB { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual u32 f(u32); };
extern "C" {
typedef struct O : OB { u8 pad4[212 - 4]; u32 x212; u8 pad216[236 - 216]; int x236; int x240; u8 pad244[736 - 244]; f32 x736; f32 x740; } O;
typedef struct S818 { u8 pad[24]; int x24; } S818;
typedef struct S5E4 { u8 pad[104]; int idx; u8 pad108[4]; u8 *arr; } S5E4;
extern S818 *lbl_8035B818;
extern u8 **lbl_8035B684;
extern void *lbl_8035A0A4;
extern u8 *lbl_8035B65C;
extern void *lbl_8035B79C;
extern f32 lbl_80361574;
extern u8 *lbl_8035A1DC;
extern char lbl_8029A264[];
extern char lbl_8029A270[];
extern u8 *lbl_8035B7BC;
extern S5E4 *lbl_8035B5E4;
extern u8 *lbl_8035A01C;
extern u32 lbl_8035A408;
extern s8 lbl_8035A40C;
extern u32 lbl_8035A410;
extern s8 lbl_8035A414;
extern u32 lbl_803615A4, lbl_803615A8, lbl_803615AC, lbl_803615B0, lbl_803615B4, lbl_803615B8;
void fn_80272A48(S818 *);
void fn_80272A10(S818 *);
void fn_8015B014(void);
void fn_8003E5F4(void *);
void fn_8003E66C(void *);
void fn_8003E77C(void *, u32);
f32 fn_80268A70(void *);
void fn_80268A8C(void *, int, f32);
void fn_80207198(u8 *, char *, int);
void fn_8026DD40(u8 *, int, f32);
void fn_80253250(u8 *);
u32 fn_800FBB9C(void);
void fn_802516A4(S5E4 *, int);
int fn_800B86FC(void);
s32 DVDGetDriveStatus(void);
void fn_800C3424(u32);
void fn_800C6F38(void);
void fn_800D6438(void);
void fn_800C2584(int);
void fn_800C23E8(void);
void fn_800C1364(void);
void OSResetSystem(int, u32, int);
int fn_800BFF54(void);
void fn_800BD3AC(char *, FI *);
void fn_800BD810(FI *, void *, int, int, int, int);
void fn_800BD474(FI *);
void fn_800BFAA8(FI *);
int fn_8020B1E0(void);
#define IsX() (lbl_8035B65C && (*(int *)(lbl_8035B65C + 140) & 0x80))
static inline void Shut(void) {
    fn_800C3424(0xF0000000);
    fn_800C6F38();
    fn_800D6438();
    fn_800C2584(1);
    fn_800C23E8();
    fn_800C1364();
}
void fn_80099EEC(O *o, u32 arg) {
    u8 buf[32] __attribute__((aligned(32)));
    FI fi;
    u32 t;
    if (lbl_8035B818 && lbl_8035B818->x24) {
        V48 *v;
        fn_80272A48(lbl_8035B818);
        fn_80272A10(lbl_8035B818);
        v = *(V48 **)(*(u8 **)(*lbl_8035B684 + 11344));
        v->f();
        fn_8015B014();
        fn_8003E5F4(lbl_8035A0A4);
    }
    o->x236 = 1;
    if (IsX()) {
        f32 f;
        o->x740 = fn_80268A70(lbl_8035B79C);
        fn_80268A8C(lbl_8035B79C, 0, lbl_80361574);
        o->x212 = *(u32 *)(*(u8 **)(lbl_8035A1DC + 14088) + 4);
        fn_80207198(*(u8 **)(lbl_8035B65C + 36) + 992, lbl_8029A264, 0);
        f = **(f32 **)(lbl_8035B7BC + 32);
        if (lbl_80361574 != f) o->x736 = f;
        fn_8026DD40(lbl_8035B7BC, 1, lbl_80361574);
        fn_80253250(lbl_8035B5E4->arr + lbl_8035B5E4->idx * 52);
    } else if (lbl_8035A01C && *(int *)(lbl_8035A01C + 28) == 0) {
        o->x740 = fn_80268A70(lbl_8035B79C);
        fn_80268A8C(lbl_8035B79C, 0, lbl_80361574);
    }
    fn_8003E77C(lbl_8035A0A4, arg);
    if (!IsX()) {
        fn_8003E5F4(lbl_8035A0A4);
        fn_8003E66C(lbl_8035A0A4);
        fn_8003E66C(lbl_8035A0A4);
    } else if (IsX()) {
        fn_8003E66C(lbl_8035A0A4);
    }
    t = fn_800FBB9C();
    while (o->x236) {
        s32 st;
        u32 r;
        if (IsX() && fn_800FBB9C() - t > 17) {
            fn_802516A4(lbl_8035B5E4, 0);
            t = fn_800FBB9C();
        }
        if (!lbl_8035A40C) { lbl_8035A408 = 0; lbl_8035A40C = 1; }
        if (!lbl_8035A414) { lbl_8035A410 = 0; lbl_8035A414 = 1; }
        if (fn_800B86FC()) {
            lbl_8035A408 |= lbl_803615A4;
        } else {
            if (lbl_8035A408 & 1) lbl_8035A408 |= lbl_803615A8;
            lbl_8035A408 &= ~1;
        }
        st = DVDGetDriveStatus();
        lbl_8035A408 &= ~0x78;
        switch (st) {
        case 11: *(volatile u32 *)&lbl_8035A408 |= lbl_803615AC; break;
        case 4: *(volatile u32 *)&lbl_8035A408 |= lbl_803615B0; break;
        case 5: *(volatile u32 *)&lbl_8035A408 |= lbl_803615B4; break;
        case 6: *(volatile u32 *)&lbl_8035A408 |= lbl_803615B8; break;
        }
        r = o->f(lbl_8035A408);
        if (r & 2) {
            Shut();
            if (r & 4) OSResetSystem(1, 1, 1);
            else if (fn_800BFF54()) OSResetSystem(0, 1, 0);
            else OSResetSystem(1, 1, 0);
        }
    }
    fn_800BD3AC(lbl_8029A270, &fi);
    fn_800BD810(&fi, buf, 32, 0, 0, 2);
    t = fn_800FBB9C();
    while (fn_800BFAA8(&fi), fn_8020B1E0() == 7) {
        u32 st;
        if (IsX() && fn_800FBB9C() - t > 17) {
            fn_802516A4(lbl_8035B5E4, 0);
            t = fn_800FBB9C();
        }
        st = DVDGetDriveStatus();
        if (st == 11 || st - 4 <= 1 || st == 6) {
            fn_800BD474(&fi);
            fn_8003E77C(lbl_8035A0A4, o->x212);
            return;
        }
        if (fn_800B86FC()) {
            Shut();
            if (fn_800BFF54()) OSResetSystem(0, 1, 0);
            else OSResetSystem(1, 1, 0);
        }
    }
    o->x240 = 1;
    fn_800BD474(&fi);
}

} /* extern "C" */
