// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80360D58[4];
extern char lbl_80360D98[5];
extern char lbl_80360DA0[7];
extern char lbl_80299A54[];
extern char lbl_80299A48[];
extern u32 lbl_8035B308;
struct VO {
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
    virtual void f33(char *, u32, int, char *, int);
};
void fn_80241628(u8 *, int, int);
u32 fn_8023F4A0(u8 *, char *, char *, char *, int);
void fn_802494A4(u8 *, int);
void fn_800F6E88(char *, char *);
VO *fn_802288FC(u32, u32);
u32 fn_80242144(u8 *, s32);
void fn_80242BC0(u32, u32, u32, int, u32, int);
#define S32(o) (*(s32 *)(p + (o)))
#define U32(o) (*(u32 *)(p + (o)))
void fn_8003F140();
void fn_8003F18C();
void fn_8003F1DC();
void fn_8003FB68();
void fn_8003FB6C();
void fn_80093474(u8 *p, s32 n);
void fn_800937A4();
void fn_800937DC();
void fn_80093850();
void fn_800939F4();
void fn_8023D198();
void fn_8023F5F4();
void fn_8023FE08();
void fn_80240054();
void fn_802416D4();
void fn_80241D80();
void fn_80242210();
void fn_80249AC4();
extern char lbl_80299A3C[];
extern char lbl_80299A48[];
extern char lbl_80360D58[4];
extern char lbl_80360D6C[];
extern char lbl_80360D74[];
extern char lbl_80360D7C[];
extern char lbl_80360D80[];
extern char lbl_80360D88[];
extern char lbl_80360D90[];
void *lbl_802CAB98[174] = { (void *)0x0, (void *)0xFA, (void *)0x1F4, (void *)0x2EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449, (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52, (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F, (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C, (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x0, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944, (void *)0x0, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952, (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454, (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C, (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0xBF800000, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0x3F800000, (void *)0xBF800000, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x40, (void *)0x43, (void *)0x46, (void *)0x49, (void *)0x4C, (void *)0x4F, (void *)0x52, (void *)0x55, (void *)0x1E, (void *)0x21, (void *)0x24, (void *)0x27, (void *)0x2A, (void *)0x2D, (void *)0x30, (void *)0x33, (void *)&lbl_80299A3C, (void *)&lbl_80360D58, (void *)&lbl_80360D58, (void *)&lbl_80360D58, (void *)&lbl_80360D6C, (void *)&lbl_80360D74, (void *)&lbl_80360D7C, (void *)&lbl_80360D80, (void *)&lbl_80299A48, (void *)&lbl_80360D88, (void *)&lbl_80360D90, (void *)&lbl_80360D6C, (void *)0x0, (void *)0x1, (void *)&lbl_80360D74, (void *)0x1, (void *)0x1, (void *)&lbl_80360D7C, (void *)0x2, (void *)0x1, (void *)&lbl_80360D80, (void *)0x3, (void *)0x1, (void *)&lbl_80299A48, (void *)0x4, (void *)0x1, (void *)&lbl_80360D88, (void *)0x5, (void *)0x1, (void *)&lbl_80360D90, (void *)0x6, (void *)0x1, (void *)0x0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6 };
static s32 tA[7] = { 0, 2, 4, 6, 8, 10, 12 };
static s32 tB[13] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2 };
static s32 tC[13] = { 0, 1, 1, 2, 1, 3, 1, 4, 1, 5, 1, 6, 1 };
void *lbl_802CAED4[20] = { (void *)0x0, (void *)0x0, (void *)&fn_80093850, (void *)&fn_80249AC4, (void *)&fn_800937DC, (void *)&fn_80242210, (void *)&fn_800937A4, (void *)&fn_8023D198, (void *)&fn_800939F4, (void *)&fn_80093474, (void *)&fn_80241D80, (void *)&fn_8003F140, (void *)&fn_8003F18C, (void *)&fn_8023FE08, (void *)&fn_8003FB68, (void *)&fn_802416D4, (void *)&fn_8003F1DC, (void *)&fn_80240054, (void *)&fn_8023F5F4, (void *)&fn_8003FB6C };
void fn_80093474(u8 *p, s32 n) {
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
        U32(288) = fn_8023F4A0(p, lbl_80360D58, lbl_80360D58, lbl_80299A54, 1);
        U32(292) = 0;
        U32(296) = 0;
        fn_802494A4(p, 1);
        break;
    case 1:
        return;
    case 2: {
        char buf[16];
        VO *o;
        if (U32(296) == 0) fn_800F6E88(buf, lbl_80360D98);
        else fn_800F6E88(buf, (char *)U32(292) + 140);
        *(VO **)(p + 292) = fn_802288FC(lbl_8035B308, U32(236));
        o = *(VO **)(p + 292);
        o->f33(lbl_80360DA0, U32(224), 0, buf, 0);
        U32(296)++;
        fn_80242BC0(fn_80242144(p, 0), U32(280), U32(224), 0, 0, 0);
        break;
    }
    case 3: {
        char buf[8];
        VO *o = *(VO **)(p + 292);
        U32(292) = 0;
        if (U32(296) != 1) o->f33(lbl_80299A48, U32(224), 0, 0, 0);
        if (*(u32 *)(**(u8 ***)(p + 288) + 16) > U32(296))
            fn_800F6E88(buf, *(char **)(U32(288) + 12) + U32(296) * 8);
        else
            fn_800F6E88(buf, lbl_80360D58);
        o->f33((char *)U32(284), U32(224), 0, buf, 0);
        U32(296)--;
        break;
    }
    case 4:
        while (U32(296) != 0) {
            char buf[8];
            VO *o = *(VO **)(p + 292);
            U32(292) = 0;
            if (U32(296) != 1) o->f33(lbl_80299A48, U32(224), 0, 0, 0);
            if (*(u32 *)(**(u8 ***)(p + 288) + 16) > U32(296))
                fn_800F6E88(buf, *(char **)(U32(288) + 12) + U32(296) * 8);
            else
                fn_800F6E88(buf, lbl_80360D58);
            o->f33((char *)U32(284), U32(224), 0, buf, 0);
            U32(296)--;
        }
        break;
    case 5:
        U32(292) = U32(236);
        break;
    case 6:
        fn_802494A4(p, 0);
        break;
    case 7:
        break;
    }
}

} /* extern "C" */
