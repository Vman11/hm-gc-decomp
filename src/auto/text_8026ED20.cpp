// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_802F3480[8];
extern void *lbl_8035B7BC;
extern f32 lbl_80366DD4;
} /* extern "C" */

struct C8023D2AC {
    C8023D2AC();
    ~C8023D2AC();
};
struct C800F92E8 {
    u8 pad[20];
    C800F92E8();
    ~C800F92E8();
};
struct V8026ED20 {
    void *vt;
    V8026ED20() { vt = lbl_802F3480; }
};
struct E8026ED20 {
    u32 a;
    u32 b;
};
struct C8026ED20 : C8023D2AC {
    V8026ED20 v;
    u8 pad4[20];
    u32 x24;
    f32 x28;
    u8 pad32[16];
    u32 x48;
    u32 x52;
    u32 x56;
    u32 x60;
    u32 x64;
    u32 x68;
    u8 pad72[4];
    E8026ED20 arr[39];
    u32 x388;
    u32 x392;
    u32 x396;
    u8 pad400[4];
    C800F92E8 m404;
    u32 x424;
    u32 x428;
    C8026ED20();
    void Clear() {
        u32 i;
        for (i = 0; i < x68; i++) {
            arr[i].a = 0;
        }
    }
};

C8026ED20::C8026ED20() {
    lbl_8035B7BC = this;
    x24 = 0;
    x48 = 0;
    x52 = 0;
    x56 = 0;
    x60 = 0;
    x64 = 0;
    x68 = 40;
    x392 = 0;
    Clear();
    x396 = 0;
    x28 = lbl_80366DD4;
    x428 = 0;
}

extern "C" {

} /* extern "C" */
