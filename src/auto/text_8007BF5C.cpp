#include "common.h"
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
namespace m8007BF5C {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* hoisted */
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
extern "C" {
extern char lbl_803592D0[4];
extern char lbl_803592D4[4];

extern char lbl_802986EC[];
extern char lbl_802986F8[];
extern char lbl_80298704[];
extern char lbl_8035F8C8[];
extern char lbl_8035F8D0[];
extern char lbl_8035F8D8[];
extern char lbl_8035F8E0[];

}
/* This unit's .data (lbl_802C3040, 0x344 bytes): the function addresses the tables below through one section base. */
static s32 data_000[4] = { 0, 0xFA, 0x1F4, 0x2EE };
static char data_010[12] = "UI\\MEMCARD\\";
static char data_01C[31][8] = {
    "ATTIC", {'B', 'A', 'L', 'L', 'R', 'O', 'O', 'M'}, {'C', 'H', 'I', 'L', 'D', 'R', 'E', 'N'}, "CONSERV", "DINROOM", "FOYER", "GALLERY", "GRAVEYD",
    "GROOM", "GRTHALL", "GUEST", "HALLAB", "HALLCD", "KITCHEN", "LAB", "MUSEUM",
    "MAID", {'M', 'A', 'S', 'T', 'R', 'B', 'E', 'D'}, "MAUSOLM", "MEASURE", "TOYROOM", "OBSERV", "PANTRY", "PARLOR",
    "SITTING", "STRETCH", "SUNROOM", "WINTER", "TITLE", "SPIRIT", "GLOBAL"
};
static s32 data_114[3][3] = { { 0, 0x28, 0 }, { 0, 0x28, 0 }, { 0, 0x28, 0 } };
static f32 data_138[22] = { 0, 1, 0, 0, 0, 0, 0, 2, 0, 1, 1, 0, -1, 1, 0, 0, 1, 1, 0, 1, -1, 0 };
static s32 data_190[35] = {
    6, 9, 0xC, 0xF, 0x12, 0x15, 0x18, 0x1B, 0,
    6, 9, 0xC, 0xF, 0x12, 0x15, 0x18, 0x1B, 0,
    6, 0x40, 0x43, 0x46, 0x49, 0x4C, 0x4F, 0x52, 0x55,
    0x1E, 0x21, 0x24, 0x27, 0x2A, 0x2D, 0x30, 0x33
};
static struct { s32 a, b, c; char *s; } data_21C = { 0, 0, 0, lbl_802986EC };
static char *data_22C[7] = { lbl_8035F8C8, lbl_8035F8D0, lbl_8035F8D8, lbl_802986F8, lbl_80298704, lbl_802986EC, lbl_8035F8E0 };
static struct { char *s; s32 a, b; } data_248[7] = {
    { lbl_8035F8C8, 0, 1 }, { lbl_8035F8D0, 1, 1 }, { lbl_8035F8D8, 2, 1 }, { lbl_802986F8, 3, 1 },
    { lbl_80298704, 4, 1 }, { lbl_802986EC, 5, 1 }, { lbl_8035F8E0, 6, 1 }
};
static s32 data_29C[7] = { 0, 1, 2, 3, 4, 5, 6 };
static s32 data_2B8[7] = { 0, 2, 4, 6, 8, 10, 12 };
static s32 data_2D4[14] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
static s32 data_30C[14] = { 0, 1, 1, 2, 1, 3, 1, 4, 1, 5, 1, 6, 1, 7 };


void *lbl_802C3384[20] = { (void *)0x0, (void *)0x0, (void *)&fn_8007C724, (void *)&fn_80249AC4, (void *)&fn_8007C668, (void *)&fn_80242210, (void *)&fn_8007C550, (void *)&fn_8023D198, (void *)&fn_8007C830, (void *)&fn_8007BF5C, (void *)&fn_80241D80, (void *)&fn_8003F140, (void *)&fn_8003F18C, (void *)&fn_8007C3BC, (void *)&fn_8007C304, (void *)&fn_802416D4, (void *)&fn_8003F1DC, (void *)&fn_80240054, (void *)&fn_8023F5F4, (void *)&fn_8007C360 };
void fn_8007BF5C(u8 *p, s32 n) {
    s32 *q;
    s32 i;
    s32 t;
    t = S32(96);
    i = data_2B8[n];
    for (q = data_2D4 + i; t > 0; q++) {
        if (*q > t) break;
        t -= data_2D4[i++];
    }
    switch (data_30C[i]) {
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

} /* namespace m8007BF5C */

namespace m8007C304 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

} /* extern "C" */

extern "C" {
extern char lbl_802986F8[];
extern char lbl_80298704[];
struct VCall_fn_8007C304_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };
struct VCall_fn_8007C304_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };

