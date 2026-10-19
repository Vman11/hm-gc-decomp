// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8018D85C { u8 pad[0x14]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void b(void *, void *, void *, void *); virtual void p18(); virtual void p19(); virtual void a(void *, void *, void *, void *, void *); };
void fn_801A07E4(void *);

void fn_8018D85C(u8 *p, void *a, void *b) {
    if (*(void **)(p + 0x90) != NULL) {
        fn_801A07E4(p);
        if (*(void **)(p + 0x9C) != NULL) {
            (*(V_8018D85C **)(p + 0x90))->a(a, *(void **)(p + 0x6C), b, *(void **)(p + 0x98), *(void **)(p + 0x9C));
        } else {
            (*(V_8018D85C **)(p + 0x90))->b(a, *(void **)(p + 0x6C), *(void **)(p + 0x94), b);
        }
    }
}

} /* extern "C" */
