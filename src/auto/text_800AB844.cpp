// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V3 { f32 x, y, z; };

struct VO {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12();
    virtual void getPos(V3 *a, s32 b, V3 *c, s32 d, s32 e);
    virtual void setPos(s32 a, V3 *b, V3 *c, V3 *d, V3 *e);
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26();
    virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32();
    virtual void play(char *s, void *a, s32 b, void *c, s32 d);
};

struct G308 { u8 pad[0x48]; VO *f48; };

struct P {
    u8 pad0[0x5c];
    s32 n5c;
    s32 t60;
    u8 pad64[0xe0 - 0x64];
    VO *fe0;
    void *fe4;
    u8 pade8[4];
    void *fec;
    void *ff0;
    u8 padf4[0x118 - 0xf4];
    VO *f118;
    f32 *f11c;
    u8 pad120[8];
    VO *f128;
    void *f12c;
    s32 f130;
    s32 f134;
};

extern G308 *lbl_8035B308;
extern f32 lbl_803624FC;
extern f32 lbl_80362500;
extern f32 lbl_80362504;
extern f32 lbl_80362508;
extern char lbl_8036250C[8];
extern char lbl_80362514[8];
extern char lbl_8036251C[8];
extern char lbl_80362524[8];
extern char lbl_8036252C[8];
extern char lbl_80362534[8];

int rand(void);
void fn_80101820(V3 *v);
void fn_80241628(P *p, s32 a, s32 b);
void fn_802494A4(P *p, s32 a);
void fn_8023F5E8(P *p, VO *a);
void fn_80241588(P *p, s32 a, s32 b, f32 t);
void fn_80242174(P *p, f32 t);
void fn_8023F9C8(P *p, s32 a);
void fn_8024125C(P *p, s32 a);
void fn_802491DC(P *p, s32 a);
void fn_80236AC0(VO *o);
void fn_80236B14(VO *o);
void fn_8024909C(P *p, s32 i);
void fn_80249058(P *p, s32 i);
void fn_802402E0(P *p);
void fn_802405B8(P *p);
void fn_80240274(P *p, s32 a);
void fn_80240948(P *p, char *s, s32 a);
void fn_802413D8(f32 f, P *p, void *a, s32 b, s32 c, void *d);
void fn_8023F864(P *p, s32 a);

