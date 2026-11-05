#include "common.h"

extern "C" {

struct P801F7518 {
    u8 pad0[0xC];
    s32 fc;
    u8 pad10[0x28];
    u8 f38[0x10];
    f32 f48, f4c, f50, f54, f58, f5c, f60, f64;
    s32 f68;
    f32 f6c;
};
f32 fn_800FB2E0(void *);
void fn_80121CE8(void *, void *);
void fn_801EF720(P801F7518 *, void *, u32);

void fn_801F77F8(void);
void fn_801EF9A0(void);
void fn_801F7634(void);
void fn_801F7750(void);
void fn_801F7430(void);
void fn_801EF6AC(void);
void fn_801EF648(void);
void fn_801EF644(void);
void fn_801F7694(void);
void fn_801F7518(P801F7518 *p, void *rd, u32 msg);
void *__vt__9C801F786C[13] = { 0, 0, (void *)fn_801F77F8, (void *)fn_801F7518, (void *)fn_801EF9A0, (void *)fn_801F7634, (void *)fn_801F7750, (void *)fn_801F7430, (void *)fn_801EF6AC, (void *)fn_801EF648, (void *)fn_801EF644, 0, (void *)fn_801F7694 };

void fn_801F7518(P801F7518 *p, void *rd, u32 msg) {
    switch (msg) {
    case 0x97:
        p->f48 = fn_800FB2E0(rd);
        p->f4c = fn_800FB2E0(rd);
        break;
    case 0x92:
        fn_80121CE8(p->f38, rd);
        break;
    case 0x93:
        p->f50 = fn_800FB2E0(rd);
        break;
    case 0x98:
        p->f58 = fn_800FB2E0(rd);
        p->f5c = fn_800FB2E0(rd);
        p->f68 = 1;
        break;
    case 0x99:
        p->f60 = fn_800FB2E0(rd);
        p->f64 = fn_800FB2E0(rd);
        break;
    case 0x9a:
        p->f6c = fn_800FB2E0(rd);
        break;
    case 0x9f:
        p->fc = 0x21;
        break;
    case 0xa0:
        p->fc = 0x23;
        break;
    case 0xa1:
        p->fc = 0x22;
        break;
    case 0xa2:
        p->fc = 0x24;
        break;
    default:
        fn_801EF720(p, rd, msg);
        break;
    }
}

} /* extern "C" */
