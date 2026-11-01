// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct T { u8 pad[12]; f32 *v; };
struct T2 { struct { u8 pad[16]; u32 n; } *h; u8 pad[8]; f32 *v; };
struct P {
    u8 pad0[96];
    s32 t96;
    u8 pad100[184];
    f32 *f284;
    u8 pad288[8];
    s32 i296;
    s32 i300;
    u8 pad304[16];
    T *t320;
    T2 *t324;
    u32 n328;
    u32 i332;
};
extern char lbl_80360098[4], lbl_8036009C[8];
extern char lbl_80299040[];
void fn_802494A4(P *, int);
void fn_802490E0(P *, int, f32);
void fn_80249008(P *, int);
void *fn_8023F4A0(P *, char *, char *, char *, int);

static inline void step(P *p) {
    fn_802490E0(p, 0, p->t320->v[p->i332]);
    *p->f284 = p->t324->v[p->i332];
    p->i332++;
    if (p->i332 >= p->n328) p->i332 = 0;
}

void fn_8003F140();
void fn_8003F18C();
void fn_8003F1DC();
void fn_8003FB68();
void fn_8003FB6C();
void fn_8008A8A8(P *p, s32 n);
void fn_8008AB20();
void fn_8008ADA4();
void fn_8008AE00();
void fn_8008AEFC();
void fn_8008AF98();
void fn_8008B0AC();
void fn_8023D198();
void fn_8023F5F4();
void fn_80240054();
void fn_80241D80();
void fn_80242210();
void fn_80249AC4();
extern char lbl_80299028[];
extern char lbl_80299034[];
extern char lbl_80360060[];
extern char lbl_80360078[];
extern char lbl_80360080[];
extern char lbl_80360088[];
extern char lbl_80360090[];
void *lbl_802C65E0[174] = { (void *)0x0, (void *)0xFA, (void *)0x1F4, (void *)0x2EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449, (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52, (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F, (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C, (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x0, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944, (void *)0x0, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952, (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454, (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C, (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0xBF800000, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0x3F800000, (void *)0xBF800000, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x40, (void *)0x43, (void *)0x46, (void *)0x49, (void *)0x4C, (void *)0x4F, (void *)0x52, (void *)0x55, (void *)0x1E, (void *)0x21, (void *)0x24, (void *)0x27, (void *)0x2A, (void *)0x2D, (void *)0x30, (void *)0x33, (void *)0x0, (void *)0x0, (void *)0x0, (void *)&lbl_80360060, (void *)&lbl_80360078, (void *)&lbl_80360080, (void *)&lbl_80360088, (void *)&lbl_80360090, (void *)&lbl_80299028, (void *)&lbl_80299034, (void *)&lbl_80360060, (void *)&lbl_80360078, (void *)0x0, (void *)0x1, (void *)&lbl_80360080, (void *)0x1, (void *)0x1, (void *)&lbl_80360088, (void *)0x2, (void *)0x1, (void *)&lbl_80360090, (void *)0x3, (void *)0x1, (void *)&lbl_80299028, (void *)0x4, (void *)0x1, (void *)&lbl_80299034, (void *)0x5, (void *)0x1, (void *)&lbl_80360060, (void *)0x6, (void *)0x1, (void *)0x0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6 };
static s32 tA[7] = { 0, 2, 3, 5, 7, 9, 11 };
static s32 tB[13] = { 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
static s32 tC[13] = { 0, 1, 1, 1, 2, 1, 3, 1, 4, 1, 5, 1, 6 };
void *lbl_802C691C[20] = { (void *)0x0, (void *)0x0, (void *)&fn_8008AF98, (void *)&fn_80249AC4, (void *)&fn_8008AEFC, (void *)&fn_80242210, (void *)&fn_8008AE00, (void *)&fn_8023D198, (void *)&fn_8008B0AC, (void *)&fn_8008A8A8, (void *)&fn_80241D80, (void *)&fn_8003F140, (void *)&fn_8003F18C, (void *)&fn_8008AB20, (void *)&fn_8003FB68, (void *)&fn_8008ADA4, (void *)&fn_8003F1DC, (void *)&fn_80240054, (void *)&fn_8023F5F4, (void *)&fn_8003FB6C };
void fn_8008A8A8(P *p, s32 n) {
    s32 *q;
    s32 i;
    s32 t;
    t = p->t96;
    i = tA[n];
    for (q = tB + i; t > 0; q++) {
        if (*q > t) break;
        t -= tB[i++];
    }
    switch (tC[i]) {
    case 0:
        p->t320 = (T *)fn_8023F4A0(p, lbl_80360098, lbl_80360098, lbl_8036009C, 1);
        p->t324 = (T2 *)fn_8023F4A0(p, lbl_80360098, lbl_80360098, lbl_80299040, 1);
        p->n328 = p->t324->h->n;
        p->i332 = 0;
        fn_802494A4(p, 1);
        break;
    case 1:
        return;
    case 2:
        p->i296 = 1;
        step(p);
        break;
    case 3:
        p->i296 = 0;
        fn_80249008(p, 0);
        break;
    case 4:
        p->i300 = 1;
        step(p);
        break;
    case 5:
        p->i300 = 0;
        fn_80249008(p, 0);
        break;
    case 6:
        step(p);
        break;
    case 7:
        break;
    }
}

} /* extern "C" */
