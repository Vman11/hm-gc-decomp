// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_8029A530[];
extern char lbl_80361940[8];
struct V_8009E6D4 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void m(char *s);
};
#pragma opt_propagation off
void fn_8009E6D4(V_8009E6D4 *p) {
    char *str = lbl_8029A530;
    p->m(str + 72);
    p->m(str + 84);
    p->m(str + 36);
    p->m(lbl_80361940);
    p->m(str + 48);
    p->m(str + 60);
}
#pragma opt_propagation reset

} /* extern "C" */
