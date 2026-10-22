// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80296C30[];
extern char lbl_8035E258[8];
struct V_800591B8 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void m(char *s);
};
#pragma opt_propagation off
void fn_800591B8(V_800591B8 *p) {
    char *str = lbl_80296C30;
    p->m(str + 72);
    p->m(str + 84);
    p->m(lbl_8035E258);
    p->m(str + 96);
}
#pragma opt_propagation reset

} /* extern "C" */
