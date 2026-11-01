// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A;
struct V {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32();
    virtual void s33(char *, void *, int, u32, u32);
};
struct P {
    u8 pad0[96];
    s32 t96;
    u8 pad100[124];
    void *a224;
    V *v228;
    u8 pad232[4];
    u32 u236;
    u8 pad240[40];
    char *s280;
    u32 u284;
    f32 *f288;
};
extern f32 lbl_80362AB8;
extern char lbl_80362ABC[8], lbl_80362AC4[4];
extern void *lbl_8035B65C;
void fn_802494A4(P *, int);
void fn_80241588(P *, int, int, f32);
void fn_8024125C(P *, int);
void fn_8023F9C8(P *, u32);
void fn_802490E0(P *, int, f32);
int fn_800F6CD0(char *, char *);
void __ct__9C80253F24Fiiii(void *, char *, int, int, int);

void fn_8003F140();
void fn_8003F18C();
void fn_8003F1DC();
void fn_8003FB68();
void fn_8003FB6C();
void fn_800AEDD4(P *p, s32 n);
void fn_800AF1B0();
void fn_800AF224();
void fn_800AF280();
void fn_800AF36C();
void fn_800AF3AC();
void fn_800AF4C8();
void fn_800AF690();
void fn_800AF698();
void fn_8023D198();
void fn_80240054();
void fn_80241D80();
void fn_80249AC4();
extern char lbl_8029B798[];
extern char lbl_8029B7A4[];
extern char lbl_8029B7B0[];
extern char lbl_803629E8[];
extern char lbl_803629F0[];
extern char lbl_803629F8[];
extern char lbl_80362A00[];
extern char lbl_80362A08[];
extern char lbl_80362A10[];
extern char lbl_80362A18[];
extern char lbl_80362A20[];
extern char lbl_80362A28[];
extern char lbl_80362A30[];
extern char lbl_80362A38[];
extern char lbl_80362A40[];
extern char lbl_80362A48[];
extern char lbl_80362A50[];
extern char lbl_80362A58[];
extern char lbl_80362A60[];
extern char lbl_80362A68[];
extern char lbl_80362A70[];
extern char lbl_80362A78[];
extern char lbl_80362A80[];
extern char lbl_80362A88[];
extern char lbl_80362A90[];
extern char lbl_80362A98[];
extern char lbl_80362AA0[];
extern char lbl_80362AA8[];
extern char lbl_80362AB0[];
void *lbl_802D50E0[236] = { (void *)0x0, (void *)0xFA, (void *)0x1F4, (void *)0x2EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449, (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52, (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F, (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C, (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x0, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944, (void *)0x0, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952, (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454, (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C, (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0xBF800000, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0x3F800000, (void *)0xBF800000, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x40, (void *)0x43, (void *)0x46, (void *)0x49, (void *)0x4C, (void *)0x4F, (void *)0x52, (void *)0x55, (void *)0x1E, (void *)0x21, (void *)0x24, (void *)0x27, (void *)0x2A, (void *)0x2D, (void *)0x30, (void *)0x33, (void *)&lbl_803629E8, (void *)&lbl_803629F0, (void *)&lbl_803629F8, (void *)&lbl_80362A00, (void *)&lbl_803629F0, (void *)&lbl_80362A08, (void *)&lbl_80362A10, (void *)&lbl_803629F0, (void *)&lbl_80362A18, (void *)&lbl_80362A20, (void *)&lbl_80362A20, (void *)0x0, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)&lbl_8029B798, (void *)&lbl_80362A28, (void *)0x0, (void *)0x626F6E65, (void *)0x31520000, (void *)0x0, (void *)&lbl_80362A30, (void *)0x0, (void *)0x626F6E65, (void *)0x31520000, (void *)0x0, (void *)&lbl_80362A38, (void *)0x0, (void *)0x626F6E65, (void *)0x33520000, (void *)0x0, (void *)&lbl_80362A40, (void *)0x0, (void *)0x626F6E65, (void *)0x33520000, (void *)0x0, (void *)&lbl_80362A48, (void *)0x0, (void *)0x626F6E65, (void *)0x31520000, (void *)0x0, (void *)&lbl_80362A50, (void *)0x0, (void *)0x626F6E65, (void *)0x31520000, (void *)0x0, (void *)&lbl_80362A58, (void *)0x0, (void *)0x626F6E65, (void *)0x33520000, (void *)0x0, (void *)&lbl_80362A60, (void *)0x0, (void *)0x626F6E65, (void *)0x33520000, (void *)0x0, (void *)&lbl_80362A68, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)&lbl_80362A70, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)&lbl_80362A78, (void *)&lbl_80362A80, (void *)&lbl_80362A88, (void *)&lbl_80362A90, (void *)&lbl_80362A98, (void *)&lbl_80362AA0, (void *)&lbl_8029B7A4, (void *)&lbl_80362AA8, (void *)&lbl_8029B7B0, (void *)&lbl_8029B798, (void *)&lbl_80362AB0, (void *)&lbl_80362AA0, (void *)0x0, (void *)0x1, (void *)&lbl_8029B7A4, (void *)0x1, (void *)0x1, (void *)&lbl_80362AA8, (void *)0x2, (void *)0x1, (void *)&lbl_8029B7B0, (void *)0x3, (void *)0x1, (void *)&lbl_8029B798, (void *)0x4, (void *)0x1, (void *)&lbl_80362AB0, (void *)0x5, (void *)0x1, (void *)0x0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5 };
static s32 tA[6] = { 0, 5, 9, 13, 16, 19 };
static s32 tB[20] = { 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 2, 1, 2, 1, 2, 3, 1, 1, 5 };
static s32 tC[20] = { 0, 1, 2, 3, 4, 5, 6, 5, 6, 5, 7, 5, 8, 5, 9, 5, 5, 10, 5, 5 };
void *lbl_802D5548[14] = { (void *)0x0, (void *)0x0, (void *)&fn_800AF4C8, (void *)&fn_80249AC4, (void *)&fn_800AF3AC, (void *)&fn_800AF224, (void *)&fn_800AF36C, (void *)&fn_8023D198, (void *)&fn_800AF690, (void *)&fn_800AEDD4, (void *)&fn_80241D80, (void *)&fn_8003F140, (void *)&fn_8003F18C, (void *)&fn_800AF1B0 };
void *wAX_802D5580[6] = { (void *)&fn_8003FB68, (void *)&fn_800AF280, (void *)&fn_8003F1DC, (void *)&fn_80240054, (void *)&fn_800AF698, (void *)&fn_8003FB6C };
void fn_800AEDD4(P *p, s32 n) {
    s32 *q;
    s32 i;
    s32 t;
    u32 j;
    t = p->t96;
    i = tA[n];
    for (q = tB + i; t > 0; q++) {
        if (*q > t) break;
        t -= tB[i++];
    }
    switch (tC[i]) {
    case 0:
        fn_802494A4(p, 1);
        break;
    case 1:
        fn_80241588(p, 0, 0, lbl_80362AB8);
        break;
    case 2:
        fn_80241588(p, 1, 0, lbl_80362AB8);
        fn_8024125C(p, 0);
        for (j = 0; j < 8; j++) fn_8023F9C8(p, j);
        break;
    case 3:
        fn_8023F9C8(p, 8);
        fn_8023F9C8(p, 9);
        fn_802490E0(p, 0, *p->f288);
        break;
    case 4:
        fn_80241588(p, 2, 0, lbl_80362AB8);
        break;
    case 5:
        return;
    case 6:
        p->v228->s33(lbl_80362ABC, p->a224, 0, p->u236, p->u284);
        break;
    case 7:
        fn_802494A4(p, 2);
        break;
    case 8:
        if (fn_800F6CD0(p->s280, lbl_80362AC4) == 0) __ct__9C80253F24Fiiii(lbl_8035B65C, p->s280, 0, 0, 0);
        break;
    case 9:
        fn_802494A4(p, 3);
        break;
    case 10:
        if (fn_800F6CD0(p->s280, lbl_80362AC4) == 0) __ct__9C80253F24Fiiii(lbl_8035B65C, p->s280, 0, 0, 0);
        fn_802494A4(p, 4);
        break;
    case 11:
        break;
    }
}

} /* extern "C" */
