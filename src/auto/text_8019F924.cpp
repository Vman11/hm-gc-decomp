// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct V8019F924 { u8 pad[8]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); };
extern "C" {
typedef struct { u8 pad[4]; f32 f4; u8 pad2[4]; f32 fC; } B8019F924;
typedef struct { u8 pad[12]; V8019F924 *fC; V8019F924 *f10; f32 f14; } A8019F924;
void fn_8018B8F8(void *p, A8019F924 *a);
void fn_8019F924(A8019F924 *a, void *p, const B8019F924 *b) {
    f32 d = b->f4 - a->f14;
    if (d >= b->fC) {
        if (a->fC) a->fC->v11();
    } else if (d < -b->fC) {
        if (a->f10) a->f10->v11();
    } else {
        fn_8018B8F8(p, a);
    }
}

} /* extern "C" */
