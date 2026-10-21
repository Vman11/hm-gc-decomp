#include "common.h"

extern "C" {

extern u8 lbl_802E8310[];
extern u32 lbl_8035AC50;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F6E88(char *, char *);
void fn_800F7E98(void);
void fn_800F7EC0(u32);
void fn_80138B64(void *);

struct C8017133C {
    u8 pad0[0x10];
    u8 *vt;
    u8 pad14[0x18];
    u32 f2c;
    u32 f30;
    u32 f34;
    u32 f38;
    u32 f3c;
    C8017133C() {
        fn_80138B64(this);
        vt = lbl_802E8310;
        f3c = 0;
        f30 = 0;
        f34 = 0;
        f2c = 0;
        f38 = 0;
    }
};

void fn_80138050(C8017133C *, u32, u32, u32, u32, u32, u32, char *);

struct S8017133C {
    u8 pad0[0xc];
    char *name;
    u8 pad10[4];
    u32 f14;
    u32 f18;
    u32 f1c;
    u32 f20;
    u32 f24;
    C8017133C *obj;
    u32 f2c;
};

void fn_8017133C(S8017133C *p) {
    char buf[16];

    if (lbl_8035AC50 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AC50);
    p->obj = new C8017133C;
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
    fn_80138050(p->obj, p->f2c, p->f14, p->f18, p->f1c, p->f20, p->f24, buf);
}

} /* extern "C" */
