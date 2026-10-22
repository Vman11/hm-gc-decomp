// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80298768[];
extern char lbl_8035F908[8];

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
void fn_8007C8A8(V80055C68 *p) {
    char *str = lbl_80298768;
    p->m(lbl_8035F908);
    p->m(str + 40);
    p->m(str + 52);
    p->m(str + 64);
}

} /* extern "C" */
