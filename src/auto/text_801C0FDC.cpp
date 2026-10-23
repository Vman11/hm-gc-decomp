// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80364FC0[4];
extern char lbl_80364FC4[6];
extern u32 lbl_803308B4[];
extern void *lbl_8035B060;
extern void *lbl_8035B058;
void fn_80060E30(...);
void fn_801DDF00(void);
void fn_80215BFC(void *);
s32 fn_80215C84(void *, char *, char *, int, int);
struct C80215F50 { char pad[0x38]; C80215F50(void); ~C80215F50(); };

static inline void *GetA801C0FDC(void) {
    if (lbl_803308B4[0] == 0) fn_801DDF00();
    return lbl_8035B060;
}
static inline void *GetB801C0FDC(void) {
    if (lbl_803308B4[0] == 0) fn_801DDF00();
    return lbl_8035B058;
}

struct O801C0FDC {
    u8 pad[292];
    virtual void f0(); virtual void f1();
    virtual void Set(void *a, void *b, s32 c);
};

struct P801C0FDC {
    u8 pad[16];
    virtual void f0(); virtual void f1();
    virtual void Do(void *a, O801C0FDC *o, void *p5, void *p6);
};

s32 fn_801C0FDC(P801C0FDC *p, void *a, char *name, void *unused, void *p5, void *p6) {
    s32 r;
    O801C0FDC *o;
    C80215F50 lobj;
    r = fn_80215C84(&lobj, name, lbl_80364FC0, 2, 0);
    if (r != 0) fn_80060E30(r, lbl_80364FC4, name, lbl_80364FC0);
    o = *(O801C0FDC **)((u8 *)&lobj + 0x2c);
    o->Set(GetA801C0FDC(), GetB801C0FDC(), 0);
    p->Do(a, o, p5, p6);
    fn_80215BFC(&lobj);
    return 0;
}

} /* extern "C" */
