// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A {
    u32 x0;
    u8 pad4[0x24];
    void *x28;
    u8 pad2C[0x60];
    u32 x8C;
    u8 pad90[752 - 0x90];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7();
    virtual void m8();
};
struct B {
    u8 pad[192];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7();
    virtual void m8(const char *s);
};
struct D {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13();
    virtual void m14(void *a, s32 b, s32 c, s32 d, s32 e);
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26();
    virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32();
    virtual void m33(const char *s, s32 b, s32 c, s32 d, s32 e);
};
struct C {
    u8 pad[0x48];
    D *x48;
};
extern A *lbl_8035B65C;
extern B *lbl_8035B684;
extern C *lbl_8035B308;
extern char lbl_80367010[8];
extern char lbl_80367018[8];
extern char lbl_80367020[8];
extern char lbl_802AAA48[];
void fn_80107244(void *, void *);
D *fn_802288FC(C *, const char *);

void fn_80273808(void *p, u8 *msg) {
    u8 buf[24];
    switch (*(s32 *)(msg + 12)) {
    case 0x51:
        lbl_8035B65C->m8();
        break;
    case 0x52:
        lbl_8035B684->m8(lbl_80367010);
        break;
    case 0x53:
        lbl_8035B65C->x8C ^= 0x10;
        break;
    case 0x54:
        lbl_8035B65C->x8C ^= 0x20;
        break;
    case 0x55:
        {
            A *a = lbl_8035B65C;
            a->x0++;
            if (a->x0 >= 5) {
                a->x0 = 0;
            }
        }
        break;
    case 0x56:
        fn_80107244(lbl_8035B65C->x28, buf);
        lbl_8035B308->x48->m14(buf, 0, 0, 0, 0);
        fn_802288FC(lbl_8035B308, lbl_80367018)->m33(lbl_802AAA48, 0, 0, 0, 0);
        break;
    case 0x57:
        lbl_8035B308->x48->m33(lbl_80367020, 0, 0, 0, 0);
        break;
    }
}

} /* extern "C" */
