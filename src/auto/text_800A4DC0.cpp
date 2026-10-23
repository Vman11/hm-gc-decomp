// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_8029AC60[];
extern char lbl_80361D8C[8];
} /* extern "C" */
struct V80055CFC {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void m(char *);
};
extern "C" {


#pragma opt_propagation off
void fn_800A4DC0(V80055CFC *p) {
    char *str = lbl_8029AC60;
    p->m(lbl_80361D8C);
    p->m(str + 72);
    p->m(str + 48);
    p->m(str + 60);
}

} /* extern "C" */
