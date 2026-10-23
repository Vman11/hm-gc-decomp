// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct RGB80160A8C { u8 r, g, b; };
struct S80160A8C {
    u16 n;
    u8 pad[18];
    void *f20;
    u16 *ids;
};
extern "C" {
void fn_80147AD8(void *p, u16 id, RGB80160A8C *out);
u32 fn_8012179C(void *a, RGB80160A8C *c);
u32 fn_80160A8C(const S80160A8C *self, void *a) {
    u32 n;
    u16 *p;
    u32 i;
    u32 best;
    u32 minv;
    RGB80160A8C c;
    p = self->ids;
    n = self->n;
    best = 0;
    minv = 0xFFFFFFFF;
    for (i = 0; i < n; p++, i++) {
        u32 d;
        fn_80147AD8(self->f20, *p, &c);
        d = fn_8012179C(a, &c);
        if (d < minv) {
            minv = d;
            best = i;
        }
    }
    return best;
}

} /* extern "C" */
