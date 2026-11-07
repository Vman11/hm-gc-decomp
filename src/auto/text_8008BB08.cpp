// wQP: unit owns .data 0x802C6D70-0x802C7160 (head lbl_802C6D70 global + static tA/tB/tC + vtable lbl_802C70F0 + switch jumptable).
#include "common.h"
extern "C" {
extern char lbl_80360178[0x4];
extern char lbl_803601CC[0x3];
extern char lbl_80299180[];
extern char lbl_80299194[];
extern void *lbl_8035B65C;
void fn_80241628(u8 *, int, int);
u32 fn_8023F4A0(u8 *, char *, char *, char *, int);
void fn_802494A4(u8 *, int);
void fn_800F6E88(char *, u32);
u32 fn_80242144(u8 *, s32);
void fn_80242BC0(u32, void *, u32, int, void *, int);
void fn_80241140(u8 *, int);
void fn_80240C2C(u8 *, int);
int fn_800F6CD0(u32, char *);
void __ct__9C80253F24Fiiii(void *, u32, u32, s32, u32);
#define S32(o) (*(s32 *)(p + (o)))
#define U32(o) (*(u32 *)(p + (o)))
#define ARR(o) (*(s32 **)(p + (o)))
static inline void cp0(u8 *p, u32 j) { for (; j < U32(312); j++) ARR(304)[j] = (*(s32 **)(U32(296) + 12))[j]; }
static inline s32 match(u8 *p) {
    u32 m;
    u32 k = 0;
    s32 ok;
    u32 a;
    s32 v;
    u32 a2;
    u32 b2;
    if (**(s32 **)(p + 280) == 0) {
        m = U32(312);
        for (a = 0; a < m; a++) {
            v = ARR(304)[a];
            for (b2 = 0; b2 < m; b2++) {
                if (v == (*(s32 **)(U32(300) + 12))[b2]) {
                    k = b2;
                    a = m;
                    b2 = m;
                }
            }
        }
    }
    ok = 1;
    m = U32(312);
    for (a2 = 0; a2 < m; a2++) {
        s32 w = (*(s32 **)(U32(300) + 12))[(a2 + k) % m];
        if (w != -1 && w != ARR(304)[a2]) ok = 0;
    }
    return ok;
}
extern "C" {
void fn_8003F140();
void fn_8003F18C();
void fn_8003F1DC();
void fn_8003FB68();
void fn_8003FB6C();
void fn_8008BEA0();
void fn_8008BF64();
void fn_8008BFAC();
void fn_8008BFF8();
void fn_8008C174();
void fn_8008C230();
void fn_8008C33C();
void fn_8023D198();
void fn_8023F5F4();
void fn_80240054();
void fn_80241D80();
void fn_80249AC4();
extern char lbl_80299174[];
extern char lbl_80360158[];
extern char lbl_80360160[];
extern char lbl_80360168[];
extern char lbl_80360170[];
extern char lbl_8036017C[];
extern char lbl_80360184[];
extern char lbl_8036018C[];
extern char lbl_80360194[];
extern char lbl_8036019C[];
extern char lbl_803601A4[];
extern char lbl_803601AC[];
extern char lbl_803601B4[];
extern char lbl_803601BC[];
extern char lbl_803601C4[];
}
void fn_8008BB08(u8 *p, s32 n);
void *lbl_802C6D70[190] = {
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
    (void *)0x00000021, (void *)0x00000024, (void *)0x00000027, (void *)0x0000002A, (void *)0x0000002D, (void *)0x00000030, (void *)0x00000033, (void *)(char *)lbl_80360158,
    (void *)(char *)lbl_80299174, (void *)0x00000000, (void *)(char *)lbl_80360160, (void *)(char *)lbl_80360168, (void *)0x00000000, (void *)(char *)lbl_80360170, (void *)(char *)&lbl_80360178, (void *)(char *)&lbl_80360178,
    (void *)(char *)lbl_8036017C, (void *)(char *)&lbl_80360178, (void *)(char *)&lbl_80360178, (void *)(char *)lbl_80360184, (void *)(char *)&lbl_80360178, (void *)(char *)&lbl_80360178, (void *)(char *)lbl_8036018C, (void *)(char *)&lbl_80360178,
    (void *)(char *)&lbl_80360178, (void *)(char *)lbl_80360194, (void *)(char *)&lbl_80360178, (void *)(char *)&lbl_80360178, (void *)(char *)&lbl_80360178, (void *)(char *)lbl_8036019C, (void *)(char *)lbl_803601A4, (void *)(char *)lbl_80360158,
    (void *)(char *)lbl_803601AC, (void *)(char *)lbl_80360160, (void *)(char *)lbl_80360158, (void *)(char *)lbl_803601B4, (void *)(char *)lbl_803601BC, (void *)(char *)lbl_803601C4, (void *)(char *)lbl_803601AC, (void *)0x00000000,
    (void *)0x00000001, (void *)(char *)lbl_80360160, (void *)0x00000001, (void *)0x00000001, (void *)(char *)lbl_80360158, (void *)0x00000002, (void *)0x00000001, (void *)(char *)lbl_803601B4,
    (void *)0x00000003, (void *)0x00000001, (void *)(char *)lbl_803601BC, (void *)0x00000004, (void *)0x00000001, (void *)(char *)lbl_803601C4, (void *)0x00000005, (void *)0x00000001,
    (void *)0x00000000, (void *)0x00000001, (void *)0x00000002, (void *)0x00000003, (void *)0x00000004, (void *)0x00000005
};
static s32 tA[6] = {
    (s32)0x00000000, (s32)0x00000002, (s32)0x00000005, (s32)0x00000008, (s32)0x0000000A, (s32)0x0000000D
};
static s32 tB[14] = {
    (s32)0x00000001, (s32)0x00000002, (s32)0x00000001, (s32)0x00000001, (s32)0x00000001, (s32)0x00000001, (s32)0x00000001, (s32)0x00000001,
    (s32)0x00000001, (s32)0x00000002, (s32)0x00000001, (s32)0x00000001, (s32)0x00000001, (s32)0x00000003
};
static s32 tC[14] = {
    (s32)0x00000000, (s32)0x00000001, (s32)0x00000002, (s32)0x00000003, (s32)0x00000002, (s32)0x00000002, (s32)0x00000004, (s32)0x00000002,
    (s32)0x00000002, (s32)0x00000005, (s32)0x00000002, (s32)0x00000006, (s32)0x00000002, (s32)0x00000002
};
void *lbl_802C70F0[20] = {
    (void *)0x00000000, (void *)0x00000000, (void *)fn_8008C230, (void *)fn_80249AC4, (void *)fn_8008C174, (void *)fn_8008BF64, (void *)fn_8008BFAC, (void *)fn_8023D198,
    (void *)fn_8008C33C, (void *)fn_8008BB08, (void *)fn_80241D80, (void *)fn_8003F140, (void *)fn_8003F18C, (void *)fn_8008BEA0, (void *)fn_8003FB68, (void *)fn_8008BFF8,
    (void *)fn_8003F1DC, (void *)fn_80240054, (void *)fn_8023F5F4, (void *)fn_8003FB6C
};

void fn_8008BB08(u8 *p, s32 n) {
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
    case 0: {
        U32(316) = 1;
        U32(308) = 0;
        U32(296) = fn_8023F4A0(p, lbl_80360178, lbl_80360178, lbl_80299180, 1);
        U32(300) = fn_8023F4A0(p, lbl_80360178, lbl_80360178, lbl_80299194, 1);
        cp0(p, 0);
        fn_802494A4(p, 1);
        break;
    }
    case 1:
        fn_80241628(p, 0, 0);
        break;
    case 2:
        return;
    case 3: {
        char buf[8];
        char s2[8];
        char s1[8];
        s32 x, y, ia, ib;
        fn_800F6E88(buf, U32(236));
        s1[0] = buf[0];
        s1[1] = '\0';
        s2[0] = buf[2];
        s2[1] = '\0';
        ia = s1[0] - '1';
        ib = s2[0] - '1';
        x = ARR(304)[ia];
        y = ARR(304)[ib];
        ARR(304)[ia] = y;
        ARR(304)[ib] = x;
        U32(308) = 0;
        fn_80242BC0(fn_80242144(p, x), lbl_803601CC, U32(224), 0, s2, 0);
        fn_80242BC0(fn_80242144(p, y), lbl_803601CC, U32(224), 0, s1, 0);
        fn_80241140(p, 1);
        break;
    }
    case 4: {
        u32 k;
        u32 b2;
        u32 m;
        u32 a;
        s32 ok;
        if (++U32(308) != 2) break;
        ok = match(p);
        if (ok) {
            fn_80240C2C(p, 0);
            if (fn_800F6CD0(U32(284), lbl_80360178) == 0) {
                if (**(s32 **)(p + 292) != 0)
                    __ct__9C80253F24Fiiii(lbl_8035B65C, U32(284), U32(224), 0, U32(288));
                else
                    fn_80242BC0(fn_80242144(p, 0), *(void **)(p + 284), U32(224), 0, *(void **)(p + 288), 0);
            }
            fn_802494A4(p, 2);
        }
        break;
    }
    case 5:
        fn_802494A4(p, 0);
        break;
    case 6:
        fn_802494A4(p, 2);
        break;
    case 7:
        break;
    }
}

} /* extern "C" */
