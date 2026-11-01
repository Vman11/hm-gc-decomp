// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { float x, y, z; } V3;
extern float lbl_80361000;
extern char lbl_80299C34[];
void *fn_80242144(void *, int);
void fn_80242BC0(void *, const char *, int, int, float *, int);
void fn_80095770(void *, V3, V3, int, int);
void fn_8023FE08(void *, float);
struct VO { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void m(V3 *, V3 *, int, int, int); };
void fn_8009565C(char *self, float f) {
    float t = lbl_80361000;
    fn_80242BC0(fn_80242144(self, 1), lbl_80299C34, 0, 0, &t, 0);
    for (int i = 0; i < *(int *)(self + 0x134); i++) {
        *(u32 *)(*(char **)(self + 0x130) + i * 0xa8) &= ~0x800;
    }
    V3 b, a;
    (*(VO **)(self + 0xe0))->m(&a, &b, 0, 0, 0);
    fn_80095770(self, a, b, *(int *)(self + 0x134), 0);
    fn_8023FE08(self, f);
}

} /* extern "C" */
