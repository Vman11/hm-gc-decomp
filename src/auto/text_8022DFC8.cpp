// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C8022DFC8[];
void fn_8022D830(int);
void __ct__9C8023D2ACFv(void);

extern "C" {
}
struct C8023D2AC { C8023D2AC(void); ~C8023D2AC(); virtual void vf(); };
struct C8022DFC8 : C8023D2AC {  C8022DFC8(void); virtual void vfx(); };

C8022DFC8::C8022DFC8() : C8023D2AC() {
    (*(u32 *)((char *)this + 0xbc)) = 0;
    (*(u32 *)((char *)this + 0xc0)) = 0;
    fn_8022D830((int)this);
}

} /* extern "C" */
