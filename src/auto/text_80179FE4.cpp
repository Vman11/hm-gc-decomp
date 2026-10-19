// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C80179FE4[];
void fn_8014AAE4(int);
void __ct__9C8018E2ACFv(void);

extern "C" {
}
struct C8018E2AC { char pad[0x4]; C8018E2AC(void); ~C8018E2AC(); };
struct C80179FE4 : C8018E2AC {  C80179FE4(void); };

C80179FE4::C80179FE4() : C8018E2AC() {
    *(u8 **)((char *)this + 0xc) = __vt__9C80179FE4;
    fn_8014AAE4((int)((char *)this + 0x10));
}

} /* extern "C" */
