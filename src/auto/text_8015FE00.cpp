// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { u32 v[3]; } T12_8015FE00;

extern "C" {
extern T12_8015FE00 lbl_8029BF10;
extern u8 lbl_802E7028[];
void fn_802181D0(void *);
}

struct C8013352C {
    u8 b[0x30];
    C8013352C();
    ~C8013352C();
};

struct C8015FE00 : C8013352C {
    u8 *vt;
    u8 pad34[8];
    u8 o3c[0x10];
    u16 h4c;
    s32 w50;
    s32 w54;
    T12_8015FE00 t58;
    C8015FE00();
};

C8015FE00::C8015FE00() : vt(lbl_802E7028) {
    fn_802181D0(o3c);
    t58 = lbl_8029BF10;
    h4c = 0;
    w50 = 0;
    w54 = 0;
}
