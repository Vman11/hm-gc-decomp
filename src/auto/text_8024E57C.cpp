// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct It { u8 pad[8]; void *a; void *b; u8 pad2[16]; };
struct V_8024E57C { u8 pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual s32 m(); };
extern "C" { extern char lbl_80366448[8]; void __ct__9C8023C7CCFv(void *); void fn_8023C720(void *, void *); void fn_8023C528(void *, const char *); u8 *fn_8023A490(void *, void *); void fn_8023C3F4(void *); void __dt__9C8023C7CCFv(void *, s32); void fn_800F6E88(void *, void *); s32 fn_800F6F00(void *, void *); }

void *fn_8024E57C(u8 *p, char *name) {
    It it;
    char buf[8];
    u32 k;
    __ct__9C8023C7CCFv(&it);
    k = 0;
    do {
        if (k == 0 && ((V_8024E57C *)p)->m() != 0) {
            fn_8023C720(&it, p);
        } else {
            fn_8023C720(&it, p + 76);
        }
        fn_8023C528(&it, lbl_80366448);
        while (it.a != NULL) {
            u8 *o = it.a != NULL ? fn_8023A490(it.a, it.b) : (u8 *)0;
            fn_800F6E88(buf, o + 20);
            if (fn_800F6F00(name, buf) == 0) {
                __dt__9C8023C7CCFv(&it, -1);
                return o;
            }
            fn_8023C3F4(&it);
        }
        k++;
    } while (k < 2);
    __dt__9C8023C7CCFv(&it, -1);
    return 0;
}

} /* extern "C" */
