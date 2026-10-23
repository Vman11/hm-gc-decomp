// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

static u8 sPad[696] = {1};
static s32 tA[7] = {1};
static s32 tB[13] = {1};
static s32 tC[33] = {1};
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