void fn_8007C304(s32 *param_1) {
    ((VCall_fn_8007C304_0 *)(param_1))->m((s32)(lbl_802986F8)); /* "PLYRDEAD" */
    ((VCall_fn_8007C304_1 *)(param_1))->m((s32)(lbl_80298704)); /* "PLYRLIVE" */
}
}

} /* namespace m8007C304 */

namespace m8007C360 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

} /* extern "C" */

extern "C" {
extern char lbl_802986F8[];
extern char lbl_80298704[];
struct VCall_fn_8007C360_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };
struct VCall_fn_8007C360_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };

void fn_8007C360(s32 *param_1) {
    ((VCall_fn_8007C360_0 *)(param_1))->m((s32)(lbl_802986F8)); /* "PLYRDEAD" */
    ((VCall_fn_8007C360_1 *)(param_1))->m((s32)(lbl_80298704)); /* "PLYRLIVE" */
}
}

} /* namespace m8007C360 */

struct O7C3BC {
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
    virtual void m39(void *a, s32 b, char *c, char *d, f32 e);
};
namespace m8007C3BC {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
/* hoisted */
extern "C" {
typedef struct { char d[8]; } Key7C3BC;
typedef struct { u8 pad[12]; Key7C3BC *f12; } KA7C3BC;
typedef struct { u8 pad[12]; f32 *f12; } FA7C3BC;
typedef struct { s32 f0; } S7C3BC;
typedef struct {
    u8 pad0[224];
    void *f224;
    u8 pad228[60];
    S7C3BC *f288;
    void *f292;
    KA7C3BC *f296;
    FA7C3BC *f300;
    s32 f304;
    s32 f308;
    s32 f312;
    s32 f316;
    u32 f320;
    u32 f324;
    s32 f328;
} P7C3BC;
extern void *lbl_8035B374;
extern char lbl_8035F8E8[4];
extern f32 lbl_8035F8EC;
void fn_800F6E88(void *, void *);
O7C3BC *fn_80233550(void *, Key7C3BC *);
void fn_8023F5E8(P7C3BC *, s32);
void fn_8024118C(P7C3BC *, void *, s32);
void fn_802490E0(P7C3BC *, s32, f32);
void fn_8023FE08(P7C3BC *, f32);
inline BOOL chk7C3BC(P7C3BC *p) {
    return p->f304 != 0 && (p->f312 != 0 || p->f288->f0 != 0);
}
void fn_8007C3BC(P7C3BC *p, f32 dt) {
    if (p->f316 != 0) {
        if (p->f308 != 0 && p->f320 != 0) {
            Key7C3BC k;
            O7C3BC *o;
            fn_800F6E88(&k, &p->f296->f12[p->f324]);
            o = fn_80233550(lbl_8035B374, &k);
            if (o) {
                if (p->f304 == 0 || (p->f304 != 0 && (p->f312 != 0 || p->f288->f0 != 0))) {
                    fn_8023F5E8(p, p->f328);
                } else {
                    fn_8023F5E8(p, 0);
                }
                if (p->f292 != 0) fn_8024118C(p, p->f292, 0);
                o->m39(p->f224, 0, lbl_8035F8E8, lbl_8035F8E8, lbl_8035F8EC);
            }
            p->f324 = (p->f324 + 1) % p->f320;
            if (p->f308 != 0 && p->f320 != 0) {
                fn_802490E0(p, 0, p->f300->f12[p->f324]);
            }
            p->f316 = 0;
        } else {
            p->f316 = 1;
        }
    }
    fn_8023FE08(p, dt);
}

} /* extern "C" */

} /* namespace m8007C3BC */

