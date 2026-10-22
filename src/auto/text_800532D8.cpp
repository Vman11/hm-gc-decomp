// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80296598[];
extern char lbl_8035DF48[6];
extern char lbl_8035DF50[7];

struct V800532D8 {
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
void fn_800532D8(V800532D8 *p) {
    char *base = lbl_80296598;
    p->send(base + 240);
    p->send(base + 228);
    p->send(lbl_8035DF48);
    p->send(lbl_8035DF50);
    p->send(base + 264);
}
#pragma opt_propagation reset

} /* extern "C" */
