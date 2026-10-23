// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { f32 x, y, z; } V80228144;
} /* extern "C" */
struct O80228144 {
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
    virtual void v11();
    virtual void v12();
    virtual void v13(V80228144 *, V80228144 *, V80228144 *, void *, void *);
};
extern "C" {
void fn_80228208(void *, void *, V80228144 *, V80228144 *, V80228144 *, O80228144 *, void *, void *, void *, void *, f32, f32, f32);

void fn_80228144(void *p1, void *p2, O80228144 *p3, void *p4, void *p5, void *p6, void *p7, f32 f1, f32 f2, f32 f3) {
    V80228144 a, b, c;
    p3->v13(&a, &b, &c, 0, 0);
    fn_80228208(p1, p2, &a, &b, &c, p3, p4, p5, p6, p7, f1, f2, f3);
}

} /* extern "C" */
