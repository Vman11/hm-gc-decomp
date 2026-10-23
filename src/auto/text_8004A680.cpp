// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80295BE8[];
extern char lbl_8035D31C[6];
extern char lbl_8035D324[7];
extern char lbl_8035D30C[6];
extern char lbl_8035D2FC[7];
extern char lbl_8035D304[8];
extern char lbl_8035D32C[7];
s32 fn_800F6CD0(void *p, char *s);
struct V_8004A680 {
    virtual void p0();
    virtual void p1();
    virtual void p2();
    virtual void p3();
    virtual void p4();
    virtual void p5();
    virtual void p6();
    virtual void p7();
    virtual void p8();
    virtual void reg(char *s);
};

#pragma opt_propagation off
void fn_8004A680(V_8004A680 *p) {
    char *base = lbl_80295BE8;
    p->reg(base + 132);
    p->reg(base + 156);
    p->reg(base + 168);
    p->reg(lbl_8035D31C);
    p->reg(lbl_8035D324);
    if (fn_800F6CD0(*(void **)((u8 *)p + 280), base + 200) != 0) {
        p->reg(lbl_8035D30C);
        p->reg(lbl_8035D2FC);
        p->reg(lbl_8035D304);
        p->reg(lbl_8035D32C);
    }
    if (**(s32 **)((u8 *)p + 328) != 0) {
        p->reg(base + 144);
    }
}
#pragma opt_propagation reset

} /* extern "C" */
