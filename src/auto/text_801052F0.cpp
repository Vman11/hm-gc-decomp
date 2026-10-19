// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C80108120[];
void __dl__FPv(int);
void __dt__9C8010500CFv(int, int);

extern "C" {
extern u8 lbl_802E24B8[];
void fn_8010500C(int, int);
}
struct C8010500C { char pad[0x24]; ~C8010500C(); };
struct C80108120 : C8010500C { ~C80108120(); virtual void vfx(); };

C80108120::~C80108120() {

}

} /* extern "C" */
