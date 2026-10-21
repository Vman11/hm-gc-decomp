// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {
extern u8 lbl_802F1F7C[];
extern void *lbl_8035B594;
void fn_80250164(void *);
}

struct C8023CE38 {
    u8 b[0x10];
    C8023CE38();
    ~C8023CE38();
};

struct C801829F8 {
    u8 b[0x78];
    C801829F8();
    ~C801829F8();
};

struct C801E5944 {
    u8 b[0x28];
    C801E5944();
    ~C801E5944();
};

struct H80250164 {
    u8 b[0x14];
    H80250164() { fn_80250164(this); }
};

// vtable pointer (stored at +0x10 between the base and the member constructors)
struct V8024FB58 {
    u8 *vt;
    V8024FB58() { vt = lbl_802F1F7C; }
};

struct C8024FB58 : C8023CE38 {
    V8024FB58 v;
    u8 pad14[0x34];
    s32 f48;
    C8023CE38 m4C;
    u8 pad5C[0x38];
    s32 f94, f98, f9C, fA0;
    C801829F8 mA4;
    C801E5944 m11C;
    s32 f144, f148;
    C801829F8 m14C;
    C801E5944 m1C4;
    s32 f1EC;
    C801829F8 m1F0;
    H80250164 m268;
    s32 f27C;
    u8 pad280[0xC8];
    s32 f348, f34C, f350;
    C8024FB58();
};

C8024FB58::C8024FB58() {
    lbl_8035B594 = this;
    f48 = 0;
    f9C = 0;
    fA0 = 0;
    f144 = 0;
    f27C = 0;
    f350 = 0;
    f94 = 0;
    f98 = 0;
    f348 = 0;
    f34C = 0;
    f148 = 0;
    f1EC = 0;
}
