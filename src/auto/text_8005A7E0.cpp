// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80296EC0[];
extern char lbl_8035E344[8];
} /* extern "C" */
struct V80055CFC {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void m(char *);
};
extern "C" {


#pragma opt_propagation off
void fn_8005A7E0(V80055CFC *p) {
    char *str = lbl_80296EC0;
    p->m(lbl_8035E344);
    p->m(str + 48);
    p->m(str + 60);
    p->m(str + 72);
}

} /* extern "C" */
