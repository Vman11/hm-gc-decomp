// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct V801A0098 {
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
    virtual void v11();
};
extern "C" {
typedef struct { u8 pad[12]; V801A0098 *fC; V801A0098 *f10; f32 f14; } A801A0098;
typedef struct { u8 pad[8]; f32 f8; f32 fC; } B801A0098;
void fn_8018B8F8(void *p, A801A0098 *a);
void fn_801A0098(A801A0098 *a, void *p, const B801A0098 *b) {
    f32 d = b->f8 - a->f14;
    if (d >= b->fC) {
        if (a->fC) a->fC->v11();
    } else if (d < -b->fC) {
        if (a->f10) a->f10->v11();
    } else {
        fn_8018B8F8(p, a);
    }
}

} /* extern "C" */
