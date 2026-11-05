// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A1BC;
extern volatile f32 lbl_8035A1B8;
extern volatile f64 lbl_8035E538;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, const char *, const char *, void *, s32);
void __register_global_object(void *, void *, void *);
extern char lbl_8035E540[8];
extern char lbl_8035E548[8];
extern char lbl_8035E550[8];
extern char lbl_8035E558[8];
extern char lbl_8035E560[8];
void fn_80239BAC(void);
void fn_8005D470(void);
void fn_80079824(void);
void fn_800375E4(void);

/* .bss 0x80302B90..0x80302DD0 and the .rodata string pool 0x80297208..0x80297268 are owned by this unit */
u8 lbl_80302B90[0xc];
u8 lbl_80302B9C[0x24];
u8 lbl_80302BC0[0xc];
u8 lbl_80302BCC[0x24];
u8 lbl_80302BF0[0xc];
u8 lbl_80302BFC[0x24];
u8 lbl_80302C20[0xc];
u8 lbl_80302C2C[0x24];
u8 lbl_80302C50[0xc];
u8 lbl_80302C5C[0x24];
u8 lbl_80302C80[0xc];
u8 lbl_80302C8C[0x24];
u8 lbl_80302CB0[0xc];
u8 lbl_80302CBC[0x24];
u8 lbl_80302CE0[0xc];
u8 lbl_80302CEC[0x24];
u8 lbl_80302D10[0xc];
u8 lbl_80302D1C[0x24];
u8 lbl_80302D40[0xc];
u8 lbl_80302D4C[0x24];
u8 lbl_80302D70[0xc];
u8 lbl_80302D7C[0x24];
u8 lbl_80302DA0[0xc];
u8 lbl_80302DAC[0x24];

void fn_8006025C(void) {
    lbl_8035A1BC = lbl_803596E0[0];
    lbl_8035A1B8 = fn_800EFDA4(lbl_8035E538);
    __register_global_object(fn_8023DC5C(lbl_80302B9C, "GmAcNode", "BillBall", (void *)fn_80239BAC, 0x254), (void *)fn_800375E4, lbl_80302B90);
    __register_global_object(fn_8023DC5C(lbl_80302BCC, "GmAcNode", lbl_8035E540, (void *)fn_80239BAC, 0x254), (void *)fn_800375E4, lbl_80302BC0);
    __register_global_object(fn_8023DC5C(lbl_80302BFC, "GmAcNode", lbl_8035E548, (void *)fn_8005D470, 0x344), (void *)fn_800375E4, lbl_80302BF0);
    __register_global_object(fn_8023DC5C(lbl_80302C2C, "GmAcNode", "AttFbll2", (void *)fn_8005D470, 0x344), (void *)fn_800375E4, lbl_80302C20);
    __register_global_object(fn_8023DC5C(lbl_80302C5C, "GmAcNode", lbl_8035E550, (void *)fn_8005D470, 0x344), (void *)fn_800375E4, lbl_80302C50);
    __register_global_object(fn_8023DC5C(lbl_80302C8C, "GmAcNode", lbl_8035E558, (void *)fn_8005D470, 0x344), (void *)fn_800375E4, lbl_80302C80);
    __register_global_object(fn_8023DC5C(lbl_80302CBC, "GmAcNode", "BRingSht", (void *)fn_8005D470, 0x344), (void *)fn_800375E4, lbl_80302CB0);
    __register_global_object(fn_8023DC5C(lbl_80302CEC, "GmAcNode", "BRingSh2", (void *)fn_8005D470, 0x344), (void *)fn_800375E4, lbl_80302CE0);
    __register_global_object(fn_8023DC5C(lbl_80302D1C, "GmAcNode", "DmFrShot", (void *)fn_8005D470, 0x344), (void *)fn_800375E4, lbl_80302D10);
    __register_global_object(fn_8023DC5C(lbl_80302D4C, "GmAcNode", "HmFrShot", (void *)fn_80079824, 0x35c), (void *)fn_800375E4, lbl_80302D40);
    __register_global_object(fn_8023DC5C(lbl_80302D7C, "GmAcNode", lbl_8035E560, (void *)fn_8005D470, 0x344), (void *)fn_800375E4, lbl_80302D70);
    __register_global_object(fn_8023DC5C(lbl_80302DAC, "GmAcNode", "Srchable", (void *)fn_80239BAC, 0x254), (void *)fn_800375E4, lbl_80302DA0);
}

__declspec(section ".ctors") static void (*const ctor_8006025C)(void) = fn_8006025C;

} /* extern "C" */
