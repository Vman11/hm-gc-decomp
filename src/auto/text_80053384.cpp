// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80296598[];
extern char lbl_8035DF48[6];
extern char lbl_8035DF50[7];

struct V80053384 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void send(char *s);
};

#pragma opt_propagation off
void fn_80053384(V80053384 *p) {
    char *str = lbl_80296598;
    p->send(str + 240);
    p->send(str + 228);
    p->send(lbl_8035DF48);
    p->send(lbl_8035DF50);
    p->send(str + 264);
}
#pragma opt_propagation reset

} /* extern "C" */
