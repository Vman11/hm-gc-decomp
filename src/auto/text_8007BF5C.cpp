// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

static u8 sPad[696] = {1};
static s32 tA[7] = {1};
static s32 tB[14] = {1};
static s32 tC[34] = {1};
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
