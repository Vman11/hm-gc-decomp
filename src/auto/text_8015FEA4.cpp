#include "common.h"

extern "C" {

extern u8 lbl_802E7058[];
extern u32 lbl_8035AC18;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F6E88(char *, char *);
void fn_800F7E98(void);
void fn_800F7EC0(u32);
void fn_80133FF4(void *);

struct C8015FEA4 {
    u8 pad0[0x10];
    u8 *vt;
    u8 pad14[0x10];
    u32 f24;
    u32 f28;
    u32 f2c;
    u32 f30;
    u32 f34;
    u32 f38;
    u32 f3c;
    u32 f40;
    u32 f44;
    C8015FEA4() {
        fn_80133FF4(this);
        vt = lbl_802E7058;
        f28 = 0;
        f24 = 0;
        f2c = 0;
        f30 = 0;
        f34 = 0;
        f38 = 0;
        f3c = 0;
        f40 = 0;
        f44 = 0;
    }
};

void fn_80133A18(C8015FEA4 *, u32, u32, char *);

struct S8015FEA4 {
    u8 pad0[0xc];
    char *name;
    u8 pad10[4];
    u32 f14;
    C8015FEA4 *obj;
    u8 pad1c[8];
    u32 f24;
};

void fn_8015FEA4(S8015FEA4 *p) {
    char buf[16];

    if (lbl_8035AC18 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AC18);
    p->obj = new C8015FEA4;
    fn_800F7E98();
    if (p->obj == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    if (p->name == 0) {
        buf[0] = 0;
    }
    else {
        fn_800F6E88(buf, p->name);
    }
    fn_80133A18(p->obj, p->f24, p->f14, buf);
}

} /* extern "C" */
