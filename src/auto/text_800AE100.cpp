// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_8029B3E0[];
extern char lbl_803627BC[8];
extern char lbl_8036285C[8];
extern char lbl_8036284C[6];
extern char lbl_80362854[7];
struct V800AE100 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void m(char *);
};
#pragma opt_propagation off
void fn_800AE100(V800AE100 *p) {
    char *str = lbl_8029B3E0;
    p->m(str + 480);
    p->m(str + 492);
    p->m(lbl_803627BC);
    p->m(lbl_8036285C);
    p->m(str + 708);
    p->m(lbl_8036284C);
    p->m(lbl_80362854);
}
#pragma opt_propagation reset

} /* extern "C" */
