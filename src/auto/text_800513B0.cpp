// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80296378[];
} /* extern "C" */
struct V800513B0 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void m(char *);
};
extern "C" {
#pragma opt_propagation off
void fn_800513B0(V800513B0 *p) {
    char *str = lbl_80296378;
    p->m(str + 156);
    p->m(str + 168);
    p->m(str + 204);
}
#pragma opt_propagation reset

} /* extern "C" */
