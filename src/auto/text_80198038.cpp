// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct B80198038 {
    u8 pad[8];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11(void *c, const f32 *s);
};
struct N80198038 : B80198038 {
    N80198038 *front;
    N80198038 *back;
    f32 nx;
    f32 ny;
    f32 nz;
    f32 d;
};
extern "C" {

void fn_8018B8F8(void *c, N80198038 *n);

void fn_80198038(N80198038 *n, void *c, const f32 *s) {
    f32 dist = n->d + (s[0] * n->nx + s[1] * n->ny + s[2] * n->nz);
    if (dist >= s[3]) {
        if (n->front != 0) {
            n->front->v11(c, s);
        }
    } else if (dist < -s[3]) {
        if (n->back != 0) {
            n->back->v11(c, s);
        }
    } else {
        fn_8018B8F8(c, n);
    }
}

} /* extern "C" */