void fn_8003F140();
void fn_8003F18C();
void fn_8003F1DC();
void fn_800ABEDC();
void fn_800ABF68();
void fn_800ABFF4();
void fn_800AC0D4();
void fn_800AC118();
void fn_800AC1B4();
void fn_800AC380();
void fn_800AC3D0();
void fn_8023D198();
void fn_80240054();
void fn_802416D4();
void fn_80241D80();
void fn_80242210();
void fn_80249AC4();
extern char lbl_8029B2F8[];
extern char lbl_8029B304[];
extern char lbl_8029B310[];
extern char lbl_8029B31C[];
extern char lbl_8029B328[];
extern char lbl_8029B334[];
extern char lbl_8029B340[];
extern char lbl_8029B34C[];
extern char lbl_8029B358[];
extern char lbl_8029B364[];
extern char lbl_8029B370[];
extern char lbl_8029B37C[];
extern char lbl_8029B388[];
extern char lbl_8029B394[];
extern char lbl_803623E0[];
extern char lbl_803623E8[];
extern char lbl_803623F0[];
extern char lbl_803623F8[];
extern char lbl_80362400[];
extern char lbl_80362408[];
extern char lbl_80362410[];
extern char lbl_80362418[];
extern char lbl_80362420[];
extern char lbl_80362428[];
extern char lbl_80362430[];
extern char lbl_80362434[];
extern char lbl_8036243C[];
extern char lbl_80362444[];
extern char lbl_8036244C[];
extern char lbl_80362454[];
extern char lbl_8036245C[];
extern char lbl_80362464[];
extern char lbl_8036246C[];
extern char lbl_80362474[];
extern char lbl_8036247C[];
extern char lbl_80362484[];
extern char lbl_8036248C[];
extern char lbl_80362494[];
extern char lbl_8036249C[];
extern char lbl_803624A4[];
extern char lbl_803624AC[];
extern char lbl_803624B4[];
extern char lbl_803624BC[];
extern char lbl_803624C4[];
extern char lbl_803624CC[];
extern char lbl_803624D4[];
extern char lbl_803624DC[];
extern char lbl_803624E4[];
extern char lbl_803624EC[];
extern char lbl_803624F4[];
void fn_800AB844(P *p, s32 n);
#pragma explicit_zero_data on
__declspec(section ".sdata2") char lbl_803623E0[8] = "MChase";
__declspec(section ".sdata2") char lbl_803623E8[8] = "MPath";
__declspec(section ".sdata2") char lbl_803623F0[8] = "LAUNCH";
__declspec(section ".sdata2") char lbl_803623F8[8] = "Maggot";
__declspec(section ".sdata2") char lbl_80362400[8] = "crawl";
__declspec(section ".sdata2") char lbl_80362408[8] = "CHASE";
__declspec(section ".sdata2") char lbl_80362410[8] = "JUMP";
__declspec(section ".sdata2") char lbl_80362418[8] = "EXPLODE";
__declspec(section ".sdata2") char lbl_80362420[8] = "magtexp";
__declspec(section ".sdata2") char lbl_80362428[8] = "Player";
__declspec(section ".sdata2") char lbl_80362430[4] = "";
__declspec(section ".sdata2") char lbl_80362434[8] = "Shots";
__declspec(section ".sdata2") char lbl_8036243C[8] = "PlrShot";
__declspec(section ".sdata2") char lbl_80362444[8] = "Leota";
__declspec(section ".sdata2") char lbl_8036244C[8] = "KABOOM";
__declspec(section ".sdata2") char lbl_80362454[8] = "SLOWOVR";
__declspec(section ".sdata2") char lbl_8036245C[8] = "DEADOVR";
__declspec(section ".sdata2") char lbl_80362464[8] = "MgtExp1";
__declspec(section ".sdata2") char lbl_8036246C[8] = "MgtExp2";
__declspec(section ".sdata2") char lbl_80362474[8] = "INIT";
__declspec(section ".sdata2") char lbl_8036247C[8] = "ENTRY";
__declspec(section ".sdata2") char lbl_80362484[8] = "IDLE";
__declspec(section ".sdata2") char lbl_8036248C[8] = "ATTACK";
__declspec(section ".sdata2") char lbl_80362494[8] = "DEAD";
__declspec(section ".sdata2") char lbl_8036249C[8] = "PATH";
__declspec(section ".sdata2") char lbl_803624A4[8] = "EXIT";
__declspec(section ".sdata2") char lbl_803624AC[8] = "SPAWN";
__declspec(section ".sdata2") char lbl_803624B4[8] = "LAND";
__declspec(section ".sdata2") char lbl_803624BC[8] = "HIDE";
__declspec(section ".sdata2") char lbl_803624C4[8] = "CHGPTH0";
__declspec(section ".sdata2") char lbl_803624CC[8] = "CHGPTH1";
__declspec(section ".sdata2") char lbl_803624D4[8] = "CHGPTH2";
__declspec(section ".sdata2") char lbl_803624DC[8] = "CHGPTH3";
__declspec(section ".sdata2") char lbl_803624E4[8] = "CHGANIM";
__declspec(section ".sdata2") char lbl_803624EC[8] = "CINON";
__declspec(section ".sdata2") char lbl_803624F4[8] = "CINOFF";
__declspec(section ".sdata2") f32 lbl_803624FC = 0.0001f;
__declspec(section ".sdata2") f32 lbl_80362500 = 1.75f;
__declspec(section ".sdata2") f32 lbl_80362504 = 0.2f;
__declspec(section ".sdata2") f32 lbl_80362508 = 60.0f;
__declspec(section ".sdata2") char lbl_8036250C[8] = "DAMAGE";
__declspec(section ".sdata2") char lbl_80362514[8] = "KILLED";
__declspec(section ".sdata2") char lbl_8036251C[8] = "PLAYER0";
__declspec(section ".sdata2") char lbl_80362524[8] = "PLAYER1";
__declspec(section ".sdata2") char lbl_8036252C[8] = "PLAYER2";
__declspec(section ".sdata2") char lbl_80362534[8] = "PLAYER3";
#pragma explicit_zero_data reset
void *lbl_802D3208[324] = { (void *)0x0, (void *)0xFA, (void *)0x1F4, (void *)0x2EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449, (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52, (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F, (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C, (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x0, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944, (void *)0x0, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952, (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454, (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C, (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0xBF800000, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0x3F800000, (void *)0xBF800000, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x40, (void *)0x43, (void *)0x46, (void *)0x49, (void *)0x4C, (void *)0x4F, (void *)0x52, (void *)0x55, (void *)0x1E, (void *)0x21, (void *)0x24, (void *)0x27, (void *)0x2A, (void *)0x2D, (void *)0x30, (void *)0x33, (void *)&lbl_8029B2F8, (void *)&lbl_8029B304, (void *)&lbl_803623E0, (void *)&lbl_803623E8, (void *)&lbl_803623F0, (void *)&lbl_803623F8, (void *)&lbl_80362400, (void *)&lbl_80362408, (void *)&lbl_803623F8, (void *)&lbl_80362400, (void *)&lbl_80362410, (void *)&lbl_803623F8, (void *)&lbl_80362400, (void *)&lbl_80362418, (void *)&lbl_80362420, (void *)0x0, (void *)&lbl_80362428, (void *)&lbl_80362428, (void *)&lbl_80362430, (void *)&lbl_80362430, (void *)&lbl_80362434, (void *)&lbl_8036243C, (void *)&lbl_80362430, (void *)&lbl_80362430, (void *)&lbl_80362434, (void *)&lbl_8029B310, (void *)&lbl_80362430, (void *)&lbl_80362430, (void *)&lbl_80362434, (void *)&lbl_8029B31C, (void *)&lbl_80362430, (void *)&lbl_80362430, (void *)&lbl_80362434, (void *)&lbl_8029B328, (void *)&lbl_80362430, (void *)&lbl_80362430, (void *)&lbl_80362434, (void *)&lbl_8029B334, (void *)&lbl_80362430, (void *)&lbl_80362430, (void *)&lbl_80362434, (void *)&lbl_8029B340, (void *)&lbl_80362430, (void *)&lbl_80362430, (void *)&lbl_80362434, (void *)&lbl_80362444, (void *)&lbl_80362430, (void *)&lbl_80362430, (void *)&lbl_80362434, (void *)&lbl_8029B34C, (void *)&lbl_80362430, (void *)&lbl_80362430, (void *)&lbl_80362430, (void *)0x40C00000, (void *)0x0, (void *)0x0, (void *)&lbl_8036244C, (void *)0x40800000, (void *)0x0, (void *)0x0, (void *)&lbl_80362454, (void *)0x3DCCCCCD, (void *)0x0, (void *)0x0, (void *)&lbl_8036245C, (void *)&lbl_80362464, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)&lbl_8036246C, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)&lbl_80362474, (void *)&lbl_8036247C, (void *)&lbl_80362408, (void *)&lbl_80362484, (void *)&lbl_8036248C, (void *)&lbl_80362494, (void *)&lbl_8036249C, (void *)&lbl_80362474, (void *)&lbl_803624A4, (void *)&lbl_8029B358, (void *)&lbl_8029B364, (void *)&lbl_8029B364, (void *)&lbl_80362494, (void *)&lbl_8036245C, (void *)&lbl_803624AC, (void *)&lbl_8029B370, (void *)&lbl_8029B37C, (void *)&lbl_8029B388, (void *)&lbl_8036244C, (void *)&lbl_803624B4, (void *)&lbl_803624BC, (void *)&lbl_8029B394, (void *)&lbl_803624C4, (void *)&lbl_803624CC, (void *)&lbl_803624D4, (void *)&lbl_803624DC, (void *)&lbl_803624E4, (void *)&lbl_803624EC, (void *)&lbl_803624F4, (void *)&lbl_80362474, (void *)0x0, (void *)0x1, (void *)&lbl_803624A4, (void *)0x1, (void *)0x1, (void *)&lbl_8029B358, (void *)0x2, (void *)0x1, (void *)&lbl_8029B364, (void *)0x3, (void *)0x2, (void *)&lbl_80362494, (void *)0x5, (void *)0x1, (void *)&lbl_8036245C, (void *)0x6, (void *)0x1, (void *)&lbl_803624AC, (void *)0x7, (void *)0x1, (void *)&lbl_8029B370, (void *)0x8, (void *)0x1, (void *)&lbl_8029B37C, (void *)0x9, (void *)0x1, (void *)&lbl_8029B388, (void *)0xA, (void *)0x1, (void *)&lbl_8036244C, (void *)0xB, (void *)0x1, (void *)&lbl_803624B4, (void *)0xC, (void *)0x1, (void *)&lbl_803624BC, (void *)0xD, (void *)0x1, (void *)&lbl_8029B394, (void *)0xE, (void *)0x1, (void *)&lbl_803624C4, (void *)0xF, (void *)0x1, (void *)&lbl_803624CC, (void *)0x10, (void *)0x1, (void *)&lbl_803624D4, (void *)0x11, (void *)0x1, (void *)&lbl_803624DC, (void *)0x12, (void *)0x1, (void *)&lbl_803624E4, (void *)0x13, (void *)0x1, (void *)&lbl_803624EC, (void *)0x14, (void *)0x1, (void *)&lbl_803624F4, (void *)0x15, (void *)0x1, (void *)0x0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7, (void *)0x8, (void *)0x9, (void *)0xA, (void *)0xB, (void *)0xC, (void *)0xD, (void *)0xE, (void *)0xF, (void *)0x10, (void *)0x11, (void *)0x12, (void *)0x13, (void *)0x14, (void *)0x15 };
static s32 sTabA[22] = { 0, 7, 11, 12, 15, 18, 21, 24, 26, 28, 33, 38, 39, 40, 43, 46, 49, 52, 55, 58, 61, 64 };
static s32 sTabB[67] = { 1, 1, 1, 1, 1, 1, 1, 3, 1, 2, 1, 7, 2, 1, 4, 2, 2, 3, 2, 2, 3, 5, 1, 1, 1, 6, 1, 6, 3, 1, 1, 1, 1, 2, 1, 2, 1, 1, 7, 7, 5, 1, 1, 5, 1, 1, 5, 1, 1, 5, 1, 1, 5, 1, 1, 5, 1, 1, 5, 1, 1, 1, 5, 1, 1, 5, 1 };
static s32 sTabC[67] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 7, 9, 7, 7, 10, 7, 7, 11, 7, 7, 12, 7, 7, 13, 7, 14, 7, 15, 7, 16, 17, 16, 7, 16, 18, 19, 18, 7, 18, 7, 7, 20, 7, 20, 20, 7, 20, 21, 7, 21, 22, 7, 22, 23, 7, 23, 24, 7, 24, 25, 7, 25, 7, 26, 7, 7, 27, 7 };
void *lbl_802D3988[20] = { (void *)0x0, (void *)0x0, (void *)&fn_800AC1B4, (void *)&fn_80249AC4, (void *)&fn_800AC118, (void *)&fn_80242210, (void *)&fn_800AC0D4, (void *)&fn_8023D198, (void *)&fn_800AC380, (void *)&fn_800AB844, (void *)&fn_80241D80, (void *)&fn_8003F140, (void *)&fn_8003F18C, (void *)&fn_800ABFF4, (void *)&fn_800ABEDC, (void *)&fn_802416D4, (void *)&fn_8003F1DC, (void *)&fn_80240054, (void *)&fn_800AC3D0, (void *)&fn_800ABF68 };

void fn_800AB844(P *p, s32 n) {
    V3 c;
    V3 r;
    V3 e;
    V3 d;
    V3 b;
    V3 a;
    f32 f;
    s32 *q;
    s32 idx;
    s32 t;
    s32 i;

    idx = sTabA[n];
    t = p->t60;
    for (q = sTabB + idx; t > 0; q++) {
        if (*q > t) break;
        t -= sTabB[idx++];
    }
    switch (sTabC[idx]) {
    case 0:
        fn_80241628(p, 0, 0);
        p->f118 = lbl_8035B308->f48;
        break;
    case 1:
        p->fe0->getPos(&a, 0, &b, 0, 0);
        p->f118->getPos(&c, 0, 0, 0, 0);
        d.x = a.x - c.x;
        d.y = a.y - c.y;
        d.z = a.z - c.z;
        fn_80101820(&d);
        e.x = d.y * b.z - d.z * b.y;
        e.y = d.z * b.x - d.x * b.z;
        e.z = d.x * b.y - d.y * b.x;
        { s32 v = rand() % 5000u; f32 k = lbl_803624FC * (f32)v; k = lbl_80362500 + k; r.x = k; }
        { s32 v = rand() % 5000u; f32 k = lbl_803624FC * (f32)v; k = lbl_80362500 + k; r.y = k; }
        { s32 v = rand() % 5000u; f32 k = lbl_803624FC * (f32)v; k = lbl_80362500 + k; r.z = k; }
        p->fe0->setPos(0, &d, &b, &e, &r);
        fn_802494A4(p, 2);
        break;
    case 2:
        if (p->f134) {
            fn_802494A4(p, 3);
            break;
        }
        fn_8023F5E8(p, p->f118);
        fn_80241628(p, 2, 0);
        fn_80241588(p, 1, 0, lbl_80362504);
        fn_80242174(p, lbl_80362508);
        break;
    case 3:
        p->f130 = 1;
        fn_80241628(p, 2, 0);
        fn_80241588(p, 1, 0, lbl_80362504);
        fn_80242174(p, lbl_80362508);
        break;
    case 4:
        fn_80241628(p, 0, 0);
        f = -*p->f11c;
        p->f118->play(lbl_8036250C, 0, 0, &f, 0);
        fn_802494A4(p, 5);
        break;
    case 5:
        fn_8023F9C8(p, 0);
        fn_8023F9C8(p, 1);
        fn_8024125C(p, 0);
        fn_802491DC(p, 2);
        break;
    case 6:
        fn_80241628(p, 3, 0);
        fn_80241588(p, 0, 0, lbl_80362504);
        fn_80236AC0(p->fe0);
        for (i = 0; i < p->n5c; i++) {
            fn_8024909C(p, i);
        }
        break;
    case 7:
        return;
    case 8:
        p->f130 = 0;
        break;
    case 9:
        fn_80241628(p, 0, 0);
        fn_802402E0(p);
        break;
    case 10:
        fn_802494A4(p, 4);
        break;
    case 11:
        fn_802405B8(p);
        break;
    case 12:
        fn_802494A4(p, 5);
        break;
    case 13:
        if (p->f128) {
            p->f128->play(lbl_80362514, p->fe0, 0, p->f12c, 0);
        }
        fn_802402E0(p);
        break;
    case 14:
        p->f128 = (VO *)p->fe4;
        p->f12c = p->fec;
        fn_802494A4(p, 1);
        break;
    case 15:
        fn_802494A4(p, 1);
        break;
    case 16:
        p->f134 = 0;
        break;
    case 17:
        p->f134 = 0;
        fn_802494A4(p, 2);
        break;
    case 18:
        p->f134 = 1;
        break;
    case 19:
        p->f134 = 1;
        fn_802494A4(p, 3);
        break;
    case 20:
        fn_802494A4(p, 6);
        fn_802402E0(p);
        break;
    case 21:
        fn_802494A4(p, 6);
        fn_80240274(p, 0);
        fn_80240948(p, lbl_8036251C, 0);
        break;
    case 22:
        fn_802494A4(p, 6);
        fn_80240274(p, 0);
        fn_80240948(p, lbl_80362524, 0);
        break;
    case 23:
        fn_802494A4(p, 6);
        fn_80240274(p, 0);
        fn_80240948(p, lbl_8036252C, 0);
        break;
    case 24:
        fn_802494A4(p, 6);
        fn_80240274(p, 0);
        fn_80240948(p, lbl_80362534, 0);
        break;
    case 25:
        if (p->ff0) {
            fn_802413D8(lbl_80362504, p, p->ff0, 0, 1, p->fec);
        }
        break;
    case 26:
        fn_80236B14(p->fe0);
        for (i = 0; i < p->n5c; i++) {
            fn_80249058(p, i);
        }
        fn_8023F864(p, 0);
        fn_8023F864(p, 1);
        break;
    case 27:
        fn_80236AC0(p->fe0);
        for (i = 0; i < p->n5c; i++) {
            fn_8024909C(p, i);
        }
        break;
    case 28:
        break;
    }
}

}
