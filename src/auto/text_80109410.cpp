// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {
extern u8 lbl_802E2548[];
}

struct C800F92E8 {
    u8 b[0x10];
    C800F92E8();
    ~C800F92E8();
};

struct C80109020 {
    C80109020();
    ~C80109020();
};

extern "C" void fn_80108F90(C80109020 *);

struct C80109410 : C800F92E8 {
    u8 *vt;
    C80109020 m;
    C80109410();
};

C80109410::C80109410() : vt(lbl_802E2548) {
    fn_80108F90(&m);
}
