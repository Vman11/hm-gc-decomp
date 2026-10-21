// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern const char lbl_802AA320[];
extern char lbl_80366CE4[6];
extern char lbl_80366CEC[8];
extern char lbl_80366CF4[8];
void *fn_80261114(void *p, const char *name, s32 flag);
void *fn_80110444(void *a, const char *name, s32 b);
void **fn_8010FEDC(void *a, void *b, const char *name, s32 c);
void fn_80261B18(void *p, void *q);

} /* extern "C" */

struct V_80267CF8 {
    u8 pad[8];
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual s32 f5(s32);
};

extern "C" {

#pragma opt_propagation off
void fn_80267CF8(void *p, void *q) {
    const char *str = lbl_802AA320;
    V_80267CF8 *obj;
    void *g;
    M2C_FIELD(p, void **, 0xb8) = fn_80261114(p, lbl_80366CE4, 1);
    M2C_FIELD(p, f32 *, 0xbc) = *M2C_FIELD(p, f32 **, 0xb8);
    M2C_FIELD(p, void **, 0xb0) = fn_80261114(p, str + 0x5C, 0);
    M2C_FIELD(p, void **, 0xb4) = fn_80261114(p, str + 0x6C, 1);
    M2C_FIELD(p, void **, 0xc4) = fn_80261114(p, str + 0x7C, 0);
    M2C_FIELD(p, void **, 0xcc) = fn_80261114(p, str + 0x94, 0);
    M2C_FIELD(p, void **, 0xd0) = fn_80261114(p, str + 0xA4, 0);
    M2C_FIELD(p, void **, 0xe4) = fn_80261114(p, str + 0xB4, 0);
    M2C_FIELD(p, void **, 0xe8) = fn_80261114(p, str + 0xC0, 0);
    g = fn_80110444(M2C_FIELD(p, void **, 0xc), lbl_80366CEC, 0);
    obj = (V_80267CF8 *)*fn_8010FEDC(M2C_FIELD(p, void **, 0xc), g, lbl_80366CF4, 0);
    M2C_FIELD(p, s32 *, 0xc0) = obj->f5(0);
    fn_80261B18(p, q);
}
#pragma opt_propagation reset

} /* extern "C" */
