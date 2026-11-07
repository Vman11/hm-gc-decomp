// wMX: unit owns .data 0x802C2B38-0x802C3004 (head table global + static tA/tB/tC + vtable lbl_802C2F48 + switch jumptable) and its .rodata string pool 0x802986B0-0x802986D4.
#include "common.h"
#pragma readonly_strings on
extern "C" {

extern char lbl_8035F7D0[8], lbl_8035F7D8[8], lbl_8035F7E0[8], lbl_8035F7E8[8], lbl_8035F7F0[8], lbl_8035F7F8[8], lbl_8035F800[8], lbl_8035F808[8], lbl_8035F810[8], lbl_8035F818[8], lbl_8035F820[8], lbl_8035F828[8], lbl_8035F82C[8], lbl_8035F834[8], lbl_8035F83C[8], lbl_8035F844[8], lbl_8035F84C[8], lbl_8035F854[8], lbl_8035F85C[8], lbl_8035F864[8], lbl_8035F86C[8], lbl_8035F874[8], lbl_8035F87C[8], lbl_8035F884[8], lbl_8035F88C[8];
struct Str { char a[12]; char b[12]; char c[12]; };
struct Tb { u8 pad[768]; s32 a[4]; s32 b[32]; s32 c[32]; };
extern void *lbl_8035B65C;
struct T { u8 pad[96]; int f96; };
int fn_802491DC(T *, int);
void fn_80242B58(T *, const char *);
void fn_80254C90(void *);
extern "C" {
void fn_800302CC();
void fn_80030318();
void fn_80030368();
void fn_8007BD2C();
void fn_8007BD4C();
void fn_8007BD6C();
void fn_8007BEE4();
void fn_8023D198();
void fn_80249968();
void fn_80249AC4();
void fn_80249E0C();
extern char lbl_8035F7B8[];
extern char lbl_8035F7C0[];
extern char lbl_8035F7C8[];
extern char lbl_8035F894[];
extern char lbl_8035F89C[];
}
void fn_8007BB14(T *t, int k);
void *lbl_802C2B38[192] = {
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
    (void *)0x00000021, (void *)0x00000024, (void *)0x00000027, (void *)0x0000002A, (void *)0x0000002D, (void *)0x00000030, (void *)0x00000033, (void *)0x3F800000,
    (void *)0x00000000, (void *)0x00000000, (void *)(char *)lbl_8035F7B8, (void *)0x3F800000, (void *)0x00000000, (void *)0x00000000, (void *)(char *)lbl_8035F7C0, (void *)(char *)lbl_8035F7C8,
    (void *)"BALLROOM", (void *)"CHILDREN", (void *)(char *)&lbl_8035F7D0, (void *)(char *)&lbl_8035F7D8, (void *)(char *)&lbl_8035F7E0, (void *)(char *)&lbl_8035F7E8, (void *)(char *)&lbl_8035F7F0, (void *)(char *)&lbl_8035F7F8,
    (void *)(char *)&lbl_8035F800, (void *)(char *)&lbl_8035F808, (void *)(char *)&lbl_8035F810, (void *)(char *)&lbl_8035F818, (void *)(char *)&lbl_8035F820, (void *)(char *)&lbl_8035F828, (void *)(char *)&lbl_8035F82C, (void *)(char *)&lbl_8035F834,
    (void *)"MASTRBED", (void *)(char *)&lbl_8035F83C, (void *)(char *)&lbl_8035F844, (void *)(char *)&lbl_8035F84C, (void *)(char *)&lbl_8035F854, (void *)(char *)&lbl_8035F85C, (void *)(char *)&lbl_8035F864, (void *)(char *)&lbl_8035F86C,
    (void *)(char *)&lbl_8035F874, (void *)(char *)&lbl_8035F87C, (void *)(char *)&lbl_8035F884, (void *)(char *)&lbl_8035F88C, (void *)(char *)lbl_8035F894, (void *)(char *)lbl_8035F89C, (void *)(char *)lbl_8035F7B8, (void *)(char *)lbl_8035F7C0,
    (void *)(char *)lbl_8035F894, (void *)0x00000000, (void *)0x00000001, (void *)(char *)lbl_8035F89C, (void *)0x00000001, (void *)0x00000001, (void *)(char *)lbl_8035F7B8, (void *)0x00000002,
    (void *)0x00000001, (void *)(char *)lbl_8035F7C0, (void *)0x00000003, (void *)0x00000001, (void *)0x00000000, (void *)0x00000001, (void *)0x00000002, (void *)0x00000003
};
static s32 tA[4] = {
    (s32)0x00000000, (s32)0x00000001, (s32)0x00000002, (s32)0x00000003
};
static s32 tB[32] = {
    (s32)0x0000001D, (s32)0x0000001D, (s32)0x0000001D, (s32)0x00000001, (s32)0x00000001, (s32)0x00000001, (s32)0x00000001, (s32)0x00000001,
    (s32)0x00000001, (s32)0x00000001, (s32)0x00000001, (s32)0x00000001, (s32)0x00000001, (s32)0x00000001, (s32)0x00000001, (s32)0x00000001,
    (s32)0x00000001, (s32)0x00000001, (s32)0x00000001, (s32)0x00000001, (s32)0x00000001, (s32)0x00000001, (s32)0x00000001, (s32)0x00000001,
    (s32)0x00000001, (s32)0x00000001, (s32)0x00000001, (s32)0x00000001, (s32)0x00000001, (s32)0x00000001, (s32)0x00000001, (s32)0x00000001
};
static s32 tC[32] = {
    (s32)0x00000000, (s32)0x00000001, (s32)0x00000002, (s32)0x00000003, (s32)0x00000004, (s32)0x00000005, (s32)0x00000006, (s32)0x00000007,
    (s32)0x00000008, (s32)0x00000009, (s32)0x0000000A, (s32)0x0000000B, (s32)0x0000000C, (s32)0x0000000D, (s32)0x0000000E, (s32)0x0000000F,
    (s32)0x00000010, (s32)0x00000011, (s32)0x00000012, (s32)0x00000013, (s32)0x00000014, (s32)0x00000015, (s32)0x00000016, (s32)0x00000017,
    (s32)0x00000018, (s32)0x00000019, (s32)0x0000001A, (s32)0x0000001B, (s32)0x0000001C, (s32)0x0000001D, (s32)0x0000001E, (s32)0x0000001F
};
void *lbl_802C2F48[14] = {
    (void *)0x00000000, (void *)0x00000000, (void *)fn_8007BD6C, (void *)fn_80249AC4, (void *)fn_8007BD4C, (void *)fn_80249E0C, (void *)fn_8007BD2C, (void *)fn_8023D198,
    (void *)fn_8007BEE4, (void *)fn_8007BB14, (void *)fn_80249968, (void *)fn_800302CC, (void *)fn_80030318, (void *)fn_80030368
};

void fn_8007BB14(T *t, int k) {
    s32 *q;
    s32 idx;
    s32 v;
    idx = tA[k];
    v = t->f96;
    for (q = &tB[idx]; v > 0; q++) {
        if (*q > v) break;
        v -= tB[idx++];
    }
    switch (tC[idx]) {
    case 0: fn_802491DC(t, 0); break;
    case 1: return;
    case 2: fn_802491DC(t, 1); break;
    case 3: fn_80242B58(t, "BALLROOM"); break;
    case 4: fn_80242B58(t, "CHILDREN"); break;
    case 5: fn_80242B58(t, lbl_8035F7D0); break;
    case 6: fn_80242B58(t, lbl_8035F7D8); break;
    case 7: fn_80242B58(t, lbl_8035F7E0); break;
    case 8: fn_80242B58(t, lbl_8035F7E8); break;
    case 9: fn_80242B58(t, lbl_8035F7F0); break;
    case 10: fn_80242B58(t, lbl_8035F7F8); break;
    case 11: fn_80242B58(t, lbl_8035F800); break;
    case 12: fn_80242B58(t, lbl_8035F808); break;
    case 13: fn_80242B58(t, lbl_8035F810); break;
    case 14: fn_80242B58(t, lbl_8035F818); break;
    case 15: fn_80242B58(t, lbl_8035F820); break;
    case 16: fn_80242B58(t, lbl_8035F828); break;
    case 17: fn_80242B58(t, lbl_8035F82C); break;
    case 18: fn_80242B58(t, lbl_8035F834); break;
    case 19: fn_80242B58(t, "MASTRBED"); break;
    case 20: fn_80242B58(t, lbl_8035F83C); break;
    case 21: fn_80242B58(t, lbl_8035F844); break;
    case 22: fn_80242B58(t, lbl_8035F84C); break;
    case 23: fn_80242B58(t, lbl_8035F854); break;
    case 24: fn_80242B58(t, lbl_8035F85C); break;
    case 25: fn_80242B58(t, lbl_8035F864); break;
    case 26: fn_80242B58(t, lbl_8035F86C); break;
    case 27: fn_80242B58(t, lbl_8035F874); break;
    case 28: fn_80242B58(t, lbl_8035F87C); break;
    case 29: fn_80242B58(t, lbl_8035F884); break;
    case 30: fn_80242B58(t, lbl_8035F88C); break;
    case 31: fn_80254C90(lbl_8035B65C); break;
    case 32: break;
    }
}

} /* extern "C" */
