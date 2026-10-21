#include "common.h"

extern "C" {

struct C80158854 { u8 c[4]; };
struct E80158854 { u8 b[0x30]; };
struct S80158854 {
    u8 pad0[0x38];
    C80158854 col[4];
    u8 pad48[0x46c - 0x48];
    u8 f46c;
    u8 pad46d[0x478 - 0x46d];
    u32 f478;
    u32 f47c;
    u32 f480;
    u32 f484;
    u32 f488;
    u8 f48c;
    u8 pad48d[3];
    u32 f490;
    u8 pad494[0x4b4 - 0x494];
    u8 f4b4;
    u8 pad4b5[3];
    u32 f4b8;
    u8 f4bc;
    u8 pad4bd[3];
    u32 f4c0;
    u32 f4c4;
    u32 f4c8;
    u32 f4cc;
    u32 f4d0;
    u8 pad4d4[4];
    E80158854 objs[16];
};

void fn_800D61A0(u8);
void fn_800D6DAC(u32);
void fn_800D7C68(s32);
void fn_800D7CA4(s32, u8, s32, u32, u32, u32, u32);
void fn_800D9188(u32, C80158854 *);
void fn_800D937C(u32, u8, s32, u32, u8);
void fn_800D9958(u32, u32, u32, u32);
void fn_800D9A04(u8, u32, u8);
void fn_800D9A38(s32);
void fn_80157A10(S80158854 *);
void fn_80175634(E80158854 *, u32);

void fn_80158854(S80158854 *p) {
    u32 i;
    C80158854 c;

    for (i = 0; i < 4; i++) {
        p->col[i].c[0] = 0xff;
        p->col[i].c[1] = 0xff;
        p->col[i].c[2] = 0xff;
        p->col[i].c[3] = 0xff;
        c = p->col[i];
        fn_800D9188(i, &c);
    }
    fn_800D9958(p->f4c0, p->f4c4, p->f4c8, p->f4cc);
    fn_800D9A04(p->f4b4, p->f4b8, p->f4bc);
    fn_800D937C(p->f488, p->f48c, 0, p->f488, p->f48c);
    fn_800D6DAC(p->f490);
    fn_800D61A0(p->f4d0);
    fn_800D7C68(1);
    fn_800D7CA4(0, p->f46c, 0, p->f478, p->f47c, p->f480, p->f484);
    fn_800D7CA4(2, 0, 0, 1, 0, 2, 2);
    fn_800D9A38(0);
    fn_80157A10(p);
    for (i = 0; i < 16; i++) {
        fn_80175634(&p->objs[i], i);
    }
}

} /* extern "C" */
