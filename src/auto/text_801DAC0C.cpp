// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct O_DA {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual int fx(void *, int, f32, f32);
};
struct N_DA { O_DA *obj; int f4; N_DA *next; };
struct P_DA { u8 pad[0x88]; N_DA *f136; };
static inline int on_DA(P_DA *p, int a, f32 x, f32 y) {
    int r = 0;
    N_DA *n;
    for (n = p->f136; n; n = n->next) {
        if (n->f4) {
            if (n->obj->fx(p, a, x, y) == 0) r = 1;
        }
    }
    return r;
}
static inline int off_DA(P_DA *p, int a, f32 x, f32 y) {
    int r = 0;
    N_DA *n;
    for (n = p->f136; n; n = n->next) {
        if (!n->f4) {
            if (n->obj->fx(p, a, x, y) == 0) r = 1;
        }
    }
    return r;
}
extern "C" int fn_801DAC0C(P_DA *p, int a, f32 x, f32 y) {
    if (on_DA(p, a, x, y)) return 0; return off_DA(p, a, x, y) ? 0 : 0;
}
extern "C" {

} /* extern "C" */
