// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E68B0[];
void __ct__9C8012C6B4Fv(void);

} /* extern "C" */

extern "C" {
void __ct__9C80154268Fv(int);
}
struct C8012C6B4 { char pad[0x4]; C8012C6B4(void); ~C8012C6B4(); };
struct C801544CC : C8012C6B4 {  C801544CC(void); };

C801544CC::C801544CC() : C8012C6B4() {
    *(u8 **)((char *)this + 0x28) = lbl_802E68B0;
    __ct__9C80154268Fv((int)((char *)this + 0x2c));
}
