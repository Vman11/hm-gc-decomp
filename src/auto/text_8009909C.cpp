// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
// Owns the .data of the former jt_802CD6C8 unit (lbl_802CD6C8 incl. the state tables, vtable lbl_802CDD64).
#include "common.h"

struct Card { u8 pad_[0x6b8]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void load(void *); };
struct MC { u8 pad_[0x60]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual Card *card(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual int chk(void *); virtual int fin(void *); virtual int stat(void *); };
struct Mgr { u8 pad_[0xc0]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void err(char *); };
struct Game { u8 pad_[0x2f0]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void msg(void *); };
struct Upd { virtual void s0(); virtual void upd(); };

extern "C" {
struct Slot { u8 pad[30]; };
struct Slots { u8 pad[0x1c]; struct { s8 used; u8 pad[29]; } s[6]; };
struct E52 { u8 d[52]; };
struct S5E4 { u8 pad[104]; int idx; u8 pad108[4]; E52 *arr; };
struct Clk { u8 pad[0x14]; f32 dt; };
struct SND { u8 pad[0x2b8]; int x2b8; };
struct R3708 { u32 x0; u32 x4; };
struct A1DC { u8 pad[0x3410]; u8 x3410[0x3708 - 0x3410]; struct R3708 *x3708; };
struct M1 { u8 pad[4]; Upd **f4; };
struct Tbl { u8 pad[0x434]; s32 ix[26]; s32 len[64]; s32 st[29]; };
struct O {
    u8 pad0[0x60]; s32 x60; s32 x64; u8 pad68[0x84 - 0x68]; Slots *x84; u8 pad88[0x9c - 0x88]; u32 x9c;
    u8 padA0[0xb0 - 0xa0]; u32 xb0; u32 xb4; u32 xb8; u8 padBC[0xc8 - 0xbc]; u32 xc8; u8 padCC[0xd0 - 0xcc]; u32 xd0;
    u8 padD4[0xe0 - 0xd4]; u32 xe0; u8 padE4[4]; s32 xe8; u8 padEC[0xf4 - 0xec]; MC *xf4; u8 xf8[0x13c - 0xf8]; u8 x13c[0x2b8 - 0x13c];
    s32 x2b8; s32 x2bc; s32 x2c0; u8 pad2c4[0x2d8 - 0x2c4]; s32 x2d8; s32 x2dc; u8 pad2e0[0x300 - 0x2e0]; u8 x300[8]; s32 x308;
};

extern SND *lbl_8035A0A4;
extern A1DC *lbl_8035A1DC;
extern Clk *lbl_8035B488;
extern S5E4 *lbl_8035B5E4;
extern Game *lbl_8035B65C;
extern Mgr *lbl_8035B684;
extern M1 *lbl_8035B690;
extern volatile f32 lbl_8035B018;
extern f32 lbl_80361574;
extern f32 lbl_80361578;
extern char lbl_8029A24C[];
extern char lbl_8029A258[];
extern char lbl_803614F0[8], lbl_80361564[8], lbl_8036157C[8], lbl_80361584[8], lbl_8036158C[8], lbl_80361594[8], lbl_8036159C[8];
void fn_8003C89C(Slots *, int);
void fn_8003E66C(SND *);
void fn_8003E77C(SND *, u32);
void fn_80038058(void *);
void fn_800E8F6C(char *, const char *, ...);
void fn_800FA69C(u32, void *);
void fn_8009A3D8(O *);
void fn_8009A8BC(O *);
void fn_8009B30C(O *);
void fn_8009BAD0(O *);
void fn_801C2368(R3708 *, u32, int);
void fn_80214A74(void *);
void fn_802148B0(void *, char *);
void fn_8023EA4C(Clk *);
void fn_802494A4(O *, int);
void fn_802516A4(S5E4 *, int);
void fn_80253250(E52 *);
void fn_80253E40(Game *);
void fn_80254C90(Game *);
void fn_80272ED0(O *);
void fn_80272F0C(O *);
void fn_80272F28(O *, char *, char *);

static inline void Wait(void) {
    f32 t = lbl_80361574;
    while (t < lbl_80361578) {
        t += lbl_8035B488->dt;
        fn_8023EA4C(lbl_8035B488);
    }
}

static inline void Spin(O *o) {
    if (!o->xe8) fn_80253250(lbl_8035B5E4->arr + lbl_8035B5E4->idx);
    while (!o->xe8) {
        lbl_8035B018 = lbl_80361574;
        fn_8003E66C(*(SND *volatile *)&lbl_8035A0A4);
        (*lbl_8035B690->f4)->upd();
        fn_80038058(lbl_8035A1DC->x3410);
        fn_8023EA4C(lbl_8035B488);
        fn_802516A4(lbl_8035B5E4, 1);
        fn_80253E40(lbl_8035B65C);
    }
}

extern char lbl_8029A1C8[], lbl_8029A1D4[], lbl_8029A1E0[], lbl_8029A1EC[], lbl_8029A1F8[], lbl_8029A204[], lbl_8029A210[], lbl_8029A21C[], lbl_8029A228[], lbl_8029A234[], lbl_8029A240[], lbl_803614E8[], lbl_803614F0[], lbl_803614F8[], lbl_80361500[], lbl_80361508[], lbl_80361510[], lbl_80361518[], lbl_80361520[], lbl_80361528[], lbl_8036152C[], lbl_80361534[], lbl_8036153C[], lbl_80361544[], lbl_8036154C[], lbl_80361554[], lbl_8036155C[], lbl_80361564[], lbl_8036156C[];
void fn_800302CC(void);
void fn_80030318(void);
void fn_8009909C(O *, int);
void fn_80099BF8(void);
void fn_80099D18(void);
void fn_8009C018(void);
void fn_8009C260(void);
void fn_8009C288(void);
void fn_8009C3AC(void);
void fn_8009C3CC(void);
void fn_8009C4EC(void);
void fn_8023D198(void);
void fn_80249968(void);
void fn_80272F84(void);
void *lbl_802CD6C8[269] = {
    (void *)0x00000000, (void *)0x000000FA, (void *)0x000001F4, (void *)0x000002EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449,
    (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52,
    (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F,
    (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C,
    (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x00000000, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944,
    (void *)0x00000000, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952,
    (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454,
    (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C,
    (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x00000000, (void *)0x00000028, (void *)0x00000000,
    (void *)0x00000000, (void *)0x00000028, (void *)0x00000000, (void *)0x00000000, (void *)0x00000028, (void *)0x00000000, (void *)0x00000000, (void *)0x3F800000,
    (void *)0x00000000, (void *)0x00000000, (void *)0x00000000, (void *)0x00000000, (void *)0x00000000, (void *)0x40000000, (void *)0x00000000, (void *)0x3F800000,
    (void *)0x3F800000, (void *)0x00000000, (void *)0xBF800000, (void *)0x3F800000, (void *)0x00000000, (void *)0x00000000, (void *)0x3F800000, (void *)0x3F800000,
    (void *)0x00000000, (void *)0x3F800000, (void *)0xBF800000, (void *)0x00000000, (void *)0x00000006, (void *)0x00000009, (void *)0x0000000C, (void *)0x0000000F,
    (void *)0x00000012, (void *)0x00000015, (void *)0x00000018, (void *)0x0000001B, (void *)0x00000000, (void *)0x00000006, (void *)0x00000009, (void *)0x0000000C,
    (void *)0x0000000F, (void *)0x00000012, (void *)0x00000015, (void *)0x00000018, (void *)0x0000001B, (void *)0x00000000, (void *)0x00000006, (void *)0x00000040,
    (void *)0x00000043, (void *)0x00000046, (void *)0x00000049, (void *)0x0000004C, (void *)0x0000004F, (void *)0x00000052, (void *)0x00000055, (void *)0x0000001E,
    (void *)0x00000021, (void *)0x00000024, (void *)0x00000027, (void *)0x0000002A, (void *)0x0000002D, (void *)0x00000030, (void *)0x00000033, (void *)&lbl_803614E8,
    (void *)&lbl_8029A1C8, (void *)&lbl_803614F0, (void *)&lbl_803614F8, (void *)&lbl_80361500, (void *)&lbl_80361508, (void *)&lbl_80361510, (void *)&lbl_80361518, (void *)&lbl_8029A1D4,
    (void *)&lbl_8029A1E0, (void *)&lbl_8029A1EC, (void *)&lbl_8029A1F8, (void *)&lbl_8029A204, (void *)&lbl_8029A210, (void *)&lbl_80361520, (void *)&lbl_80361528, (void *)&lbl_8036152C,
    (void *)&lbl_80361534, (void *)&lbl_8036153C, (void *)&lbl_80361544, (void *)&lbl_8036154C, (void *)&lbl_80361554, (void *)&lbl_803614F0, (void *)&lbl_8036155C, (void *)&lbl_80361564,
    (void *)&lbl_8029A21C, (void *)&lbl_8029A228, (void *)&lbl_8029A234, (void *)&lbl_8036156C, (void *)&lbl_8029A240, (void *)&lbl_80361500, (void *)0x00000000, (void *)0x00000001,
    (void *)&lbl_80361508, (void *)0x00000001, (void *)0x00000001, (void *)&lbl_80361510, (void *)0x00000002, (void *)0x00000001, (void *)&lbl_80361518, (void *)0x00000003,
    (void *)0x00000001, (void *)&lbl_8029A1D4, (void *)0x00000004, (void *)0x00000001, (void *)&lbl_8029A1E0, (void *)0x00000005, (void *)0x00000001, (void *)&lbl_8029A1EC,
    (void *)0x00000006, (void *)0x00000001, (void *)&lbl_8029A1F8, (void *)0x00000007, (void *)0x00000001, (void *)&lbl_8029A204, (void *)0x00000008, (void *)0x00000001,
    (void *)&lbl_8029A210, (void *)0x00000009, (void *)0x00000001, (void *)&lbl_80361520, (void *)0x0000000A, (void *)0x00000001, (void *)&lbl_80361528, (void *)0x0000000B,
    (void *)0x00000001, (void *)&lbl_8036152C, (void *)0x0000000C, (void *)0x00000001, (void *)&lbl_80361534, (void *)0x0000000D, (void *)0x00000001, (void *)&lbl_8036153C,
    (void *)0x0000000E, (void *)0x00000001, (void *)&lbl_80361544, (void *)0x0000000F, (void *)0x00000001, (void *)&lbl_8036154C, (void *)0x00000010, (void *)0x00000001,
    (void *)&lbl_80361554, (void *)0x00000011, (void *)0x00000001, (void *)&lbl_803614F0, (void *)0x00000012, (void *)0x00000001, (void *)&lbl_8036155C, (void *)0x00000013,
    (void *)0x00000001, (void *)&lbl_80361564, (void *)0x00000014, (void *)0x00000001, (void *)&lbl_8029A21C, (void *)0x00000015, (void *)0x00000001, (void *)&lbl_8029A228,
    (void *)0x00000016, (void *)0x00000001, (void *)&lbl_8029A234, (void *)0x00000017, (void *)0x00000001, (void *)&lbl_8036156C, (void *)0x00000018, (void *)0x00000001,
    (void *)&lbl_8029A240, (void *)0x00000019, (void *)0x00000001, (void *)0x00000000, (void *)0x00000001, (void *)0x00000002, (void *)0x00000003, (void *)0x00000004,
    (void *)0x00000005, (void *)0x00000006, (void *)0x00000007, (void *)0x00000008, (void *)0x00000009, (void *)0x0000000A, (void *)0x0000000B, (void *)0x0000000C,
    (void *)0x0000000D, (void *)0x0000000E, (void *)0x0000000F, (void *)0x00000010, (void *)0x00000011, (void *)0x00000012, (void *)0x00000013, (void *)0x00000014,
    (void *)0x00000015, (void *)0x00000016, (void *)0x00000017, (void *)0x00000018, (void *)0x00000019
};
static s32 sIx[26] = {
    0, 3, 4, 6, 8, 10, 12, 14,
    16, 18, 20, 22, 24, 27, 30, 33,
    37, 41, 45, 48, 51, 53, 55, 57,
    59, 61
};
static s32 sLen[64] = {
    2, 1, 1, 4, 2, 2, 1, 3,
    1, 3, 1, 3, 1, 3, 1, 3,
    1, 3, 1, 3, 2, 2, 2, 2,
    2, 1, 1, 2, 1, 1, 2, 1,
    1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 2, 1,
    2, 1, 1, 1, 3, 1, 3, 1,
    3, 3, 1, 1, 3, 2, 1, 1
};
static s32 sSt[64] = {
    0, 1, 0, 0, 2, 0, 3, 0,
    4, 0, 5, 0, 6, 0, 7, 0,
    8, 0, 9, 0, 10, 0, 11, 0,
    0, 12, 0, 0, 13, 0, 0, 14,
    0, 15, 0, 15, 16, 11, 0, 12,
    17, 18, 0, 19, 0, 20, 0, 20,
    0, 21, 0, 22, 0, 23, 0, 24,
    0, 0, 25, 26, 0, 0, 27, 0
};
void *lbl_802CDD64[16] = {
    (void *)0x00000000, (void *)0x00000000, (void *)&fn_8009C3CC, (void *)&fn_8009C260, (void *)&fn_8009C3AC, (void *)&fn_80272F84, (void *)&fn_8009C288, (void *)&fn_8023D198,
    (void *)&fn_8009C4EC, (void *)&fn_8009909C, (void *)&fn_80249968, (void *)&fn_800302CC, (void *)&fn_80030318, (void *)&fn_80099BF8, (void *)&fn_8009C018, (void *)&fn_80099D18
};

#define SLOT(n) \
    fn_8003C89C(o->x84, n); \
    if (!o->x84->s[n - 1].used) { \
        fn_80272F28(o, lbl_80361564, lbl_80361584); \
    } else { \
        char name[32]; \
        fn_800E8F6C(name, lbl_8029A258); \
        name[7] = '0' + n; \
        fn_80214A74(o->xf8); \
        fn_802148B0(o->xf8, name); \
        fn_80272F28(o, lbl_8036158C, lbl_80361594); \
    }

void fn_8009909C(O *o, int st) {
    s32 *q;
    s32 idx = sIx[st];
    s32 t = o->x60;
    for (q = sLen + idx; t > 0; q++) {
        if (*q > t) break;
        t -= sLen[idx++];
    }
    switch (sSt[idx]) {
    case 0:
        return;
    case 1: {
        u32 r = lbl_8035A1DC->x3708->x4;
        fn_8009B30C(o);
        Wait();
        Spin(o);
        Wait();
        fn_802494A4(o, o->x64);
        fn_801C2368(lbl_8035A1DC->x3708, r, 1);
        break;
    }
    case 2:
        fn_80254C90(lbl_8035B65C);
        break;
    case 3:
        lbl_8035A0A4->x2b8 = 1;
        o->x2dc = 1;
        fn_8003E77C(lbl_8035A0A4, o->xd0);
        fn_8003E66C(lbl_8035A0A4);
        fn_802494A4(o, 2);
        fn_8009BAD0(o);
        fn_80272F28(o, lbl_8036157C, lbl_8029A24C);
        break;
    case 4: { SLOT(1) break; }
    case 5: { SLOT(2) break; }
    case 6: { SLOT(3) break; }
    case 7: { SLOT(4) break; }
    case 8: { SLOT(5) break; }
    case 9: { SLOT(6) break; }
    case 10:
        fn_80272F0C(o);
        break;
    case 11:
        fn_80272ED0(o);
        break;
    case 12:
        fn_8009B30C(o);
        break;
    case 13:
        fn_8003E77C(lbl_8035A0A4, o->xe0);
        o->x2b8 = 5;
        break;
    case 14:
        fn_8003E77C(lbl_8035A0A4, o->xb8);
        o->xe8 = 0;
        o->x2b8 = 4;
        break;
    case 15:
        switch (o->x2b8) {
        case 1: {
            u32 r = lbl_8035A1DC->x3708->x4;
            u8 tmp[4];
            Card *c;
            fn_8003E77C(lbl_8035A0A4, o->xd0);
            fn_8003E66C(lbl_8035A0A4);
            if (o->xf4->chk(tmp)) {
                if (o->x2c0) lbl_8035B684->err(lbl_803614F0);
                else fn_8009B30C(o);
                break;
            }
            c = o->xf4->card();
            if (!c) {
                if (o->x2c0) lbl_8035B684->err(lbl_803614F0);
                else fn_8009B30C(o);
                break;
            }
            c->load(o->xf8);
            o->xf4->fin(tmp);
            fn_801C2368(lbl_8035A1DC->x3708, r, 1);
            if (o->x2c0) {
                lbl_8035B684->err(lbl_803614F0);
                fn_8009BAD0(o);
                fn_80272F28(o, lbl_8036157C, lbl_8029A24C);
                o->x2c0 = 0;
            } else {
                fn_8009B30C(o);
            }

            break;
        }
        case 2:
            o->x2bc = 1;
            break;
        case 3:
            o->x2c0 = 1;
            {
            u32 r = lbl_8035A1DC->x3708->x4;
            u8 tmp[4];
            Card *c;
            fn_8003E77C(lbl_8035A0A4, o->xd0);
            fn_8003E66C(lbl_8035A0A4);
            if (o->xf4->chk(tmp)) {
                if (o->x2c0) lbl_8035B684->err(lbl_803614F0);
                else fn_8009B30C(o);
                break;
            }
            c = o->xf4->card();
            if (!c) {
                if (o->x2c0) lbl_8035B684->err(lbl_803614F0);
                else fn_8009B30C(o);
                break;
            }
            c->load(o->xf8);
            o->xf4->fin(tmp);
            fn_801C2368(lbl_8035A1DC->x3708, r, 1);
            if (o->x2c0) {
                lbl_8035B684->err(lbl_803614F0);
                fn_8009BAD0(o);
                fn_80272F28(o, lbl_8036157C, lbl_8029A24C);
                o->x2c0 = 0;
            } else {
                fn_8009B30C(o);
            }

            }
            break;
        case 4: {
            u32 r = lbl_8035A1DC->x3708->x4;
            u8 tmp[4];
            fn_8003E77C(lbl_8035A0A4, o->xd0);
            fn_8003E66C(lbl_8035A0A4);
            if (o->xf4->stat(tmp) == 16) {
                fn_8003E77C(lbl_8035A0A4, o->x9c);
                o->xe8 = 0;
            } else {
                o->x308 = 1;
                fn_801C2368(lbl_8035A1DC->x3708, r, 1);
            }
            fn_8009B30C(o);
            break;
        }
        case 5:
            lbl_8035A0A4->x2b8 = 0;
            o->xe8 = 1;
            break;
        }
        break;
    case 16:
        o->x2d8 = 1;
        o->xe8 = 1;
        break;
    case 17:
        o->xe8 = 1;
        o->x2d8 = 0;
        break;
    case 18:
        fn_80272F0C(o);
        lbl_8035B018 = lbl_80361574;
        fn_800FA69C(*(u32 *)(*(u8 **)(*(u8 **)(*(u8 **)(o->xb0 + 0x70) + 4) + 0x54) + 0x24), o->x13c);
        fn_8003E77C(lbl_8035A0A4, o->xb0);
        o->x2b8 = 3;
        break;
    case 19:
        lbl_8035B018 = lbl_80361574;
        fn_800FA69C(*(u32 *)(*(u8 **)(*(u8 **)(*(u8 **)(o->xb0 + 0x70) + 4) + 0x54) + 0x24), o->x13c);
        fn_8003E77C(lbl_8035A0A4, o->xb0);
        o->xe8 = 0;
        o->x2b8 = 1;
        break;
    case 20:
        fn_802494A4(o, 2);
        break;
    case 21:
        fn_8003E77C(lbl_8035A0A4, o->xb4);
        o->xe8 = 0;
        o->x2b8 = 2;
        break;
    case 22:
        lbl_8035B65C->msg(lbl_8036159C);
        o->x2dc = 0;
        break;
    case 23:
        fn_8009A3D8(o);
        break;
    case 24:
        fn_802494A4(o, 3);
        do {
            fn_8009A8BC(o);
        } while (o->x308);
        fn_802494A4(o, 0);
        break;
    case 25: {
        u32 r = lbl_8035A1DC->x3708->x4;
        fn_8003E77C(lbl_8035A0A4, o->xc8);
        fn_8003E66C(lbl_8035A0A4);
        o->xe8 = 0;
        Wait();
        Spin(o);
        Wait();
        fn_8003E77C(lbl_8035A0A4, r);
        fn_8003E66C(lbl_8035A0A4);
        break;
    }
    case 26:
        lbl_8035B65C->msg(o->x300);
        break;
    case 27:
        fn_8009BAD0(o);
        fn_80272F28(o, lbl_8036157C, lbl_8029A24C);
        o->xe8 = 1;
    case 28:
        break;
    }
}

}
