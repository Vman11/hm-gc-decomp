// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

struct C800F6BDC {
    u8 pad_[284];
    char *name;
    char ext[4];
    virtual ~C800F6BDC();
    C800F6BDC();
    u8 pad296[1396];
};
extern "C" {
struct P {
    u8 pad[36];
    u8 st36[8];
    C800F6BDC *o44;
    char *name48;
    s32 own52;
};
extern void *lbl_8035A9F4;
void fn_80214E80(P *);
void fn_80210938(u8 *);
s32 fn_80210ABC(u8 *, char *, char *, int);
void fn_80214F1C(P *, u8 *, int);
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_800FB3D0(C800F6BDC *, P *);
u32 strlen(const char *);
char *strcpy(char *, const char *);
char *strncpy(char *, const char *, u32);

s32 fn_80215C84(P *p, char *name, char *ext, int mode, C800F6BDC *o) {
    s32 r;
    if (p->o44) {
        if (p->own52 && p->o44) delete p->o44;
        if (p->name48) delete[] p->name48;
        fn_80214E80(p);
        fn_80210938(p->st36);
        p->o44 = 0;
        p->name48 = 0;
        p->own52 = 0;
    }
    if ((r = fn_80210ABC(p->st36, name, ext, mode)) != 0) return r;
    fn_80214F1C(p, p->st36, 1024);
    if (!o) {
        if (!lbl_8035A9F4) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035A9F4);
        o = new C800F6BDC;
        fn_800F7E98();
        if (!o) fn_800604C4(-4, 0, 0, 0);
        p->own52 = 1;
    } else {
        p->own52 = 0;
    }
    p->o44 = o;
    fn_800FB3D0(p->o44, p);
    if (!lbl_8035A9F4) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035A9F4);
    p->name48 = new char[strlen(name) + 1];
    fn_800F7E98();
    if (!p->name48) fn_800604C4(-4, 0, 0, 0);
    strcpy(p->name48, name);
    p->o44->name = p->name48;
    {
        C800F6BDC *q = p->o44;
        if (!ext) {
            q->ext[0] = 0;
        } else {
            q->ext[0] = '.';
            strncpy(q->ext + 1, ext, 3);
        }
    }
    return 0;
}

} /* extern "C" */
