// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C80225CBC[];
void __ct__9C80239B40Fv(void);
void __ct__9C8023D65CFv(void);

} /* extern "C" */

extern "C" {
void fn_80225264(void *);
}
struct C80239B40 { C80239B40(); ~C80239B40(); virtual void vf(); };
struct C8023D65C { char pad[4]; C8023D65C(); ~C8023D65C(); };
struct C80225CBC : C80239B40 { char pad2[0x2a8 - 4]; C8023D65C m; C80225CBC(); virtual void vfx(); };

C80225CBC::C80225CBC() {
    fn_80225264(this);
}
