// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80076990 { u8 pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void *m(); };
extern "C" void fn_80103F08(void *, f32 *, f32 *);

void fn_80076990(V_80076990 *p, f32 *__restrict a, f32 *__restrict b) {
    void *r = p->m();
    if (r != NULL) {
        fn_80103F08(r, a, b);
    } else {
        b[0] = a[0];
        b[1] = a[1];
        b[2] = a[2];
    }
}

} /* extern "C" */
