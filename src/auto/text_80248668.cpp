// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct Q_8668 { u8 pad_[28];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void f36(int);
};
struct P_8668 { u8 pad[20]; void *f20; u8 pad2[4]; f32 f28; f32 f32_; u8 pad3[4]; u32 *f40; u8 pad4[4]; int f48; };
extern "C" {
void fn_8026A820(void *, void *, u32 *, int);
void fn_8026AE28(void *, void *, u32 *, int, f32);
void fn_8026A944(void *, void *, u32 *, f32);
void fn_8026AA88(void *, void *, u32 *, f32);
void fn_8026A5C8(void *, void *, u32 *, Q_8668 *);
void fn_80248668(P_8668 *p, Q_8668 *q, int i, int a, f32 f, int flag) {
    if (q) {
        fn_8026A820(p->f20, p, p->f40 + i, a);
        fn_8026AE28(p->f20, p, p->f40 + i, 0, f);
        if (flag) {
            p->f48 = 1;
            q->f36(-1);
        } else {
            p->f48 = 0;
            q->f36(0);
        }
        fn_8026A944(p->f20, p, p->f40 + i, p->f32_);
        fn_8026AA88(p->f20, p, p->f40 + i, p->f28);
        fn_8026A5C8(p->f20, p, p->f40 + i, q);
    }
}
}
extern "C" {

} /* extern "C" */
