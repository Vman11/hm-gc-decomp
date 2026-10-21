// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C8023C7CC {
    u8 pad[8];
    void *a;
    void *b;
    u8 pad2[16];
    C8023C7CC();
    ~C8023C7CC();
};

struct V_80228CB4 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m4(); virtual s32 m5(); };

void fn_8023C720(C8023C7CC *, void *);
void fn_8023C528(C8023C7CC *, s32);
void *fn_8023A490(void *, void *);
void fn_8023C3F4(C8023C7CC *);

void fn_80228CB4(void *a) {
    C8023C7CC it;
    fn_8023C720(&it, a);
    fn_8023C528(&it, 0);
    while (it.a != NULL) {
        if (((V_80228CB4 *)(it.a != NULL ? fn_8023A490(it.a, it.b) : NULL))->m5() != 0) {
            ((V_80228CB4 *)(it.a != NULL ? fn_8023A490(it.a, it.b) : NULL))->m4();
        }
        fn_8023C3F4(&it);
    }
}

} /* extern "C" */
