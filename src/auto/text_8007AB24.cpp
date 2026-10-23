// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802984B8[];
} /* extern "C" */
struct V8007AB24 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void m(char *);
};
extern "C" {
#pragma opt_propagation off
void fn_8007AB24(V8007AB24 *p) {
    char *str = lbl_802984B8;
    p->m(str + 84);
    p->m(str + 96);
    p->m(str + 132);
}
#pragma opt_propagation reset

} /* extern "C" */
