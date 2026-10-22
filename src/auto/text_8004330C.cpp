// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80295360[];
extern char lbl_8035C864[8];
struct V8004330C {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void m(char *);
};
#pragma opt_propagation off
void fn_8004330C(V8004330C *p) {
    char *str = lbl_80295360;
    p->m(str + 216);
    p->m(lbl_8035C864);
    p->m(str + 228);
    p->m(str + 240);
}
#pragma opt_propagation reset

} /* extern "C" */
