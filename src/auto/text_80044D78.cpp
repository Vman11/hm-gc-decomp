// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct V_44D78 {
    u8 pad[192];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void m8(char *);
};
extern "C" {
typedef struct { u8 d[52]; } E_44D78;
typedef struct { u8 pad[104]; s32 idx; u8 pad2[4]; E_44D78 *arr; } G_44D78;
#pragma opt_propagation off
extern "C" {
extern char lbl_8035CB28[6];
extern char lbl_802956A0[9];
extern char lbl_802956AC[9];
extern char lbl_8035CB30[8];
extern char lbl_8035CB38[8];
extern char lbl_8035CB40[6];
extern char lbl_8035CB48[8];
extern char lbl_8035CB50[8];
extern char lbl_8035CB58[6];
extern char lbl_8035CB60[8];
extern char lbl_8035CB68[6];
extern char lbl_8035CB70[7];
extern char lbl_8035CB78[7];
extern char lbl_8035CB80[8];
extern char lbl_8035CB88[4];
extern char lbl_8035CB8C[7];
extern char lbl_8035CB94[5];
extern char lbl_802956B8[9];
extern char lbl_8035CB9C[8];
extern char lbl_8035CBA4[8];
extern char lbl_8035CBAC[7];
extern char lbl_8035CBB4[7];
extern char lbl_8035CBBC[7];
extern char lbl_8035CBC4[8];
extern char lbl_8035CBCC[8];
extern char lbl_8035CBD4[8];
extern char lbl_8035CBDC[7];
extern char lbl_8035CBE4[6];
extern char lbl_8035CBEC[5];
extern char lbl_8035CBF4[5];
extern char lbl_802956C4[9];
extern char lbl_802956D0[];
extern char lbl_802956DC[9];
extern char lbl_802956E8[9];
extern char lbl_802956F4[9];
extern char lbl_8035CBFC[8];
extern char lbl_8035CC04[8];
void fn_80045150(void);
void fn_80045014(void);
void fn_80045130(void);
void fn_80044F48(void);
void fn_80045108(void);
void fn_8023D198(void);
void fn_800452C8(void);
void fn_80044D78(u8 *p, s32 n);
void fn_800450E0(void);
void fn_800302CC(void);
void fn_80030318(void);
void fn_80030368(void);
}
/* lbl_802B3B60: descriptor table (DOL words; pointers as relocations) */
extern "C" void *lbl_802B3B60[208];
void *lbl_802B3B60[208] = {
    (void *)0x00000000, (void *)0x000000FA, (void *)0x000001F4, (void *)0x000002EE,
    (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449,
    (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C,
    (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52,
    (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C,
    (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F,
    (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553,
    (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C,
    (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200,
    (void *)0x00000000, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944,
    (void *)0x00000000, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553,
    (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952,
    (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54,
    (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454,
    (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52,
    (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C,
    (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42,
    (void *)0x414C0000, (void *)0x00000000, (void *)0x00000028, (void *)0x00000000,
    (void *)0x00000000, (void *)0x00000028, (void *)0x00000000, (void *)0x00000000,
    (void *)0x00000028, (void *)0x00000000, (void *)0x00000000, (void *)0x3F800000,
    (void *)0x00000000, (void *)0x00000000, (void *)0x00000000, (void *)0x00000000,
    (void *)0x00000000, (void *)0x40000000, (void *)0x00000000, (void *)0x3F800000,
    (void *)0x3F800000, (void *)0x00000000, (void *)0xBF800000, (void *)0x3F800000,
    (void *)0x00000000, (void *)0x00000000, (void *)0x3F800000, (void *)0x3F800000,
    (void *)0x00000000, (void *)0x3F800000, (void *)0xBF800000, (void *)0x00000000,
    (void *)0x00000006, (void *)0x00000009, (void *)0x0000000C, (void *)0x0000000F,
    (void *)0x00000012, (void *)0x00000015, (void *)0x00000018, (void *)0x0000001B,
    (void *)0x00000000, (void *)0x00000006, (void *)0x00000009, (void *)0x0000000C,
    (void *)0x0000000F, (void *)0x00000012, (void *)0x00000015, (void *)0x00000018,
    (void *)0x0000001B, (void *)0x00000000, (void *)0x00000006, (void *)0x00000040,
    (void *)0x00000043, (void *)0x00000046, (void *)0x00000049, (void *)0x0000004C,
    (void *)0x0000004F, (void *)0x00000052, (void *)0x00000055, (void *)0x0000001E,
    (void *)0x00000021, (void *)0x00000024, (void *)0x00000027, (void *)0x0000002A,
    (void *)0x0000002D, (void *)0x00000030, (void *)0x00000033, (void *)lbl_8035CB28,
    (void *)lbl_802956A0, (void *)lbl_802956AC, (void *)lbl_8035CB30, (void *)lbl_8035CB38,
    (void *)lbl_8035CB40, (void *)lbl_8035CB48, (void *)lbl_8035CB50, (void *)lbl_8035CB58,
    (void *)lbl_8035CB60, (void *)lbl_8035CB68, (void *)lbl_8035CB70, (void *)lbl_8035CB78,
    (void *)lbl_8035CB80, (void *)lbl_8035CB88, (void *)lbl_8035CB8C, (void *)lbl_8035CB94,
    (void *)lbl_802956B8, (void *)lbl_8035CB9C, (void *)lbl_8035CBA4, (void *)lbl_8035CBAC,
    (void *)lbl_8035CBB4, (void *)lbl_8035CBBC, (void *)lbl_8035CBC4, (void *)lbl_8035CBCC,
    (void *)lbl_8035CBD4, (void *)lbl_8035CBDC, (void *)lbl_8035CBE4, (void *)lbl_8035CBEC,
    (void *)lbl_8035CBF4, (void *)lbl_802956C4, (void *)lbl_802956D0, (void *)lbl_802956DC,
    (void *)lbl_802956E8, (void *)lbl_802956F4, (void *)lbl_8035CBFC, (void *)lbl_8035CC04,
    (void *)lbl_8035CBEC, (void *)0x00000000, (void *)0x00000001, (void *)lbl_8035CBF4,
    (void *)0x00000001, (void *)0x00000001, (void *)lbl_802956C4, (void *)0x00000002,
    (void *)0x00000001, (void *)lbl_802956D0, (void *)0x00000003, (void *)0x00000001,
    (void *)lbl_802956DC, (void *)0x00000004, (void *)0x00000001, (void *)lbl_802956E8,
    (void *)0x00000005, (void *)0x00000001, (void *)lbl_802956F4, (void *)0x00000006,
    (void *)0x00000001, (void *)lbl_8035CBFC, (void *)0x00000007, (void *)0x00000001,
    (void *)lbl_8035CC04, (void *)0x00000008, (void *)0x00000001, (void *)0x00000000,
    (void *)0x00000001, (void *)0x00000002, (void *)0x00000003, (void *)0x00000004,
    (void *)0x00000005, (void *)0x00000006, (void *)0x00000007, (void *)0x00000008
};
static s32 tabA_44D78[9] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
static s32 tabB_44D78[9] = { 28, 28, 28, 28, 28, 28, 28, 28, 28 };
static s32 tabC_44D78[9] = { 0, 0, 1, 2, 3, 4, 5, 6, 7 };
/* lbl_802B3F0C: vtable (reached only through lbl_802B3B60 + 0x3AC; force_active) */
extern "C" void *lbl_802B3F0C[14];
void *lbl_802B3F0C[14] = {
    (void *)0x00000000, (void *)0x00000000, (void *)fn_80045150, (void *)fn_80045014,
    (void *)fn_80045130, (void *)fn_80044F48, (void *)fn_80045108, (void *)fn_8023D198,
    (void *)fn_800452C8, (void *)fn_80044D78, (void *)fn_800450E0, (void *)fn_800302CC,
    (void *)fn_80030318, (void *)fn_80030368
};
extern char lbl_8035CC0C[4];
extern f32 lbl_8035CC10;
extern f32 lbl_8035CC14;
extern f32 lbl_8035CC18;
extern V_44D78 *lbl_8035B684;
extern char lbl_802956D0[];
extern G_44D78 *lbl_8035B5E4;
extern void *lbl_8035A0A4;
extern void *lbl_8035B79C;
s32 fn_800F6CD0(char *, char *);
void fn_80242B58(u8 *, char *);
void fn_80253304(E_44D78 *, s32, f32);
void fn_80253250(E_44D78 *);
s32 fn_8003CC3C(void *);
s32 fn_8003CDA4(void *);
void fn_8026820C(void *, s32);

void fn_80044D78(u8 *p, s32 n) {
    s32 *q;
    s32 i;
    s32 t;
    i = tabA_44D78[n];
    t = *(s32 *)(p + 96);
    q = &tabB_44D78[i];
    while (t > 0) {
        if (*q > t) break;
        t -= tabB_44D78[i++];
        q++;
    }
    switch (tabC_44D78[i]) {
    case 0:
        return;
    case 1:
        if (*(char **)(p + 124) != 0 && fn_800F6CD0(*(char **)(p + 124), lbl_8035CC0C) == 0)
            fn_80242B58(p, *(char **)(p + 124));
        break;
    case 2:
        lbl_8035B684->m8(lbl_802956D0);
        break;
    case 3:
        fn_80253304(&lbl_8035B5E4->arr[lbl_8035B5E4->idx], 500, lbl_8035CC10);
        break;
    case 4:
        fn_80253304(&lbl_8035B5E4->arr[lbl_8035B5E4->idx], 500, lbl_8035CC14);
        break;
    case 5:
        fn_80253304(&lbl_8035B5E4->arr[lbl_8035B5E4->idx], 500, lbl_8035CC18);
        break;
    case 6:
        fn_80253250(&lbl_8035B5E4->arr[lbl_8035B5E4->idx]);
        break;
    case 7: {
        void *o = lbl_8035A0A4;
        s32 a = fn_8003CC3C(o);
        if (a - fn_8003CDA4(o) > 0) {
            fn_8026820C(lbl_8035B79C, 1);
            fn_8026820C(lbl_8035B79C, 4);
        } else {
            fn_8026820C(lbl_8035B79C, 6);
        }
        break;
    }
    case 8:
        break;
    }
}
#pragma opt_propagation reset

} /* extern "C" */
