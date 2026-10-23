// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8022AECC { u8 pad[0x14]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void *m(); };
struct wA_N { u32 flags; u16 type; u8 pad6[0x46]; void *f4c; u8 pad50[4]; wA_N *sib; wA_N *child; u8 pad5c[0x34]; V_8022AECC *obj; };
struct wA_M { u8 pad[0xc]; void *sub; };
extern wA_M *lbl_8035B65C;
void fn_8019B178(void *s, wA_N *n);
extern "C" {
inline wA_N *fn_8022A76C(wA_N *n) { return n->sib; }
inline void *fn_8022A784(wA_M *m) { return m->sub; }
inline wA_M *fn_8022A78C(void) { return lbl_8035B65C; }
inline s32 fn_8022A794(wA_N *n) { return (n->flags & 0x200) != 0; }
inline wA_N *fn_8022A7A0(wA_N *n) { return n->child; }
inline void fn_8022ACD8(wA_N *n) { n->flags |= 0x200; }
inline BOOL fn_8022ACE8(wA_N *n) { return n->f4c != 0; }
inline V_8022AECC *fn_8022ACFC(wA_N *n) { return n->obj; }
inline u32 fn_8022AD04(wA_N *n) { return n->type; }
inline BOOL fn_8022AECC(void *p, wA_N *q) {
    V_8022AECC *o;
    if (q != NULL && (fn_8022AD04(q) == 2 || fn_8022AD04(q) == 3) && (o = fn_8022ACFC(q)) != NULL && o->m() != NULL) {
        return TRUE;
    }
    return FALSE;
}
}

void fn_8022A824(void *self, wA_N *n) {
    if (n != 0) {
        if (fn_8022AECC(self, n) && (!fn_8022A794(n) || !fn_8022ACE8(n))) {
            fn_8019B178(fn_8022A784(fn_8022A78C()), n);
            fn_8022ACD8(n);
        }
        fn_8022A824(self, fn_8022A7A0(n));
        for (wA_N *t = fn_8022A76C(n); t != 0; t = fn_8022A76C(t)) {
            fn_8022A824(self, t);
        }
    }
}

} /* extern "C" */
