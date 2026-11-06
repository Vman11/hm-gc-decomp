#include "common.h"

extern "C" {
void *memset(void *d, int c, u32 n);
struct G21 { u32 base; u32 size; u8 p8[4]; s32 fc; u8 p10[0x4010 - 0x10]; u32 b2; u8 p4014[0x6014 - 0x4014]; u32 s2; u8 p6018[0x8018 - 0x6018]; };
extern G21 lbl_8034E908;
extern s32 lbl_8035B19C;
extern s32 lbl_8035B198;
u32 fn_800C4FE8(s32 a, s32 b);
void fn_800C6CFC(void);
void fn_800C50AC(s32 a);
void fn_80273E10(void *a, u32 b, u32 n);
void fn_802743F8(u32 a, u32 n);
void fn_802078EC(void *a, u32 sz) {
    memset(&lbl_8034E908, 0, sizeof(G21));
    G21 *g = &lbl_8034E908;
    g->base = fn_800C4FE8(0, 0);
    g->size = sz;
    fn_800C6CFC();
    lbl_8035B19C = 0;
    lbl_8034E908.fc = 1;
    lbl_8034E908.b2 = *(volatile u32 *)&lbl_8034E908.base;
    lbl_8034E908.s2 = *(volatile u32 *)&g->size;
    fn_800C50AC(1);
    fn_80273E10(a, lbl_8034E908.base + sz, 0x1000000 - sz);
    fn_802743F8(0x7e000000, 0x1000000 - sz);
    lbl_8035B198 = 1;
}
}
