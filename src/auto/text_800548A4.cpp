#include "common.h"
extern "C" {
struct VO { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void getPos(void *p, void *a, int b, int c, int d); virtual void setPos(void *a, void *b, void *c, void *d, int e); virtual void w15(); virtual void w16(); virtual void w17(); virtual void w18(); virtual void w19(); virtual void w20(); virtual void w21(); virtual void w22(); virtual void showB(); virtual void hideB(); virtual void w25(); virtual void w26(); virtual void w27(); virtual void w28(); virtual void w29(); virtual void w30(); virtual void w31(); virtual void w32(); virtual void send(void *msg, u32 to, int a, void *d, int b); };
struct VS0 { virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void reset(); };
typedef struct { f32 x, y, z; } V3;
extern u32 lbl_8035B308;
extern void *lbl_8035B65C;
extern u8 lbl_8035E060[4];
extern u32 lbl_8035E194;
extern f32 lbl_8035E198, lbl_8035E19C, lbl_8035E1A0, lbl_8035E1A4;
extern char lbl_802967F0[], lbl_802968B0[];
extern char lbl_8035E144[5], lbl_8035E14C[7], lbl_8035E1A8[7], lbl_8035E1B0[8];
void __ct__9C80253F24Fiiii(void *, void *, u32, s32, u32);
int fn_800F6CD0(void *, void *);
void fn_800F6E88(void *, void *);
void fn_800F70A8(void *);
int fn_800F6C28(void *);
void fn_80055EFC(int, int);
void fn_8005748C(int, int);
void fn_800572DC(int, int);
void fn_80056D3C(int, int, int, int, int);
void fn_80196688(int);
int fn_8022D694(int);
void fn_80107F3C(int, V3 *);
void fn_80241DD0(int, char *, int, int, int, int);
void fn_8022B618(int);
void fn_8022A7A8(int);
void fn_8022BBF4(int);
void fn_8022AD0C(int);
void fn_80240DBC(int, f32);
void fn_80240948(int, char *, int);
void *fn_80242144(int, int);
void fn_80242BC0(void *, void *, u32, int, u32, int);
void fn_80241588(int, int, int, f32);
int fn_80241628(int, int, int);
void fn_80249008(int, int);
int fn_802494A4(int, int);

// .data of the former jt_802BB050 unit: lbl_802BB050, the state tables tA/tB/tC, vtable lbl_802BB9CC.
void fn_8003F140(void);
void fn_8003F18C(void);
void fn_8003F1DC(void);
void fn_800548A4(int, int);
void fn_80055C68(void);
void fn_80055CFC(void);
void fn_80055D90(void);
void fn_800567F0(void);
void fn_80057908(void);
void fn_80057A70(void);
void fn_80057DDC(void);
void fn_800582F8(void);
void fn_80058404(void);
void fn_8005840C(void);
void fn_8023D198(void);
void fn_80240054(void);
void fn_80241D80(void);
void fn_80249AC4(void);
extern char lbl_802967B4[];
extern char lbl_802967C0[];
extern char lbl_802967CC[];
extern char lbl_802967D8[];
extern char lbl_802967E4[];
extern char lbl_802967FC[];
extern char lbl_80296808[];
extern char lbl_80296814[];
extern char lbl_80296820[];
extern char lbl_8029682C[];
extern char lbl_80296838[];
extern char lbl_80296844[];
extern char lbl_80296850[];
extern char lbl_8029685C[];
extern char lbl_80296868[];
extern char lbl_8035E058[];
extern char lbl_8035E064[];
extern char lbl_8035E06C[];
extern char lbl_8035E074[];
extern char lbl_8035E07C[];
extern char lbl_8035E084[];
extern char lbl_8035E08C[];
extern char lbl_8035E094[];
extern char lbl_8035E09C[];
extern char lbl_8035E0A4[];
extern char lbl_8035E0AC[];
extern char lbl_8035E0B4[];
extern char lbl_8035E0BC[];
extern char lbl_8035E0C4[];
extern char lbl_8035E0CC[];
extern char lbl_8035E0D4[];
extern char lbl_8035E0DC[];
extern char lbl_8035E0E4[];
extern char lbl_8035E0EC[];
extern char lbl_8035E0F4[];
extern char lbl_8035E0FC[];
extern char lbl_8035E104[];
extern char lbl_8035E10C[];
extern char lbl_8035E114[];
extern char lbl_8035E11C[];
extern char lbl_8035E124[];
extern char lbl_8035E12C[];
extern char lbl_8035E134[];
extern char lbl_8035E13C[];
extern char lbl_8035E154[];
extern char lbl_8035E15C[];
extern char lbl_8035E164[];
extern char lbl_8035E16C[];
extern char lbl_8035E174[];
extern char lbl_8035E17C[];
extern char lbl_8035E184[];
extern char lbl_8035E18C[];
void *lbl_802BB050[350] = {
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
    (void *)0x00000021, (void *)0x00000024, (void *)0x00000027, (void *)0x0000002A, (void *)0x0000002D, (void *)0x00000030, (void *)0x00000033, (void *)&lbl_8035E058,
    (void *)&lbl_8035E060, (void *)&lbl_8035E064, (void *)&lbl_8035E06C, (void *)&lbl_8035E060, (void *)&lbl_8035E074, (void *)&lbl_8035E07C, (void *)&lbl_8035E060, (void *)&lbl_8035E084,
    (void *)&lbl_8035E08C, (void *)&lbl_8035E060, (void *)&lbl_8035E094, (void *)&lbl_8035E09C, (void *)&lbl_8035E09C, (void *)&lbl_8035E060, (void *)&lbl_8035E060, (void *)&lbl_8035E0A4,
    (void *)&lbl_8035E060, (void *)&lbl_8035E060, (void *)&lbl_8035E0AC, (void *)&lbl_8035E060, (void *)&lbl_8035E060, (void *)&lbl_8035E0B4, (void *)&lbl_8035E060, (void *)&lbl_8035E060,
    (void *)&lbl_8035E0BC, (void *)&lbl_8035E060, (void *)&lbl_8035E060, (void *)&lbl_8035E0C4, (void *)&lbl_8035E060, (void *)&lbl_8035E060, (void *)&lbl_8035E0CC, (void *)&lbl_8035E060,
    (void *)&lbl_8035E060, (void *)&lbl_8035E0D4, (void *)&lbl_8035E060, (void *)&lbl_8035E060, (void *)&lbl_8035E0DC, (void *)&lbl_8035E060, (void *)&lbl_8035E060, (void *)&lbl_8035E0E4,
    (void *)&lbl_8035E060, (void *)&lbl_8035E060, (void *)&lbl_8035E0EC, (void *)&lbl_8035E060, (void *)&lbl_8035E060, (void *)&lbl_802967B4, (void *)&lbl_8035E060, (void *)&lbl_8035E060,
    (void *)&lbl_802967C0, (void *)&lbl_8035E060, (void *)&lbl_8035E060, (void *)&lbl_802967CC, (void *)&lbl_8035E060, (void *)&lbl_8035E060, (void *)&lbl_8035E060, (void *)0x40A00000,
    (void *)0x00000000, (void *)0x00000000, (void *)&lbl_8035E0F4, (void *)0x40A00000, (void *)0x00000000, (void *)0x00000000, (void *)&lbl_802967D8, (void *)&lbl_8035E0FC,
    (void *)&lbl_8035E104, (void *)&lbl_8035E10C, (void *)&lbl_8035E114, (void *)&lbl_802967E4, (void *)&lbl_8035E11C, (void *)&lbl_8035E124, (void *)&lbl_802967F0, (void *)&lbl_802967FC,
    (void *)&lbl_8035E12C, (void *)&lbl_8035E134, (void *)&lbl_8035E13C, (void *)&lbl_80296808, (void *)&lbl_80296814, (void *)&lbl_8035E0F4, (void *)&lbl_8035E144, (void *)&lbl_8035E14C,
    (void *)&lbl_8035E154, (void *)&lbl_80296820, (void *)&lbl_8035E15C, (void *)&lbl_8029682C, (void *)&lbl_80296838, (void *)&lbl_8035E164, (void *)&lbl_80296844, (void *)&lbl_80296850,
    (void *)&lbl_8029685C, (void *)&lbl_8035E16C, (void *)&lbl_8035E174, (void *)&lbl_802967D8, (void *)&lbl_8035E058, (void *)&lbl_8035E07C, (void *)&lbl_8035E17C, (void *)&lbl_8035E184,
    (void *)&lbl_8035E18C, (void *)&lbl_80296868, (void *)&lbl_8035E124, (void *)0x00000000, (void *)0x00000001, (void *)&lbl_802967F0, (void *)0x00000001, (void *)0x00000001,
    (void *)&lbl_802967FC, (void *)0x00000002, (void *)0x00000001, (void *)&lbl_8035E12C, (void *)0x00000003, (void *)0x00000001, (void *)&lbl_8035E134, (void *)0x00000004,
    (void *)0x00000001, (void *)&lbl_8035E13C, (void *)0x00000005, (void *)0x00000001, (void *)&lbl_80296808, (void *)0x00000006, (void *)0x00000001, (void *)&lbl_80296814,
    (void *)0x00000007, (void *)0x00000001, (void *)&lbl_8035E0F4, (void *)0x00000008, (void *)0x00000001, (void *)&lbl_8035E144, (void *)0x00000009, (void *)0x00000001,
    (void *)&lbl_8035E14C, (void *)0x0000000A, (void *)0x00000001, (void *)&lbl_8035E154, (void *)0x0000000B, (void *)0x00000001, (void *)&lbl_80296820, (void *)0x0000000C,
    (void *)0x00000001, (void *)&lbl_8035E15C, (void *)0x0000000D, (void *)0x00000001, (void *)&lbl_8029682C, (void *)0x0000000E, (void *)0x00000001, (void *)&lbl_80296838,
    (void *)0x0000000F, (void *)0x00000001, (void *)&lbl_8035E164, (void *)0x00000010, (void *)0x00000001, (void *)&lbl_80296844, (void *)0x00000011, (void *)0x00000001,
    (void *)&lbl_80296850, (void *)0x00000012, (void *)0x00000001, (void *)&lbl_8029685C, (void *)0x00000013, (void *)0x00000001, (void *)&lbl_8035E16C, (void *)0x00000014,
    (void *)0x00000001, (void *)&lbl_8035E174, (void *)0x00000015, (void *)0x00000001, (void *)&lbl_802967D8, (void *)0x00000016, (void *)0x00000001, (void *)&lbl_8035E058,
    (void *)0x00000017, (void *)0x00000001, (void *)&lbl_8035E07C, (void *)0x00000018, (void *)0x00000001, (void *)&lbl_8035E17C, (void *)0x00000019, (void *)0x00000001,
    (void *)&lbl_8035E184, (void *)0x0000001A, (void *)0x00000001, (void *)&lbl_8035E18C, (void *)0x0000001B, (void *)0x00000001, (void *)&lbl_80296868, (void *)0x0000001C,
    (void *)0x00000001, (void *)0x00000000, (void *)0x00000001, (void *)0x00000002, (void *)0x00000003, (void *)0x00000004, (void *)0x00000005, (void *)0x00000006,
    (void *)0x00000007, (void *)0x00000008, (void *)0x00000009, (void *)0x0000000A, (void *)0x0000000B, (void *)0x0000000C, (void *)0x0000000D, (void *)0x0000000E,
    (void *)0x0000000F, (void *)0x00000010, (void *)0x00000011, (void *)0x00000012, (void *)0x00000013, (void *)0x00000014, (void *)0x00000015, (void *)0x00000016,
    (void *)0x00000017, (void *)0x00000018, (void *)0x00000019, (void *)0x0000001A, (void *)0x0000001B, (void *)0x0000001C
};
static s32 tA[29] = {
    0, 6, 11, 17, 23, 26, 31, 36,
    41, 44, 47, 50, 52, 54, 57, 60,
    63, 66, 71, 74, 77, 80, 83, 88,
    93, 98, 103, 109, 112
};
static s32 tB[114] = {
    1, 1, 1, 1, 1, 1, 2, 1,
    1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1,
    4, 1, 1, 1, 1, 1, 2, 1,
    1, 1, 1, 2, 1, 1, 1, 1,
    2, 3, 1, 2, 1, 4, 1, 1,
    4, 1, 5, 1, 5, 1, 1, 4,
    1, 1, 4, 1, 1, 4, 1, 1,
    4, 1, 1, 1, 1, 1, 2, 1,
    4, 1, 1, 4, 1, 1, 4, 1,
    1, 4, 1, 2, 1, 1, 1, 1,
    1, 1, 1, 1, 2, 1, 1, 1,
    1, 2, 1, 1, 1, 1, 2, 1,
    1, 1, 1, 1, 1, 1, 4, 1,
    5, 1
};
static s32 tC[114] = {
    0, 1, 2, 3, 4, 5, 6, 7,
    6, 8, 6, 6, 9, 10, 11, 12,
    6, 6, 13, 14, 15, 16, 6, 6,
    17, 6, 6, 18, 6, 19, 6, 6,
    20, 6, 21, 6, 6, 21, 6, 20,
    6, 6, 22, 6, 6, 23, 6, 6,
    24, 6, 25, 6, 26, 6, 6, 27,
    6, 6, 28, 6, 6, 29, 6, 6,
    30, 6, 6, 31, 6, 31, 6, 6,
    32, 6, 6, 33, 6, 6, 34, 6,
    6, 35, 6, 6, 36, 6, 36, 6,
    6, 37, 6, 38, 6, 6, 38, 6,
    37, 6, 6, 39, 6, 39, 6, 6,
    40, 41, 42, 41, 43, 6, 44, 6,
    6, 45
};
void *lbl_802BB9CC[20] = {
    (void *)0x00000000, (void *)0x00000000, (void *)&fn_800582F8, (void *)&fn_80249AC4, (void *)&fn_80057DDC, (void *)&fn_80055D90, (void *)&fn_80057A70, (void *)&fn_8023D198,
    (void *)&fn_80058404, (void *)&fn_800548A4, (void *)&fn_80241D80, (void *)&fn_8003F140, (void *)&fn_8003F18C, (void *)&fn_800567F0, (void *)&fn_80055C68, (void *)&fn_80057908,
    (void *)&fn_8003F1DC, (void *)&fn_80240054, (void *)&fn_8005840C, (void *)&fn_80055CFC
};

#define P(i) (*(int *)(p + (i) * 4))
#define PP(i) (**(int **)(p + (i) * 4))
#define FL (**(u32 **)(p + 0x91 * 4))
#define E0 (*(VO **)(p + 0xe0))

static inline void animOver(int p, int k) {
    fn_8005748C(p, k);
    if (*(int *)(*(int *)(*(int *)(lbl_8035B308 + 0x48) + 600) + 0x300) != 0) fn_80241DD0(p, lbl_802967F0, 0, 0, 0, 0);
}
static inline void show(int p) {
    if (PP(0x6c) != 0) {
        if (P(0x18) != 4 && PP(0x6c) != 0) {
            int o = *(int *)((int)E0 + 0x9c);
            *(f32 *)(o + 0x9c) = lbl_8035E198;
            *(u32 *)(o + 0x98) &= ~6;
            *(f32 *)(o + 0xac) = lbl_8035E198;
            fn_80196688(o);
            *(u32 *)(o + 0x98) &= ~8;
        }
    } else if (PP(0x51) != 0) {
        E0->showB();
    }
    FL |= P(0x92);
}
static inline void tint(int p, V3 *c) {
    if (*(void **)(p + 0x8f * 4) != 0 && PP(0x67) != 0) {
        void *o;
        c->x = lbl_8035E1A0;
        c->y = lbl_8035E1A0;
        c->z = lbl_8035E1A0;
        o = *(void **)(*(int *)((int)E0 + 0x9c) + 0x78);
        if (o != 0) fn_80107F3C((int)o, c);
    }
}
static inline void act(int p) {
    int o; int a; int b;
    fn_80241628(p, 1, 0);
    a = PP(0x53);
    b = PP(0x54);
    if (PP(0x6c) != 0) {
        if (P(0x18) != 4 && PP(0x6c) != 0) {
            o = *(int *)((int)E0 + 0x9c);
            *(f32 *)(o + 0x9c) = lbl_8035E198;
            *(u32 *)(o + 0x98) &= ~6;
            *(f32 *)(o + 0xac) = lbl_8035E198;
            fn_80196688(o);
            *(u32 *)(o + 0x98) &= ~8;
        }
    } else if (PP(0x51) != 0) {
        E0->showB();
    }
    FL |= P(0x92);
    if (a != 0) fn_8022BBF4(*(int *)(p + 0xe0));
    if (b != 0) fn_8022AD0C(*(int *)(p + 0xe0));
}
static inline void bcast(int p, char *m) {
    if (PP(0x4b) != 0) {
        u32 i;
        for (i = 0; i < (u32)P(0x46); i++) fn_80242BC0(fn_80242144(p, i + 1), m, P(0x38), 0, P(0x60), 0);
    }
}
static inline void rst(int p, int k) {
    int v = P(0x8a);
    ((VS0 *)p)->reset();
    P(0x8c) = 1;
    P(0x8a) = v;
    fn_80055EFC(p, k);
}
static inline void say(int p, int idx, int flag, int *done) {
    if (fn_800F6CD0((void *)P(idx), lbl_8035E060) == 0 && (PP(flag) == 0 || (PP(flag) != 0 && *done == 0))) {
        *done = 1;
        __ct__9C80253F24Fiiii(lbl_8035B65C, (void *)P(idx), 0, 0, 0);
    }
}
static inline void resetAnim(int p) {
    int o = fn_8022D694(*(int *)(p + 0xe0));
    *(f32 *)(o + 8) = lbl_8035E198;
    if (*(void **)(o + 0x10) != 0) *(f32 *)(o + 0x24) = *(f32 *)(o + 8) / *(f32 *)(*(int *)(o + 0x10) + 4);
}
static inline void parse(int p, char *buf, int *ps, int *a, int *b) {
    int i;
    fn_800F6E88(buf, (void *)P(0x3b));
    fn_800F70A8(buf);
    if (fn_800F6C28(buf) == 0) *ps = 1;
    for (i = 0; i < 3 && i < fn_800F6C28(buf) && buf[i] != 0; i++) {
        switch (buf[i]) {
        case 'A': *ps = 1; *a = 1; *b = 1; break;
        case 'C': *a = 1; break;
        case 'D': *ps = 1; break;
        case 'L': *b = 1; break;
        }
    }
}
static inline void open(int p, char *buf, int k) {
    int s; int a; int b;
    s = PP(0x52) != 0;
    a = PP(0x53);
    b = PP(0x54);
    parse(p, buf, &s, &a, &b);
    if (s) show(p);
    if (a != 0) fn_8022BBF4(*(int *)(p + 0xe0));
    if (b != 0) fn_8022AD0C(*(int *)(p + 0xe0));
    fn_800572DC(p, k);
}
static inline void open0(int p, char *buf, int k) {
    int s; int a; int b;
    s = PP(0x52) != 0;
    a = PP(0x53);
    b = PP(0x54);
    parse(p, buf, &s, &a, &b);
    if (s) show(p);
    if (a != 0) fn_8022BBF4(*(int *)(p + 0xe0));
    if (b != 0) fn_8022AD0C(*(int *)(p + 0xe0));
    fn_800572DC(p, k);
}
static inline void close(int p, char *buf) {
    int s; int a; int b;
    s = PP(0x52) != 0;
    a = PP(0x53);
    b = PP(0x54);
    parse(p, buf, &s, &a, &b);
    if (s) {
        int x = PP(0x6c);
        if (x != 0) {
            if (x != 0) *(u32 *)(*(int *)((int)E0 + 0x9c) + 0x98) |= lbl_8035E194;
        } else if (PP(0x51) != 0) {
            E0->hideB();
        }
        FL &= ~P(0x92);
    }
    if (a != 0) fn_8022B618(*(int *)(p + 0xe0));
    if (b != 0) fn_8022A7A8(*(int *)(p + 0xe0));
}
#define KEYOK(p) ((fn_800F6CD0((void *)P(0x60), lbl_8035E060) != 0 && *(void **)(p + 0x3b * 4) == 0) || (*(void **)(p + 0x3b * 4) != 0 && fn_800F6CD0(*(void **)(p + 0x3b * 4), (void *)P(0x60)) != 0))

void fn_800548A4(int p, int st) {
    s32 *q;
    s32 idx;
    s32 t;
    V3 c30;
    V3 c3c;
    V3 c48;
    V3 c54;
    V3 c60;
    char b68[8];
    char b70[8];
    char b78[8];
    char b80[8];
    char b88[8];

    idx = tA[st];
    t = P(0x18);
    for (q = tB + idx; t > 0; q++) {
        if (*q > t) break;
        t -= tB[idx++];
    }
    switch (tC[idx]) {
    case 0:
        fn_80241628(p, 0, 0);
        fn_80055EFC(p, 0);
        break;
    case 1:
        if (P(0x8b) == 0) fn_8005748C(p, 0);
        fn_80241628(p, 0, 0);
        break;
    case 2:
        animOver(p, 1);
        break;
    case 3:
        if (P(0x8b) == 0) fn_8005748C(p, 2);
        break;
    case 4:
        animOver(p, 3);
        break;
    case 5:
        act(p);
        break;
    case 6:
        return;
    case 7:
        if (*(int *)(*(int *)(P(0x75) + 0xc) + 4) == 0 || (*(int *)(*(int *)(P(0x75) + 0xc) + 4) != 0 && P(0x8e) != 0)) {
            say(p, 99, 0x4e, (int *)(p + 0x80 * 4));
            fn_802494A4(p, 3);
        } else {
            fn_80241588(p, 1, 0, lbl_8035E19C);
        }
        break;
    case 8:
        if (*(int *)(*(int *)(P(0x75) + 0xc) + 0xc) == 0 || (*(int *)(*(int *)(P(0x75) + 0xc) + 0xc) != 0 && P(0x8e) != 0)) {
            say(p, 100, 0x4f, (int *)(p + 0x81 * 4));
            fn_802494A4(p, 1);
        } else {
            fn_80241588(p, 3, 0, lbl_8035E19C);
        }
        break;
    case 9:
        if (**(int **)(P(0x75) + 0xc) == 0) resetAnim(p);
        break;
    case 10:
        if (*(int *)(*(int *)(P(0x75) + 0xc) + 4) != 0 && P(0x8e) != 0) {
            say(p, 99, 0x4e, (int *)(p + 0x80 * 4));
            fn_802494A4(p, 3);
        }
        break;
    case 11:
        if (*(int *)(*(int *)(P(0x75) + 0xc) + 8) == 0) resetAnim(p);
        break;
    case 12:
        if (*(int *)(*(int *)(P(0x75) + 0xc) + 0xc) != 0 && P(0x8e) != 0) {
            say(p, 100, 0x4f, (int *)(p + 0x81 * 4));
            fn_802494A4(p, 1);
        }
        break;
    case 13: open0(p, b68, 0); break;
    case 14: open(p, b70, 1); break;
    case 15: open(p, b78, 2); break;
    case 16: open(p, b80, 3); break;
    case 17: {
        close(p, b88);
        tint(p, &c54);
        if (P(0x95) != 0) {
            P(0x95) = 0;
            fn_80240DBC(p, lbl_8035E1A4);
        }
        break;
    }
    case 18:
        if (PP(0x57) != 0) {
            P(0x89)++;
            fn_80056D3C(p, 0, 0, 0, 0);
        }
        break;
    case 19:
        if (PP(0x58) != 0) {
            P(0x89)++;
            fn_80056D3C(p, 0, 0, 0, 0);
        }
        break;
    case 20:
        P(0x89)++;
        fn_80056D3C(p, 0, 0, 0, 0);
        break;
    case 21:
        if (*(u32 *)(p + 0x89 * 4) != 0) P(0x89)--;
        break;
    case 22:
        P(0x82) = 1;
        break;
    case 23:
        if ((FL & P(0x94)) == 0 && KEYOK(p)) {
            FL |= P(0x94);
            bcast(p, lbl_8035E144);
            tint(p, &c60);
        }
        break;
    case 24:
        if ((FL & P(0x94)) != 0 && KEYOK(p)) {
            FL &= ~P(0x94);
            if (*(VO **)(p + 0x39 * 4) != 0) (*(VO **)(p + 0x39 * 4))->send(lbl_802968B0, 0, 0, 0, 0);
            if (PP(0x4c) != 0) fn_80056D3C(p, 0, 0, 0, 0);
            bcast(p, lbl_8035E14C);
        }
        break;
    case 25:
        P(0x83) = 1;
        break;
    case 26:
        P(0x83) = 0;
        break;
    case 27:
        P(0x7e) = 1;
        P(0x7f) = 1;
        break;
    case 28:
        P(0x7e) = 0;
        break;
    case 29:
        P(0x85)++;
        break;
    case 30:
        P(0x85)--;
        break;
    case 31: {
        u32 f = FL;
        int m = f & P(0x93);
        if ((m != 0 || PP(0x4d) == 0) && P(0x85) == 0 && (f & P(0x92)) != 0 && (f & P(0x94)) == 0 &&
            ((m != 0 && PP(0x57) != 0) || (m == 0 && PP(0x58) != 0)))
            (*(VO **)(p + 0x39 * 4))->send(lbl_8035E1A8, P(0x38), 0, (void *)P(0x3b), P(0x6d));
        break;
    }
    case 32:
        P(0x8a) = 0;
        tint(p, &c30);
        break;
    case 33:
        P(0x8a) = 1;
        break;
    case 34:
        rst(p, 0);
        break;
    case 35:
        rst(p, 1);
        break;
    case 36:
        P(0x8e) = 1;
        break;
    case 37:
        P(0x89) = 0;
        break;
    case 38:
        fn_80056D3C(p, 0, 0, 1, 0);
        break;
    case 39:
        fn_80056D3C(p, 0, 0, 0, 0);
        break;
    case 40:
        tint(p, &c3c);
        break;
    case 41:
        fn_80249008(p, 1);
        break;
    case 42:
        fn_80249008(p, 0);
        P(0x82) = 0;
        tint(p, &c48);
        break;
    case 43:
        fn_80241628(p, 0, 0);
        break;
    case 44:
        fn_802494A4(p, 5);
        fn_80240948(p, lbl_8035E1B0, 0);
        break;
    case 45:
        fn_802494A4(p, (FL & P(0x93)) ? 1 : 3);
    case 46:
        break;
    }
}
}
