// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *volatile lbl_8035B4E8;
extern char lbl_802A8F50[];
typedef struct { u8 pad[32]; s32 f20; } G8035765C;
extern G8035765C lbl_8035765C;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_80242AC0(void *);
void fn_80249FD4(void *);
void fn_80247A94(void *);
void fn_80243F88(void *);
void fn_8024453C(void *);
void fn_802482B8(void *);
void fn_80248E6C(void *);
}

struct B8023B9E4 {
    u8 pad[16];
    virtual ~B8023B9E4();
    virtual void v1();
    virtual void SetName(const char *);
};

struct C8023B9E4 : B8023B9E4 {
    u8 pad14[40 - 20];
    C8023B9E4();
    virtual ~C8023B9E4();
};

struct B80244A50 {
    u8 pad[8];
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct S80244A50 : B80244A50 {
    s32 fC;
    C8023B9E4 *f10;
};

struct P80244A50 {
    u8 pad[4];
    void *f4;
};

extern "C" {
void fn_80244A50(S80244A50 *p, P80244A50 *a) {
    if (p->fC != 0) {
        p->v2();
        if (p->f10) delete p->f10;
        p->fC = 0;
        p->f10 = 0;
    }
    p->fC = 1;
    lbl_8035B4E8 = a->f4;
    fn_80242AC0(lbl_8035B4E8);
    fn_80249FD4(lbl_8035B4E8);
    fn_80247A94(lbl_8035B4E8);
    fn_80243F88(lbl_8035B4E8);
    fn_8024453C(lbl_8035B4E8);
    fn_802482B8(lbl_8035B4E8);
    fn_80248E6C(lbl_8035B4E8);
    if (!lbl_8035B4E8) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B4E8);
    p->f10 = new C8023B9E4;
    fn_800F7E98();
    if (!p->f10) fn_800604C4(-4, 0, 0, 0);
    p->f10->SetName(lbl_802A8F50);
    p->v1();
    lbl_8035765C.f20 = 1;
}

} /* extern "C" */
