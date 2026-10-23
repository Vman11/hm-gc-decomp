// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80295710[];

struct V8004556C {
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
    virtual void send(char *s);
};

#pragma opt_propagation off
void fn_8004556C(V8004556C *p) {
    char *str = lbl_80295710;
    p->send(str + 84);
    p->send(str + 96);
    p->send(str + 108);
    p->send(str + 120);
    p->send(str + 132);
    p->send(str + 144);
    p->send(str + 156);
}
#pragma opt_propagation reset

} /* extern "C" */
