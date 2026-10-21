#include "common.h"

extern "C" {
extern u8 lbl_802BCEEC[];
extern void *lbl_8035A1DC;
void fn_8014CA08(void *);
void fn_80061894(void *);
}

struct C800643B0 {
    u8 b[0x2a0];
    C800643B0();
    ~C800643B0();
};

struct C80038D2C {
    u8 b[0x40];
    C80038D2C();
    ~C80038D2C();
};

// 0x1C-byte object whose constructor is fn_8014CA08
struct C8014CA08 {
    u8 b[0x1c];
    C8014CA08() { fn_8014CA08(this); }
};

struct C8003B394 {
    u8 b[0x20];
    C8003B394();
    ~C8003B394();
};

struct C8003C388 {
    u8 b[0x7c];
    C8003C388();
    ~C8003C388();
};

struct C80039E10 {
    u8 b[0x20];
    C80039E10();
    ~C80039E10();
};

struct C8003A490 {
    u8 b[0x2c];
    C8003A490();
    ~C8003A490();
};

struct C8003A978 {
    u8 b[0x34];
    C8003A978();
    ~C8003A978();
};

struct C8003965C {
    u8 b[0x88];
    C8003965C();
    ~C8003965C();
};

struct C8023C9A0 {
    u8 b[0x4];
    C8023C9A0();
    ~C8023C9A0();
};

struct C8003ACE0 {
    u8 b[0x4];
    C8003ACE0();
    ~C8003ACE0();
};

// vtable pointer at +0x2A0 (stored after the base, before the members)
struct C802BCEEC {
    void *vt;
    C802BCEEC() { vt = lbl_802BCEEC; }
};

struct C800642B8 : C800643B0 {
    C802BCEEC vt;
    u8 b2A4[0x316c];
    C80038D2C m3410;
    C8014CA08 m3450;
    u8 b346C[0xc4];
    C8003B394 m3530;
    C8003C388 m3550;
    C80039E10 m35CC;
    C8003A490 m35EC;
    C8003A978 m3618;
    C8003965C m364C;
    C8023C9A0 m36D4;
    C8003ACE0 m36D8;
    C800642B8();
};

C800642B8::C800642B8() {
    lbl_8035A1DC = this;
    fn_80061894(this);
}
