// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C80078B94[];
void __ct__9C8022F98CFv(void);

} /* extern "C" */

extern "C" {
void __ct__9C80226E64Fv(int);
void __ct__9C8023D0CCFv(int);
void __ct__9C8023D65CFv(int);
void fn_800786B8(int);
}
struct C8022F98C { C8022F98C(void); ~C8022F98C(); virtual void vf(); };
struct C80226E64 { char pad[4]; C80226E64(); ~C80226E64(); };
struct C8023D65C { char pad[4]; C8023D65C(); ~C8023D65C(); };
struct C8023D0CC { char pad[4]; C8023D0CC(); ~C8023D0CC(); };
struct C80078B94 : C8022F98C { char pad0[0x33c]; C80226E64 m1; char pad2[0x124]; C8023D65C m3; char pad4[0x28]; C8023D65C m5; char pad6[0x198]; C8023D0CC m7; C80078B94(void); virtual void vfx(); };

C80078B94::C80078B94() : C8022F98C() {
    fn_800786B8((int)this);
}
