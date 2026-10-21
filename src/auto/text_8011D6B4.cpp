// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { u32 v[3]; } T12_8011D6B4;

extern "C" {
extern T12_8011D6B4 lbl_8029BF10;
extern u8 lbl_802AFC68[];
extern u8 lbl_802E3E68[];
}

struct C80119180 {
    u8 d[0x10];
    C80119180();
    ~C80119180();
};

struct C802AFC68 {
    void *vt;
    C802AFC68() { vt = lbl_802AFC68; }
};

struct C802E3E68 : C802AFC68 {
    C802E3E68() { vt = lbl_802E3E68; }
};

struct C8011D6B4 : C802E3E68 {
    T12_8011D6B4 t;
    s32 f10;
    s32 f14;
    s32 f18;
    s32 f1c;
    s32 f20;
    s32 f24;
    C80119180 m28;
    C80119180 m38;
    C8011D6B4();
};

C8011D6B4::C8011D6B4() : f20(0), f24(0) {
    f10 = 0;
    f18 = 0;
    f1c = 0;
    t = lbl_8029BF10;
    f14 = 0;
}
