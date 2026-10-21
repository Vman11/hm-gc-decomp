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

void fn_8023C720(C8023C7CC *, void *);
void fn_8023C528(C8023C7CC *, s32);
u8 *fn_8023A490(void *, void *);
void fn_8023C3F4(C8023C7CC *);
void fn_800F6E88(void *, void *);
s32 fn_800F6CD0(void *, void *);

void *fn_802288FC(void *a, char *name) {
    C8023C7CC it;
    char buf[8];
    fn_8023C720(&it, a);
    fn_8023C528(&it, 0);
    while (it.a != NULL) {
        u8 *o = it.a != NULL ? fn_8023A490(it.a, it.b) : (u8 *)0;
        fn_800F6E88(buf, o + 140);
        if (fn_800F6CD0(name, buf) != 0) {
            return o;
        }
        fn_8023C3F4(&it);
    }
    return NULL;
}

} /* extern "C" */
