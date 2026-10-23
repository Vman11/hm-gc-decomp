// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"

extern "C" {

struct N22A { u32 f0; u8 pad4[0x54 - 4]; N22A *f54; N22A *f58; };
struct G22A { u8 pad[0xc]; void *fc; };
extern G22A *lbl_8035B65C;
void fn_8019B048(void *, N22A *);
inline N22A *fn_8022A76C(N22A *n) { return n->f54; }
inline void fn_8022A774(N22A *n) { n->f0 &= ~0x200; }
inline void *fn_8022A784(G22A *g) { return g->fc; }
inline G22A *fn_8022A78C(void) { return lbl_8035B65C; }
inline s32 fn_8022A794(N22A *n) { return (n->f0 & 0x200) != 0; }
inline N22A *fn_8022A7A0(N22A *n) { return n->f58; }

void fn_8022A1B0(void *c, N22A *n) {
    N22A *s;
    if (!n) return;
    if (fn_8022A794(n)) {
        fn_8019B048(fn_8022A784(fn_8022A78C()), n);
        fn_8022A774(n);
    }
    fn_8022A1B0(c, fn_8022A7A0(n));
    for (s = fn_8022A76C(n); s; s = fn_8022A76C(s)) {
        fn_8022A1B0(c, s);
    }
}

}

} /* extern "C" */
