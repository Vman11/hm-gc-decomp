// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802967A8[];
extern char lbl_8035E154[8];

struct V80055C68 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void m(char *s);
};

#pragma opt_propagation off
void fn_80055C68(V80055C68 *p) {
    char *str = lbl_802967A8;
    p->m(lbl_8035E154);
    p->m(str + 120);
    p->m(str + 168);
    p->m(str + 180);
}
#pragma opt_propagation reset

} /* extern "C" */
