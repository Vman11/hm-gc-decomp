// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80297908[];
extern char lbl_8035EF80[8];

struct V80043278 {
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
void fn_8006DA44(V80043278 *p) {
    char *str = lbl_80297908;
    p->send(str + 528);
    p->send(lbl_8035EF80);
    p->send(str + 576);
    p->send(str + 876);
}

} /* extern "C" */
