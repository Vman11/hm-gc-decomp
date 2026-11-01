// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

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
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void s39(u32, int, char *, char *, f32);
};
extern u8 *lbl_8035B308;
extern u32 lbl_8035B374;
extern char lbl_8035F8E8[4];
extern f32 lbl_8035F8EC;
extern char lbl_80298710[];
extern char lbl_8029871C[];
void fn_80241628(u8 *, int, int);
u32 fn_8023F4A0(u8 *, char *, char *, char *, int);
int fn_800F6CD0(u32, char *);
u32 fn_802288FC(u8 *, u32);
void fn_802490E0(u8 *, int, f32);
void fn_802494A4(u8 *, int);
void fn_800F6E88(char *, u8 *);
VO *fn_80233550(u32, char *);
void fn_8023F5E8(u8 *, u32);
void fn_8024118C(u8 *, u32, int);
void fn_80249008(u8 *, int);
#define S32(o) (*(s32 *)(p + (o)))
#define U32(o) (*(u32 *)(p + (o)))
static inline void Play(u8 *p) {
    if (S32(308) && U32(320)) fn_802490E0(p, 0, (*(f32 **)(U32(300) + 12))[U32(324)]);
}
void fn_8003F140();
void fn_8003F18C();
void fn_8003F1DC();
void fn_8007BF5C(u8 *p, s32 n);
void fn_8007C304();
void fn_8007C360();
void fn_8007C3BC();
void fn_8007C550();
void fn_8007C668();
void fn_8007C724();
void fn_8007C830();
void fn_8023D198();
void fn_8023F5F4();
void fn_80240054();
void fn_802416D4();
void fn_80241D80();
void fn_80242210();
void fn_80249AC4();
extern char lbl_802986EC[];
extern char lbl_802986F8[];
extern char lbl_80298704[];
extern char lbl_8035F8C8[];
extern char lbl_8035F8D0[];
extern char lbl_8035F8D8[];
extern char lbl_8035F8E0[];
void *lbl_802C3040[174] = { (void *)0x0, (void *)0xFA, (void *)0x1F4, (void *)0x2EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449, (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52, (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F, (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C, (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x0, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944, (void *)0x0, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952, (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454, (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C, (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0xBF800000, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0x3F800000, (void *)0xBF800000, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x40, (void *)0x43, (void *)0x46, (void *)0x49, (void *)0x4C, (void *)0x4F, (void *)0x52, (void *)0x55, (void *)0x1E, (void *)0x21, (void *)0x24, (void *)0x27, (void *)0x2A, (void *)0x2D, (void *)0x30, (void *)0x33, (void *)0x0, (void *)0x0, (void *)0x0, (void *)&lbl_802986EC, (void *)&lbl_8035F8C8, (void *)&lbl_8035F8D0, (void *)&lbl_8035F8D8, (void *)&lbl_802986F8, (void *)&lbl_80298704, (void *)&lbl_802986EC, (void *)&lbl_8035F8E0, (void *)&lbl_8035F8C8, (void *)0x0, (void *)0x1, (void *)&lbl_8035F8D0, (void *)0x1, (void *)0x1, (void *)&lbl_8035F8D8, (void *)0x2, (void *)0x1, (void *)&lbl_802986F8, (void *)0x3, (void *)0x1, (void *)&lbl_80298704, (void *)0x4, (void *)0x1, (void *)&lbl_802986EC, (void *)0x5, (void *)0x1, (void *)&lbl_8035F8E0, (void *)0x6, (void *)0x1, (void *)0x0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6 };
static s32 tA[7] = { 0, 2, 4, 6, 8, 10, 12 };
static s32 tB[14] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
static s32 tC[14] = { 0, 1, 1, 2, 1, 3, 1, 4, 1, 5, 1, 6, 1, 7 };
void *lbl_802C3384[20] = { (void *)0x0, (void *)0x0, (void *)&fn_8007C724, (void *)&fn_80249AC4, (void *)&fn_8007C668, (void *)&fn_80242210, (void *)&fn_8007C550, (void *)&fn_8023D198, (void *)&fn_8007C830, (void *)&fn_8007BF5C, (void *)&fn_80241D80, (void *)&fn_8003F140, (void *)&fn_8003F18C, (void *)&fn_8007C3BC, (void *)&fn_8007C304, (void *)&fn_802416D4, (void *)&fn_8003F1DC, (void *)&fn_80240054, (void *)&fn_8023F5F4, (void *)&fn_8007C360 };
void fn_8007BF5C(u8 *p, s32 n) {
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
        U32(296) = fn_8023F4A0(p, lbl_8035F8E8, lbl_8035F8E8, lbl_80298710, 1);
        U32(300) = fn_8023F4A0(p, lbl_8035F8E8, lbl_8035F8E8, lbl_8029871C, 1);
        U32(320) = *(u32 *)(**(u8 ***)(p + 296) + 16);
        if (fn_800F6CD0(U32(280), lbl_8035F8E8) == 0) U32(328) = fn_802288FC(lbl_8035B308, U32(280));
        U32(304) = U32(328) == *(u32 *)(lbl_8035B308 + 72);
        U32(308) = **(u32 **)(p + 284);
        Play(p);
        fn_802494A4(p, 1);
        break;
    case 1:
        return;
    case 2:
        U32(308) = 1;
        if (S32(312)) Play(p);
        break;
    case 3:
        U32(308) = 0;
        break;
    case 4:
        U32(312) = 0;
        break;
    case 5:
        U32(312) = 1;
        Play(p);
        break;
    case 6:
        if (S32(312)) {
            if (S32(308) && U32(320)) {
                char buf[8];
                VO *o;
                fn_800F6E88(buf, *(u8 **)(U32(296) + 12) + U32(324) * 8);
                o = fn_80233550(lbl_8035B374, buf);
                if (o) {
                    if (S32(304) == 0 || (S32(304) != 0 && (S32(312) != 0 || **(s32 **)(p + 288) != 0))) fn_8023F5E8(p, U32(328));
                    else fn_8023F5E8(p, 0);
                    if (U32(292)) fn_8024118C(p, U32(292), 0);
                    o->s39(U32(224), 0, lbl_8035F8E8, lbl_8035F8E8, lbl_8035F8EC);
                }
                U32(324) = (U32(324) + 1) % U32(320);
                Play(p);
                U32(316) = 0;
            } else {
                U32(316) = 1;
            }
        }
        break;
    case 7:
        fn_80249008(p, 0);
        break;
    case 8:
        break;
    }
}

} /* extern "C" */
