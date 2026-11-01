// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern const char lbl_803601E8[4];
extern f32 lbl_80360318;
void fn_80241628(u8 *, int, int);
void fn_80241588(u8 *, s32, int, f32);
void fn_802494A4(u8 *, int);
void fn_800F6E88(char *, u32);
int fn_800F6CD0(u32, const char *);
void fn_802410CC(u8 *, u32, int);
void fn_80240B50(u8 *, u32, int);
u32 fn_80242144(u8 *, s32);
void fn_80242BC0(u32, u32, u32, int, u32, int);
#define S32(o) (*(s32 *)(p + (o)))
#define U32(o) (*(u32 *)(p + (o)))
void fn_8003F140();
void fn_8003F18C();
void fn_8003F1DC();
void fn_8003FB68();
void fn_8003FB6C();
void fn_8008C3B8(u8 *p, s32 n);
void fn_8008C6E4();
void fn_8008C804();
void fn_8008C900();
void fn_8008CA0C();
void fn_8008CA14();
void fn_8023D198();
void fn_8023FE08();
void fn_80240054();
void fn_802416D4();
void fn_80241D80();
void fn_80242210();
void fn_80249AC4();
extern char lbl_80299204[];
extern char lbl_80299210[];
extern char lbl_8029921C[];
extern char lbl_80299228[];
extern char lbl_80299234[];
extern char lbl_803601E0[];
extern const char lbl_803601E8[4];
extern char lbl_803601EC[];
extern char lbl_803601F4[];
extern char lbl_803601FC[];
extern char lbl_80360204[];
extern char lbl_8036020C[];
extern char lbl_80360214[];
extern char lbl_8036021C[];
extern char lbl_80360224[];
extern char lbl_8036022C[];
extern char lbl_80360234[];
extern char lbl_8036023C[];
extern char lbl_80360244[];
extern char lbl_8036024C[];
extern char lbl_80360254[];
extern char lbl_8036025C[];
extern char lbl_80360264[];
extern char lbl_8036026C[];
extern char lbl_80360274[];
extern char lbl_8036027C[];
extern char lbl_80360284[];
extern char lbl_8036028C[];
extern char lbl_80360294[];
extern char lbl_8036029C[];
extern char lbl_803602A4[];
extern char lbl_803602AC[];
extern char lbl_803602B4[];
extern char lbl_803602BC[];
extern char lbl_803602C4[];
extern char lbl_803602CC[];
extern char lbl_803602D4[];
extern char lbl_803602DC[];
extern char lbl_803602E4[];
extern char lbl_803602EC[];
extern char lbl_803602F4[];
extern char lbl_803602FC[];
extern char lbl_80360304[];
extern char lbl_8036030C[];
extern char lbl_80360310[];
void *lbl_802C7160[227] = { (void *)0x0, (void *)0xFA, (void *)0x1F4, (void *)0x2EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449, (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52, (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F, (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C, (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x0, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944, (void *)0x0, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952, (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454, (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C, (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0xBF800000, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0x3F800000, (void *)0xBF800000, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x40, (void *)0x43, (void *)0x46, (void *)0x49, (void *)0x4C, (void *)0x4F, (void *)0x52, (void *)0x55, (void *)0x1E, (void *)0x21, (void *)0x24, (void *)0x27, (void *)0x2A, (void *)0x2D, (void *)0x30, (void *)0x33, (void *)&lbl_803601E0, (void *)&lbl_803601E8, (void *)&lbl_803601EC, (void *)&lbl_803601F4, (void *)&lbl_803601E8, (void *)&lbl_803601FC, (void *)&lbl_80360204, (void *)&lbl_803601E8, (void *)&lbl_8036020C, (void *)&lbl_80360214, (void *)&lbl_803601E8, (void *)&lbl_8036021C, (void *)&lbl_80360224, (void *)&lbl_803601E8, (void *)&lbl_8036022C, (void *)&lbl_80360234, (void *)&lbl_803601E8, (void *)&lbl_8036023C, (void *)&lbl_80360244, (void *)&lbl_803601E8, (void *)&lbl_8036024C, (void *)&lbl_80360254, (void *)&lbl_803601E8, (void *)&lbl_8036025C, (void *)&lbl_80360264, (void *)&lbl_803601E8, (void *)&lbl_8036026C, (void *)&lbl_80360274, (void *)&lbl_803601E8, (void *)&lbl_8036027C, (void *)&lbl_80360284, (void *)&lbl_803601E8, (void *)&lbl_8036028C, (void *)&lbl_80360294, (void *)&lbl_803601E8, (void *)&lbl_8036029C, (void *)&lbl_803602A4, (void *)&lbl_803601E8, (void *)&lbl_803602AC, (void *)&lbl_803602B4, (void *)&lbl_803601E8, (void *)&lbl_803602BC, (void *)&lbl_803602C4, (void *)&lbl_803601E8, (void *)&lbl_803602CC, (void *)&lbl_803602D4, (void *)&lbl_803601E8, (void *)&lbl_803602DC, (void *)&lbl_803602E4, (void *)&lbl_803601E8, (void *)&lbl_803601E8, (void *)&lbl_80299204, (void *)&lbl_803601E8, (void *)&lbl_803601E8, (void *)&lbl_80299210, (void *)&lbl_803601E8, (void *)&lbl_803601E8, (void *)&lbl_8029921C, (void *)&lbl_803601E8, (void *)&lbl_803601E8, (void *)&lbl_80299228, (void *)&lbl_803601E8, (void *)&lbl_803601E8, (void *)&lbl_803601E8, (void *)&lbl_803602EC, (void *)&lbl_803602F4, (void *)&lbl_803602FC, (void *)&lbl_80360304, (void *)&lbl_8036030C, (void *)&lbl_803602F4, (void *)&lbl_80299234, (void *)&lbl_80360310, (void *)&lbl_80360304, (void *)0x0, (void *)0x1, (void *)&lbl_8036030C, (void *)0x1, (void *)0x1, (void *)&lbl_803602F4, (void *)0x2, (void *)0x1, (void *)&lbl_80299234, (void *)0x3, (void *)0x1, (void *)&lbl_80360310, (void *)0x4, (void *)0x1, (void *)0x0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4 };
static s32 tA[5] = { 0, 2, 5, 8, 10 };
static s32 tB[11] = { 1, 2, 1, 1, 1, 1, 1, 1, 2, 1, 3 };
static s32 tC[11] = { 0, 1, 1, 2, 1, 1, 3, 4, 1, 5, 1 };
void *lbl_802C7558[20] = { (void *)0x0, (void *)0x0, (void *)&fn_8008C900, (void *)&fn_80249AC4, (void *)&fn_8008C804, (void *)&fn_80242210, (void *)&fn_8008C6E4, (void *)&fn_8023D198, (void *)&fn_8008CA0C, (void *)&fn_8008C3B8, (void *)&fn_80241D80, (void *)&fn_8003F140, (void *)&fn_8003F18C, (void *)&fn_8023FE08, (void *)&fn_8003FB68, (void *)&fn_802416D4, (void *)&fn_8003F1DC, (void *)&fn_80240054, (void *)&fn_8008CA14, (void *)&fn_8003FB6C };
void fn_8008C3B8(u8 *p, s32 n) {
    s32 *q;
    s32 i;
    s32 t;
    t = S32(96);
    i = tA[n];
    for (q = tB + i; t > 0; q++) {
        if (*q > t) break;
        t -= tB[i++];
    }
    switch (tC[i]) {
    case 0:
        fn_80241628(p, 0, 0);
        S32(304) = **(s32 **)(p + 280);
        fn_80241588(p, S32(304) - 1, 0, lbl_80360318);
        fn_802494A4(p, 1);
        break;
    case 1:
        return;
    case 2: {
        char buf[8];
        fn_800F6E88(buf, U32(236));
        S32(308) = buf[0] - '0';
        fn_80241588(p, S32(308) + (S32(312) - 1) * S32(304) - (S32(304) < S32(308)), 0, lbl_80360318);
        if (fn_800F6CD0(U32(296), lbl_803601E8) == 0) {
            if (**(s32 **)(p + 300) == 1) fn_802410CC(p, U32(296), 0);
            else fn_80240B50(p, U32(296), 0);
        }
        fn_802494A4(p, 2);
        break;
    }
    case 3: {
        char buf[8];
        fn_800F6E88(buf, U32(236));
        S32(304) = buf[0] - '0';
        fn_80241588(p, S32(304) - 1, 0, lbl_80360318);
        if (fn_800F6CD0(U32(292), lbl_803601E8) == 0)
            fn_80242BC0(fn_80242144(p, S32(304)), U32(292), U32(224), 0, 0, 0);
        break;
    }
    case 4: {
        char buf[8];
        fn_802494A4(p, 1);
        fn_800F6E88(buf, U32(236));
        S32(304) = buf[0] - '0';
        fn_80241588(p, S32(304) - 1, 0, lbl_80360318);
        if (fn_800F6CD0(U32(292), lbl_803601E8) == 0)
            fn_80242BC0(fn_80242144(p, S32(304)), U32(292), U32(224), 0, 0, 0);
        break;
    }
    case 5:
        S32(304) = S32(308);
        fn_80241588(p, S32(304) - 1, 0, lbl_80360318);
        if (fn_800F6CD0(U32(284), lbl_803601E8) == 0)
            fn_80242BC0(fn_80242144(p, 0), U32(284), U32(224), 0, U32(288), 0);
        if (fn_800F6CD0(U32(292), lbl_803601E8) == 0)
            fn_80242BC0(fn_80242144(p, S32(304)), U32(292), U32(224), 0, 0, 0);
        fn_802494A4(p, 1);
        break;
    case 6:
        break;
    }
}

}
