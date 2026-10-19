// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 fn_8014CB5C[];
extern u8 lbl_802E683C[];
void __ct__9C8012C3F0Fv(void);

} /* extern "C" */

extern "C" {
void __construct_array(int, int, int, int, int);
}
struct C8012C3F0 { char pad[0x4]; C8012C3F0(void); ~C8012C3F0(); };
struct C80154268 : C8012C3F0 {  C80154268(void); };

C80154268::C80154268() : C8012C3F0() {
    *(u8 **)((char *)this + 0x74) = lbl_802E683C;
    __construct_array((int)((char *)this + 0x7c), (int)(fn_8014CB5C), (int)(0), (int)(0x24), (int)(9));
    *(u32 *)((char *)this + 0x78) = 0;
    *(u32 *)((char *)this + 0x1c0) = 0;
}
