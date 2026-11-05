#include "common.h"
extern "C" {
extern void *lbl_8035B738;
extern u8 lbl_802F2554[];
extern volatile f32 lbl_803666B0;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
} /* extern "C" */
struct C80261CB0 {
    C80261CB0();
};
struct N_80256DFC : C80261CB0 {
    u8 *vt;
    u8 pad4[0x4C];
    f32 f50, f54, f58, f5c, f60, f64, f68, f6c, f70;
    u8 pad74[0x40];
    u32 fb4, fb8, fbc;
    N_80256DFC() {
        vt = lbl_802F2554;
        fb4 = 0;
        fbc = 0;
        fb8 = 0;
        f50 = lbl_803666B0;
        f54 = lbl_803666B0;
        f58 = lbl_803666B0;
        f68 = lbl_803666B0;
        f6c = lbl_803666B0;
        f70 = lbl_803666B0;
        f5c = lbl_803666B0;
        f60 = lbl_803666B0;
        f64 = lbl_803666B0;
    }
};
/* The array ctor is __ct__9C80257738Fv but its dtor is __dt__9C800604C4Fv (one class, two names in
 * symbols.txt): the dtor reloc cannot match until those symbols are unified. */
struct C80257738 {
    u8 d[0xC0];
    C80257738();
    ~C80257738();
};
extern "C" {

void *fn_80256DFC(s32 n) {
    if (n <= 1) {
        N_80256DFC *p;
        if (!lbl_8035B738) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B738);
        p = new N_80256DFC;
        fn_800F7E98();
        if (!p) fn_800604C4(-4, 0, 0, 0);
        return p;
    } else {
        C80257738 *p;
        if (!lbl_8035B738) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B738);
        p = new C80257738[n];
        fn_800F7E98();
        if (!p) fn_800604C4(-4, 0, 0, 0);
        return p;
    }
}

} /* extern "C" */
