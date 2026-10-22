// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802956A0[];
extern char lbl_8035CC04[8];
void fn_80249E0C(void *p);
struct V80044F48 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void m(char *);
};
#pragma opt_propagation off
void fn_80044F48(V80044F48 *p) {
    char *str = lbl_802956A0;
    p->m(str + 48);
    p->m(str + 36);
    p->m(lbl_8035CC04);
    p->m(str + 60);
    p->m(str + 72);
    p->m(str + 84);
    fn_80249E0C(p);
}
#pragma opt_propagation reset

} /* extern "C" */
