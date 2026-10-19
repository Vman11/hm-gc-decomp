// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C801EE07C[];
void __ct__9C801EFA90Fv(void);

} /* extern "C" */

extern "C" {
extern u8 lbl_802EE600[];
extern void * memset(int, int, int);
}
struct C801EFA90 { C801EFA90(void); ~C801EFA90(); virtual void vf(); };
struct C801EE07C : C801EFA90 {  C801EE07C(void); virtual void vfx(); };

C801EE07C::C801EE07C() : C801EFA90() {
    (*(u32 *)((char *)this + 0x4)) = 0x14;
    memset((int)((char *)this + 0x28), (int)(0), (int)(8));
}
