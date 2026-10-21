// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EFEE8[];
void fn_802124FC(void *);

/* The base's ctor (0x8021157C) and dtor (0x8021151C) carry different synthetic class names, so the base is
   modelled as two bases: an empty one owning the ctor, then one owning the data and the dtor (both at
   offset 0). The extab DESTROYBASE then names __dt__9C8021151CFv and covers only the body's call. */
struct C8021157C { C8021157C(void); };
struct C8021151C { u8 d[0x6b8]; ~C8021151C(); };
struct C802120C0 : C8021157C, C8021151C { C802120C0(void); };

C802120C0::C802120C0() {
    *(u8 **)((char *)this + 0x6b8) = lbl_802EFEE8;
    fn_802124FC((char *)this + 0x6bc);
    *(u32 *)((char *)this + 0x6e0) = 0;
    *(u32 *)((char *)this + 0x6e4) = 0;
    *(u32 *)((char *)this + 0x6e8) = 0;
}

} /* extern "C" */
