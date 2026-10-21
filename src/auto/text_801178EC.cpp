// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {
extern u8 lbl_802E3080[];
extern volatile f32 lbl_80328870[];
extern volatile f32 lbl_80363A68;
extern volatile f32 lbl_80363A74;
void fn_801188F8(void *);
void *memset(void *, s32, u32);
}

struct C8011F770 {
    u8 b[0xD0];
    C8011F770();
    ~C8011F770();
};

// vtable pointer (stored at +0xD0 between the base and the member constructors)
struct V801178EC {
    u8 *vt;
    V801178EC() { vt = lbl_802E3080; }
};

struct C801188F8 {
    u8 b[0x28];
    C801188F8() { fn_801188F8(this); }
    ~C801188F8();
};

struct C801178EC : C8011F770 {
    V801178EC v;
    s32 fD4;
    C801188F8 mD8;
    u8 b100[0x10];
    u8 b110[0x10];
    C801178EC();
};

C801178EC::C801178EC() {
    f32 v;
    f32 st;
    v = lbl_80363A68;
    *(s32 *)((u8 *)this + 0x10) = 5;
    lbl_80328870[0] = lbl_80363A68;
    st = lbl_80363A74;
    v += st;
    lbl_80328870[1] = v;
    v += st;
    lbl_80328870[2] = v;
    v += st;
    lbl_80328870[3] = v;
    v += st;
    lbl_80328870[4] = v;
    v += st;
    lbl_80328870[5] = v;
    v += st;
    lbl_80328870[6] = v;
    v += st;
    lbl_80328870[7] = v;
    memset(b100, 0, 16);
    memset(b110, 0, 16);
    fD4 = 0;
}
