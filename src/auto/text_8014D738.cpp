// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E6680[];
void __ct__9C80120164Fv(void);

} /* extern "C" */

extern "C" {
void fn_80148310(int);
void fn_8014CB5C(int);
void fn_8015A948(int);
}
struct C80120164 { char pad[0x4]; C80120164(void); ~C80120164(); };
struct C8014D738 : C80120164 {  C8014D738(void); };

C8014D738::C8014D738() : C80120164() {
    *(u8 **)((char *)this + 0x30) = lbl_802E6680;
    fn_8014CB5C((int)((char *)this + 0x34));
    fn_80148310((int)((char *)this + 0x58));
    fn_8015A948((int)((char *)this + 0x78));
    *(u32 *)((char *)this + 0x20) = 0;
    *(u32 *)((char *)this + 0x6c) = 0;
    *(u32 *)((char *)this + 0x70) = 0;
    *(u32 *)((char *)this + 0x74) = 0;
}
