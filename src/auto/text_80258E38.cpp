// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C80258E38[];
void __ct__9C80261CB0Fv(void);

} /* extern "C" */

extern "C" {
void fn_80261AAC(int);
}
struct C80261CB0 { C80261CB0(void); ~C80261CB0(); virtual void vf(); };
struct C80258E38 : C80261CB0 {  C80258E38(void); virtual void vfx(); };

C80258E38::C80258E38() : C80261CB0() {
    fn_80261AAC((int)this);
}
