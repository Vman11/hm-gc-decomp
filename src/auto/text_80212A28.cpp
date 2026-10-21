#include "common.h"

extern "C" {

void __dt__9C80213428Fv(void);
void fn_800E1E88(void *, void (*)(void));
struct C80212A28_B { u8 pad[4]; C80212A28_B(); };
struct E80212A28 { void *a; C80212A28_B *b; u32 c; u16 d; u16 e; u16 f; u16 g; };
struct S80212A28 { E80212A28 *arr; u32 pad4[2]; u16 n; u8 pade[4]; u16 flags; };

void fn_80212A28(S80212A28 *s) {
    E80212A28 *e;
    u32 off;
    u32 i;

    if (s->arr != 0) {
        i = 0;
        off = 0;
        for (; i < s->n; i++) {
            e = (E80212A28 *)((u8 *)s->arr + off);
            if (e->b != 0) {
                delete[] e->b;
            }
            if (e->a != 0) {
                fn_800E1E88(e->a, __dt__9C80213428Fv);
            }
            e->a = 0;
            e->b = 0;
            e->c = 0;
            e->d = 0;
            e->e = 0;
            e->f = 0;
            e->g = 0;
            off += 0x14;
        }
        fn_800E1E88(s->arr, __dt__9C80213428Fv);
        s->arr = 0;
    }
    s->flags &= ~2;
}

} /* extern "C" */
