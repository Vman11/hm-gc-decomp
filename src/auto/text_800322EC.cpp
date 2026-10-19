// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V1_800322EC { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void **m(s32); };
struct V2_800322EC { u8 pad[0xD0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void n(s32); };
extern void *lbl_8035B65C;
extern u8 *lbl_8035A02C;
extern u8 *lbl_8035B5E4;
extern void *lbl_8035A0A4;
extern u8 *lbl_8035B488;
extern f32 lbl_8035BD80;
extern u8 lbl_80294810[];
extern u8 lbl_8029481C[];
void __ct__9C80253F24Fiiii(void *, void *, s32, s32, s32);
void fn_80039E80(void *, s32, f32);
void fn_8003CFB8(void *);
void fn_80254C94(void *);

void fn_800322EC(u8 *p) {
    __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_80294810, 0, 0, 0);
    if (*(s32 *)(lbl_8035A02C + 0x20) != 0) {
        fn_80039E80(lbl_8035A02C, 0, lbl_8035BD80);
    }
    __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_8029481C, 0, 0, 0);
    (*(V2_800322EC **)(*(V1_800322EC **)(lbl_8035B5E4 + 0x18))->m(*(s32 *)(lbl_8035B5E4 + 0x68)))->n(1);
    fn_8003CFB8(lbl_8035A0A4);
    *(u32 *)(lbl_8035B488 + 0x27F0) &= ~2;
    fn_80254C94(p);
    *(s32 *)(p + 0xC34) = 0;
}

} /* extern "C" */
