#include "common.h"
extern "C" {
extern u32 lbl_80330828[];
extern u32 lbl_80330668[];
extern u32 lbl_80330688[];
extern u32 lbl_803306A8[];
extern u32 lbl_803306C8[];
extern u32 lbl_803306E8[];
extern u32 lbl_80330708[];
extern u32 lbl_80330728[];
extern u32 lbl_80330748[];
extern u32 lbl_80330768[];
extern u32 lbl_80330788[];
extern u32 lbl_803307A8[];
extern u32 lbl_803307C8[];
extern u32 lbl_803307E8[];
extern u32 lbl_80330808[];
extern u32 lbl_80330848[];
extern u32 lbl_80330868[];
extern u32 lbl_80330888[];
extern u8 lbl_803308B4[];
extern void *lbl_8035B054;
extern void *lbl_8035B064;
extern u32 lbl_8035B058;
extern u8 *lbl_8035B060;
typedef struct N_801DDF00 { s32 f0; u8 f4[8]; struct N_801DDF00 *fc; void *f10; s32 f14; } N_801DDF00;
extern N_801DDF00 *lbl_8035B05C;
void fn_800F8E38(void *, void *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void *__nwa__FUl(u32);
void fn_800F87F0(void *, void *, s32);
void *memcpy(void *, const void *, u32);

void fn_801DDF00(void) {
    N_801DDF00 *n;
    lbl_80330828[6] = 1;
    lbl_80330668[6] = 1;
    lbl_80330688[6] = 1;
    lbl_803306A8[6] = 1;
    lbl_803306C8[6] = 1;
    lbl_803306E8[6] = 1;
    lbl_80330708[6] = 1;
    lbl_80330728[6] = 1;
    lbl_80330748[6] = 1;
    lbl_80330768[6] = 1;
    lbl_80330788[6] = 1;
    lbl_803307A8[6] = 1;
    lbl_803307C8[6] = 1;
    lbl_803307E8[6] = 1;
    lbl_80330808[6] = 1;
    lbl_80330848[6] = 1;
    lbl_80330868[6] = 1;
    lbl_80330888[6] = 1;
    fn_800F8E38(lbl_803308B4, lbl_8035B054);
    if (lbl_8035B064 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B064);
    lbl_8035B060 = (u8 *)__nwa__FUl(lbl_8035B058 << 3);
    fn_800F7E98();
    if (lbl_8035B060 == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    s32 i = 0;
    for (n = lbl_8035B05C; n != 0; n = n->fc) {
        fn_800F87F0(lbl_803308B4, n->f4, n->f0);
        if (n->f10 != 0) {
            memcpy(lbl_8035B060 + i * 8, n->f10, n->f14 << 3);
            i += n->f14;
        }
    }
}
}
