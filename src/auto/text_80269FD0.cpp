// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F3240[];
extern void *lbl_8035B79C;
extern f32 lbl_80366D48;

struct C8023D2AC {
    C8023D2AC();
};

struct E80269FD0 {
    u32 a;
    u32 b;
    u32 c[10];
    u32 d[10];
};

struct C80269FD0 : C8023D2AC {
    u8 *vt;
    u8 pad4[16];
    E80269FD0 e[15];
    u32 f53C;
    u32 f540;
    u32 f544;
    f32 f548;
    u32 f54C, f550, f554, f558, f55C;
    f32 f560;
    u32 f564;
    u32 f568[20];
    f32 f5B8;
    u32 f5BC;
    C80269FD0();
};

C80269FD0::C80269FD0() {
    u32 i, j;
    vt = lbl_802F3240;
    lbl_8035B79C = this;
    f540 = 0;
    f548 = lbl_80366D48;
    f560 = lbl_80366D48;
    f5BC = 0;
    f5B8 = lbl_80366D48;
    f564 = 15;
    for (i = 0; i < 15; i++) {
        e[i].a = 0;
        e[i].b = 0;
        for (j = 0; j < 10; j++) {
            e[i].c[j] = 0;
            e[i].d[j] = 0;
        }
    }
    for (i = 0; i < 20; i++) {
        f568[i] = 15;
    }
    f544 = 0;
    f53C = 1;
    f54C = 0;
    f550 = 0;
    f554 = 0;
    f558 = 0;
    f55C = 0;
}

} /* extern "C" */
