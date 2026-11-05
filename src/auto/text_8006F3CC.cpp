#include "common.h"

extern "C" {

struct O6F { u8 pad[0x68c]; s32 f68c; };
struct M6F {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void play(char *, O6F *, s32, s32, s32);
};
struct P6F { u8 pad[0xdc]; s32 fdc; u8 pade0[0x118 - 0xe0]; O6F *f118; u8 pad11c[0x16c - 0x11c]; f32 *f16c; f32 *f170; f32 f174; char f178[8]; M6F *f180; };
void fn_80228144(void *, const char *, f32, f32, O6F *, s32, const char *, s32, s32, f32);
void fn_802494A4(P6F *, s32);
void fn_80242174(P6F *, f32);
s32 fn_800724A4(O6F *);
void fn_8007115C(P6F *);
void fn_80241588(P6F *, s32, s32, f32);
s32 fn_800F6CD0(void *, char *);
void __ct__9C80253F24Fiiii(void *, const char *, s32, s32, s32);
extern void *lbl_8035B308;
extern void *lbl_8035B65C;
extern f32 lbl_803596E0[];
extern f32 lbl_8035F2D0;
extern f32 lbl_8035F1BC;
extern f32 lbl_8035F2E4;
extern char lbl_8035F2D4[8];
extern char lbl_8035F2DC[8];
extern char lbl_8035EE18[8];
extern char lbl_8035F264[8];
extern char lbl_8035F26C[8];
extern char lbl_8035F0E4[8];
extern char lbl_8035F2E8[8];
extern char lbl_8035F1D4[8];

// .rodata string pool 0x80297908.. (owned by text_800690FC): earlier strings keep the offsets
const char *wHT_strpool_8006F3CC[] = {
    "MContact",
    "MAirborn",
    "MStation",
    "MFalling",
    "SNEAKLFT",
    "SNEAKRGT",
    "SNEAKBCK",
    "JUMPLAND",
    "JUMPSHOT",
    "sprtfwd2",
    "Cnothnks",
    "activate",
    "BALLROLL",
    "DmFrShot",
    "HmFrShot",
    "WlgnShot",
    "BRingSht",
    "BRingSh2",
    "AttFbll2",
    "hazshots",
    "BNS_OVER",
    "IDLEBOR1",
    "JMPSLACK",
    "GAMEOVER",
    "SUCKSHRV",
    "BRAKBEAM",
    "SolClcta",
    "SolClctb",
    "SolClctc",
    "SolClctd",
    "STANDCOM",
    "BNS_SHRV",
    "ACTV8ING",
    "SPRT2HIT",
    "ANIMOVER",
    "ANIMLOOP",
    "JUMP_PRS",
    "FJMP_PRS",
    "BEAM_PRS",
    "BEAM_REL",
    "STRT_COL",
    "GDAMAGED",
    "KDAMAGED",
    "OBJKILLD",
    "TRANSOVR",
    "STRT_COM",
    "CHRG_PRS",
    "CHRG_REL",
    "LIGHTOFF",
    "TELEPORT",
    "NSHRINKP",
    "WATEROFF",
    "STRTPATH",
    "CHGPTH10",
    "CHGPTH11",
    "CHGPTH12",
    "CHGPTH13",
    "CHGPTH14",
    "CHGPTH15",
    "CHGPTH16",
    "CHGPTH17",
    "CHGPTH18",
    "CHGPTH19",
    "CHGPTH20",
    "CHGPTH21",
    "CHGPTH22",
    "CHGPTH23",
    "CHGPTH24",
    "CHGPTH25",
    "CINFUEGO",
    "CINFUEG1",
    "BACK2WRK",
    "RAINOFFE",
    "PRERESET",
    "GGGLNTRN",
    "NGGLNTRN",
    "GIVEGEM2",
    "GIVEGEM3",
    "GIVEGEM4",
    "GIVEGEM5",
    "GIVEGEM6",
    "GIVEGEML",
    "BODYNODE",
    "BODYANIM",
    "PLYRDEAD",
    "C_NOSHKE",
    "PLYRLIVE",
    "C_NSCARY",
    "LvSprFnd",
    "PLYRNACT",
    "PREMNGST",
    "RUMBLE_M",
    "PlrShot2",
    "C_RESUME",
    "aaCertificateNames",
    "aaCertificateEvents",
    "SHRVPNTR",
    "RUMBLE_L",
    "RUMBLE_H",
    "SENDDIST",
    "Srchable",
};

inline void Set6F(P6F *p, s32 id) {
    if (p->fdc == 0xe && !fn_800724A4(p->f118)) fn_8007115C(p);
    fn_80241588(p, id, 0, lbl_8035F1BC);
}

void fn_8006F3CC(P6F *p) {
    p->f174 = lbl_803596E0[0];
    p->f180 = 0;
    fn_80228144(lbl_8035B308, "SENDDIST", *p->f16c, *p->f170, p->f118, 0, lbl_8035F2D4, 0, 1, lbl_8035F2D0);
    fn_80228144(lbl_8035B308, "SENDDIST", *p->f16c, *p->f170, p->f118, 0, lbl_8035F2DC, 0, 1, lbl_8035F2D0);
    if (p->f180 == 0) {
        p->f174 = lbl_803596E0[0];
        p->f180 = 0;
        fn_80228144(lbl_8035B308, "SENDDIST", *p->f16c, *p->f170, p->f118, 0, "Srchable", 0, 1, lbl_8035F2D0);
        if (p->f180) {
            fn_802494A4(p, 6);
            p->f180->play(lbl_8035EE18, p->f118, 0, 0, 0);
        }
    }
    if (p->f118->f68c != 0 && p->f180) {
        if (fn_800F6CD0(p->f178, lbl_8035F264)) {
            p->f180->play(lbl_8035F1D4, p->f118, 0, 0, 0);
            __ct__9C80253F24Fiiii(lbl_8035B65C, "PLYRDEAD", 0, 0, 0);
            Set6F(p, 0x5e);
            fn_802494A4(p, 0x20);
        } else if (fn_800F6CD0(p->f178, lbl_8035F26C)) {
            __ct__9C80253F24Fiiii(lbl_8035B65C, "PLYRDEAD", 0, 0, 0);
            Set6F(p, 0x5a);
            fn_802494A4(p, 0x20);
        } else if (fn_800F6CD0(p->f178, lbl_8035F0E4)) {
            p->f180->play(lbl_8035F1D4, p->f118, 0, 0, 0);
            Set6F(p, 0x47);
            fn_802494A4(p, 0x20);
        } else if (fn_800F6CD0(p->f178, lbl_8035EE18)) {
            p->f180->play(lbl_8035F1D4, p->f118, 0, 0, 0);
            __ct__9C80253F24Fiiii(lbl_8035B65C, "PLYRDEAD", 0, 0, 0);
            Set6F(p, 0x57);
            fn_80242174(p, lbl_8035F2E4);
            fn_802494A4(p, 0x20);
        } else if (fn_800F6CD0(p->f178, lbl_8035F2E8)) {
            p->f180->play(lbl_8035F1D4, p->f118, 0, 0, 0);
        } else {
            __ct__9C80253F24Fiiii(lbl_8035B65C, "PLYRDEAD", 0, 0, 0);
            Set6F(p, 0x75);
            fn_802494A4(p, 0x20);
        }
    }
}

}
