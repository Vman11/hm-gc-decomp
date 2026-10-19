// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 fn_8016F8D0[];
extern u8 fn_8016F964[];
extern u8 lbl_802E6E98[];
void __construct_array(int, int, int, int, int);
void __ct__9C80130DA8Fv(void);

extern "C" {
}
struct C80130DA8 { char pad[0x4]; C80130DA8(void); ~C80130DA8(); };
struct C8015D9A4 : C80130DA8 {  C8015D9A4(void); };

C8015D9A4::C8015D9A4() : C80130DA8() {
    *(u8 **)((char *)this + 0x44) = lbl_802E6E98;
    __construct_array((int)((char *)this + 0x48), (int)(fn_8016F964), (int)(fn_8016F8D0), (int)(0x1c), (int)(8));
    *(u32 *)((char *)this + 0x128) = 0;
}

} /* extern "C" */