namespace m8007C550 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_80241E0C(void);

void fn_8007C550(s32 param_1) {
    *(u32 *)(param_1 + 0x118) = 0;
    *(u32 *)(param_1 + 0x11c) = 0;
    *(u32 *)(param_1 + 0x120) = 0;
    *(u32 *)(param_1 + 0x124) = 0;
    *(u32 *)(param_1 + 0x128) = 0;
    *(u32 *)(param_1 + 300) = 0;
    *(u32 *)(param_1 + 0x130) = 0;
    *(u32 *)(param_1 + 0x134) = 0;
    *(u32 *)(param_1 + 0x138) = 1;
    *(u32 *)(param_1 + 0x13c) = 0;
    *(u32 *)(param_1 + 0x140) = 0;
    *(u32 *)(param_1 + 0x144) = 0;
    *(u32 *)(param_1 + 0x148) = 0;
    fn_80241E0C();
}

} /* extern "C" */

} /* namespace m8007C550 */

namespace m8007C5AC {
extern "C" {
/* Functions from 0x8007C5AC to 0x8007C668, found by decomp-toolkit. */

extern s32 lbl_802C3040[];
extern char lbl_803592D0[4];
extern char lbl_803592D4[4];

extern char lbl_802986EC[];
extern char lbl_802986F8[];
extern char lbl_80298704[];
extern char lbl_8035F8C8[];
extern char lbl_8035F8D0[];
extern char lbl_8035F8D8[];
extern char lbl_8035F8E0[];

void fn_8007C5AC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2C) = M2C_FIELD(arg0, s32 *, 0x54) = 7;
    M2C_FIELD(arg0, s32 *, 0x68) = 2;
    M2C_FIELD(arg0, s32 *, 0x5C) = 1;
    M2C_FIELD(arg0, s32 *, 0x80) = 1;
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    M2C_FIELD(arg0, s32 *, 0x94) = 0;
    M2C_FIELD(arg0, void **, 0x58) = m8007BF5C::data_22C;
    M2C_FIELD(arg0, void **, 0x28) = m8007BF5C::data_248;
    M2C_FIELD(arg0, void **, 0x30) = m8007BF5C::data_29C;
    M2C_FIELD(arg0, void **, 0x6C) = lbl_803592D4;
    M2C_FIELD(arg0, void **, 0x78) = &m8007BF5C::data_21C;
    M2C_FIELD(arg0, void **, 0xC4) = lbl_803592D0;
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    M2C_FIELD(arg0, s32 *, 0xF4) = 0;
    M2C_FIELD(arg0, s32 *, 0xFC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10C) = 0;
    M2C_FIELD(arg0, s32 *, 0x118) = 0;
    M2C_FIELD(arg0, s32 *, 0x11C) = 0;
    M2C_FIELD(arg0, s32 *, 0x120) = 0;
    M2C_FIELD(arg0, s32 *, 0x124) = 0;
    M2C_FIELD(arg0, s32 *, 0x128) = 0;
    M2C_FIELD(arg0, s32 *, 0x12C) = 0;
    M2C_FIELD(arg0, s32 *, 0x130) = 0;
    M2C_FIELD(arg0, s32 *, 0x134) = 0;
    M2C_FIELD(arg0, s32 *, 0x138) = 1;
    M2C_FIELD(arg0, s32 *, 0x13C) = 0;
    M2C_FIELD(arg0, s32 *, 0x140) = 0;
    M2C_FIELD(arg0, s32 *, 0x144) = 0;
    M2C_FIELD(arg0, s32 *, 0x148) = 0;
}

} /* extern "C" (c unit) */
} /* namespace m8007C5AC */
