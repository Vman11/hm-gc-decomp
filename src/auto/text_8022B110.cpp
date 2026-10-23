#include "common.h"

extern "C" {

struct wA_N { u32 flags; u8 pad4[0x50]; wA_N *sib; wA_N *child; };
struct wA_M { u8 pad[0xc]; void *sub; };
extern wA_M *lbl_8035B65C;
void fn_8019B380(void *s, wA_N *n);
extern "C" {
inline wA_N *fn_8022A76C(wA_N *n) { return n->sib; }
inline void *fn_8022A784(wA_M *m) { return m->sub; }
inline wA_M *fn_8022A78C(void) { return lbl_8035B65C; }
inline wA_N *fn_8022A7A0(wA_N *n) { return n->child; }
inline void fn_8022B608(wA_N *n) { n->flags &= ~2; }
}

void fn_8022B110(void *self, wA_N *n) {
    if (n != 0) {
        fn_8019B380(fn_8022A784(fn_8022A78C()), n);
        fn_8022B608(n);
        fn_8022B110(self, fn_8022A7A0(n));
        for (wA_N *t = fn_8022A76C(n); t != 0; t = fn_8022A76C(t)) {
            fn_8022B110(self, t);
        }
    }
}

} /* extern "C" */
