// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V8004A538 {
    virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4();
    virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9();
    virtual void f10(const char *s);
};
extern char lbl_80295BE8[];
extern char lbl_8035D31C[6];
extern char lbl_8035D324[7];
extern char lbl_8035D30C[6];
extern char lbl_8035D2FC[7];
extern char lbl_8035D304[8];
extern char lbl_8035D32C[7];
s32 fn_800F6CD0(void *a, const char *b);

void fn_8004A538(V8004A538 *p) {
    char *const s = lbl_80295BE8;
    p->f10(s + 132);
    p->f10(s + 156);
    p->f10(s + 168);
    p->f10(lbl_8035D31C);
    p->f10(lbl_8035D324);
    if (fn_800F6CD0(M2C_FIELD(p, void **, 280), s + 200) != 0) {
        p->f10(lbl_8035D30C);
        p->f10(lbl_8035D2FC);
        p->f10(lbl_8035D304);
        p->f10(lbl_8035D32C);
    }
    if (*M2C_FIELD(p, s32 **, 328) != 0) {
        p->f10(s + 144);
    }
}

} /* extern "C" */
