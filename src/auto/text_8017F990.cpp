// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C80199A84 {
    u8 b[0xc];
    C80199A84();
};
struct wA_VB { u8 pad[0x10]; virtual void v0(); virtual void clear(); };
struct wA_T30 {
    u8 pad[0x30];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6();
    virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual u32 get();
};
extern void *lbl_8035ADD4;
void fn_800604C4(s32 code, s32 a, s32 b, s32 c);
void fn_800F7EC0(void *heap);
void fn_800F7E98(void);
void fn_8018EF7C(void *p);
void fn_8018F3D4(void *p);
void fn_800F9638(void *p);
void fn_800F9654(void *p, u8 *v);
void fn_800F994C(void *p, u32 n);
void fn_8018F124(void *p, u32 n, s32 z);

void fn_8017F990(u8 *p, u32 a, wA_T30 *b, u32 c, u32 d, u32 *cfg) {
    u32 v0, v1, v2, v3, v4, v5, v6, v7, v8, v9;
    u8 tmp;

    if (*(wA_T30 **)(p + 4) != 0) {
        if (*(u8 **)(p + 0x254) != 0) {
            delete[] *(u8 **)(p + 0x254);
        }
        if (*(C80199A84 **)(p + 0x250) != 0) {
            delete[] *(C80199A84 **)(p + 0x250);
        }
        fn_8018EF7C(p + 0x224);
        fn_8018EF7C(p + 0x21C);
        fn_8018F3D4(p + 0x210);
        fn_800F9638(p + 0x1F8);
        ((wA_VB *)(p + 0x1D4))->clear();
        ((wA_VB *)(p + 0x198))->clear();
        ((wA_VB *)(p + 0xE4))->clear();
        ((wA_VB *)(p + 0x15C))->clear();
        ((wA_VB *)(p + 0x120))->clear();
        fn_800F9638(p + 0xCC);
        ((wA_VB *)(p + 0xA8))->clear();
        fn_800F9638(p + 0x90);
        ((wA_VB *)(p + 0x30))->clear();
        ((wA_VB *)(p + 0x6C))->clear();
        fn_800F9638(p + 0x54);
        *(u32 *)(p + 4) = 0;
        *(u32 *)(p + 8) = 0;
        *(u32 *)(p + 0xc) = 0;
        *(u32 *)(p + 0x10) = 0;
        *(u32 *)(p + 0x14) = 0;
        *(u32 *)(p + 0x22c) = 1;
        *(u32 *)(p + 0x248) = 0;
        *(u32 *)(p + 0x24c) = 0;
        *(u32 *)(p + 0x230) = 0;
        *(u32 *)(p + 0x240) = 0;
        *(u32 *)(p + 0x244) = 0;
        *(u32 *)(p + 0x250) = 0;
        *(u32 *)(p + 0x254) = 0;
        *(u32 *)(p + 600) = 0;
        *(u32 *)(p + 0x260) = 0;
        *(u32 *)(p + 0x25c) = 0;
        *(u32 *)(p + 0x264) = 0;
        *(u32 *)(p + 0x268) = 0;
    }
    *(u32 *)(p + 0) = a;
    *(u32 *)(p + 0xc) = c;
    *(u32 *)(p + 0x10) = d;
    *(wA_T30 **)(p + 4) = b;
    *(u32 *)(p + 8) = (*(wA_T30 **)(p + 4))->get();
    tmp = 0;
    if (cfg != 0) {
        v0 = cfg[0];
        v1 = cfg[1];
        v2 = cfg[2];
        v3 = cfg[3];
        v4 = cfg[4];
        v5 = cfg[5];
        v6 = cfg[6];
        v7 = cfg[7];
        v8 = cfg[8];
        v9 = cfg[9];
        *(u32 *)(p + 0x14) = cfg[10];
    } else {
        *(u32 *)(p + 0x14) = 0;
        v0 = 0x20;
        v1 = 4;
        v2 = 0x40;
        v3 = 0x40;
        v4 = 0x40;
        v5 = 0x40;
        v6 = 0x40;
        v7 = 0x40;
        v8 = 0x40;
        v9 = 0x40;
    }
    fn_800F9654(p + 0x18, &tmp);
    fn_800F994C(p + 0x30, v8);
    fn_800F9654(p + 0x54, &tmp);
    fn_800F994C(p + 0x6C, v9);
    fn_800F9654(p + 0x90, &tmp);
    fn_800F994C(p + 0xA8, v2);
    fn_800F9654(p + 0xCC, &tmp);
    fn_800F994C(p + 0xE4, v3);
    fn_800F9654(p + 0x108, &tmp);
    fn_800F994C(p + 0x120, v4);
    fn_800F9654(p + 0x180, &tmp);
    fn_800F994C(p + 0x198, v5);
    fn_800F9654(p + 0x1BC, &tmp);
    fn_800F994C(p + 0x1D4, v6);
    fn_800F9654(p + 0x144, &tmp);
    fn_800F994C(p + 0x15C, v7);
    fn_800F9654(p + 0x1F8, &tmp);
    *(u32 *)(p + 0x264) = v0;
    *(u32 *)(p + 0x268) = v1;
    fn_8018F124(p + 0x21C, v1, 0);
    fn_8018F124(p + 0x224, v1, 0);
    if (lbl_8035ADD4 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035ADD4);
    *(C80199A84 **)(p + 0x250) = new C80199A84[0x200];
    fn_800F7E98();
    if (*(void **)(p + 0x250) == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    if (lbl_8035ADD4 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035ADD4);
    *(u8 **)(p + 0x254) = new u8[0x8000];
    fn_800F7E98();
    if (*(void **)(p + 0x254) == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
}

} /* extern "C" */
