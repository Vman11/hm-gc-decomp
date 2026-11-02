/* Functions from 0x80208C80 to 0x80208CB0, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern u8 lbl_802EF934[];
extern u8 lbl_802EFC40[];
extern u8 lbl_802EF968[];

void __ct__9C80208C80Fiii(volatile unsigned int* arg0, int a, int b, int c) {
    arg0[0] = (unsigned int)lbl_802EF934;
    arg0[0] = (unsigned int)lbl_802EFC40;
    arg0[0] = (unsigned int)lbl_802EF968;
    arg0[0x10] = 0;
}

extern u8 lbl_802EF934[], lbl_802EFC40[], lbl_802EF968[];
struct A0 { void *vt; A0() { vt = lbl_802EF934; } ~A0(); }; struct A1 : A0 { A1() { vt = lbl_802EFC40; } }; struct C80208C80 : A1 { C80208C80(int, int, int); int pad[15]; int x; }; C80208C80::C80208C80(int, int, int) { vt = lbl_802EF968; x = 0; }

} /* extern "C" */
