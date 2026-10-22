// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct S28 { u8 pad[12]; char *fC; } S28;
struct C80215F50 {
    u8 pad0[36];
    void *f24;
    S28 *f28;
    void *f2C;
    C80215F50();
    ~C80215F50();
};
typedef struct P8012D774 { u8 pad0[0x20]; void *f20; char *f24; } P8012D774;
extern const char lbl_80363F30[4];
extern const char lbl_80363F34[6];
extern void *lbl_8035ABE8;
extern void *lbl_8035ABEC;
s32 fn_80215C84(C80215F50 *, const char *, const char *, s32, s32);
void fn_80060E30(s32, const char *, ...);
void fn_80207A54(void *, char *);
void fn_8012F120(P8012D774 *, void *, void *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
unsigned long strlen(const char *);
void strcpy(char *, const char *);
void fn_802079F0(void *, s32);
void fn_80215BFC(C80215F50 *);

void fn_8012EFDC(P8012D774 *p, void *a2, const char *name) {
    C80215F50 obj;
    s32 err;
    char *s;
    err = fn_80215C84(&obj, name, lbl_80363F30, 2, 0);
    if (err != 0) {
        fn_80060E30(err, lbl_80363F34, name, lbl_80363F30);
    }
    p->f20 = obj.f24;
    fn_80207A54(p->f20, obj.f28->fC);
    fn_8012F120(p, a2, obj.f2C);
    if (lbl_8035ABE8 != 0) {
        s = obj.f28->fC;
        if (lbl_8035ABEC == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035ABEC);
        p->f24 = new char[strlen(s) + 1];
        fn_800F7E98();
        if (p->f24 == 0) fn_800604C4(-4, 0, 0, 0);
        strcpy(p->f24, s);
    }
    fn_802079F0(p->f20, 0);
    fn_80215BFC(&obj);
}

} /* extern "C" */
