// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {
extern u8 lbl_802E7B30[];
void fn_8012163C(void *);
void *memset(void *, s32, u32);
}

struct C80135BD0 {
    u8 b[0x1930];
    C80135BD0();
    ~C80135BD0();
};

// vtable pointer (stored at +0x1930 between the base and the member constructors)
struct V80165F70 {
    u8 *vt;
    V80165F70() { vt = lbl_802E7B30; }
};

struct C801768A4 {
    u8 b[0x68];
    C801768A4();
    ~C801768A4();
};

struct C8002FAE0 {
    u8 b[0xC];
    C8002FAE0();
};

struct C80165F70 : C80135BD0 {
    V80165F70 v;
    s32 f1934, f1938, f193C;
    C801768A4 m1940;
    s32 f19A8, f19AC;
    u8 b19B0[4];
    C8002FAE0 a19B4[8];
    C8002FAE0 a1A14[8];
    u8 pad1A74[0x20];
    s32 f1A94;
    u8 b1A98[0x20];
    s32 f1AB8, f1ABC, f1AC0, f1AC4, f1AC8, f1ACC, f1AD0, f1AD4, f1AD8, f1ADC, f1AE0, f1AE4, f1AE8, f1AEC, f1AF0,
        f1AF4, f1AF8, f1AFC;
    C80165F70();
};

C80165F70::C80165F70() {
    f1934 = 0;
    f1938 = 0;
    f1AFC = 0;
    f193C = 0;
    f19A8 = 2;
    f19AC = 2;
    fn_8012163C(b19B0);
    f1AB8 = 0;
    f1ABC = 0;
    memset(a19B4, 0, 0x60);
    memset(a1A14, 0, 0x60);
    f1A94 = 0;
    memset(b1A98, 0, 0x20);
    f1AC0 = 0;
    f1AC4 = 0;
    f1AC8 = 0;
    f1ACC = 0;
    f1AD4 = 0;
    f1AD8 = 0;
    f1ADC = 0;
    f1AE0 = 0;
    f1AE4 = 0;
    f1AE8 = 0;
    f1AEC = 0;
    f1AF0 = 0;
    f1AF4 = 0;
    f1AF8 = 0;
}
