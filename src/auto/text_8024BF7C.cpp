// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
extern u8 lbl_802F1E68[];
void __ct__9C8023D2ACFv(void);
struct VCall_fn_8024BF7C_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void m(); };

extern "C" {
void m(void);
}
struct C8023D2AC { char pad[0x4]; C8023D2AC(void); ~C8023D2AC(); };
struct C8024BF7C : C8023D2AC {  C8024BF7C(void); };

C8024BF7C::C8024BF7C() : C8023D2AC() {
    (*(u32 *)this) = (s32)lbl_802F1E68;
    ((VCall_fn_8024BF7C_0 *)(this))->m();
}
}
