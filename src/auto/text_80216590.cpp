// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct C80210CEC {
    C80210CEC();
    ~C80210CEC();
    u32 f0;
    u8 *f4;
};
struct V80216590 { u8 pad[96]; virtual void v0(); virtual void f(); };
extern "C" {
extern u8 *lbl_8035B210;
extern u8 *lbl_8035A9F4;
extern u32 lbl_803658A8;
s32 fn_802109E8(C80210CEC *, void *, s32);
void fn_802108B4(C80210CEC *, void *, u32, u32 *);
void fn_80210938(C80210CEC *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void *__nwa__FUl(u32);

static inline u32 hfree(u8 *h) { return *(u32 *)(h + 8) - *(u32 *)(h + 12); }
void fn_80216590(u8 *p) {
    C80210CEC obj;
    u32 v = 0;
    if (fn_802109E8(&obj, *(void **)(p + 60), 2) != 0) return;
    *(u32 *)(p + 48) = *(u32 *)(obj.f4 + 4);
    if (*(u32 *)(p + 48) > hfree(lbl_8035B210)) {
        if (lbl_8035A9F4 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035A9F4);
        *(void **)(p + 44) = __nwa__FUl(*(u32 *)(p + 48));
        fn_800F7E98();
        if (*(void **)(p + 44) == 0) fn_800604C4(-4, 0, 0, 0);
    } else {
        if (lbl_8035B210 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B210);
        *(void **)(p + 44) = __nwa__FUl(*(u32 *)(p + 48));
        fn_800F7E98();
        if (*(void **)(p + 44) == 0) fn_800604C4(-4, 0, 0, 0);
    }
    fn_802108B4(&obj, *(void **)(p + 44), *(u32 *)(p + 48), &v);
    fn_80210938(&obj);
    ((V80216590 *)p)->f();
    *(u32 *)(p + 80) |= lbl_803658A8;
}

} /* extern "C" */
