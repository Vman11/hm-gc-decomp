// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E25CC[];
void __ct__9C8010C41CFv(void);

} /* extern "C" */

extern "C" {
void __ct__9C800FB754Fv(int);
void __ct__9C800FBA24Fv(int);
}
struct C8010C41C { char pad[0x4]; C8010C41C(void); ~C8010C41C(); };
struct C8010A664 : C8010C41C {  C8010A664(void); };

C8010A664::C8010A664() : C8010C41C() {
    *(u8 **)((char *)this + 0x8) = lbl_802E25CC;
    __ct__9C800FBA24Fv((int)((char *)this + 0xc));
    __ct__9C800FB754Fv((int)((char *)this + 0x20));
    *(u32 *)((char *)this + 0x34) = 0;
    *(u32 *)((char *)this + 0x38) = 0;
}
