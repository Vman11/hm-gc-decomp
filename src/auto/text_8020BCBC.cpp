// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8020BCBC { u8 pad[0x4]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual s32 m(); };
extern "C" void fn_8011B250(void);

s32 fn_8020BCBC(V_8020BCBC *p) {
    if (*(s32 *)((u8 *)p + 12) != 0) {
        s32 r;
        do {
            fn_8011B250();
            r = p->m();
        } while (r == 7);
        return r;
    }
    return 0;
}

} /* extern "C" */
