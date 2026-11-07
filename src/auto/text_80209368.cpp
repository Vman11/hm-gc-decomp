#include "common.h"

extern "C" {

/* NonMatching draft (wMF): DIFF 15 / SDIFF 9. Left: target materializes lbl_802EFC40 in r4 at the top (lis r4/addi r4,r4) and has no extra this copy; the vt=9A0 store before the member ctor is modeled by a comma in the mem-initializer. To link it also needs dtor_80208BF0 renamed to __dt__9C80208C80Fv and the current __dt__9C80208C80Fv (0x8020EA30, the FC40 base dtor) renamed (e.g. __dt__9C8020EA30Fv). */
extern u8 lbl_802EF934[], lbl_802EFC40[], lbl_802EF9A0[];
struct C8020EA30_0 { void *vt; C8020EA30_0() { vt = lbl_802EF934; } ~C8020EA30_0(); };
struct C8020EA30 : C8020EA30_0 { C8020EA30() { vt = lbl_802EFC40; } ~C8020EA30(); };
struct C80208C80 { C80208C80(int, int, int); ~C80208C80(); u8 pad[0x44]; };
struct C80208924 { C80208924(); u8 pad[0x18]; };
struct C80209368 : C8020EA30 { C80208C80 m; C80208924 m2; C80209368(); };
static inline int U() { int x; return x; }
C80209368::C80209368() : m((vt = lbl_802EF9A0, (int)lbl_802EFC40), (int)this, U()) {}

} /* extern "C" */
