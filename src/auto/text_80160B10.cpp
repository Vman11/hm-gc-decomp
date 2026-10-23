// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct RGB80160B10 { u8 r, g, b; };
struct S80160B10 {
    u16 n;
    u8 pad[18];
    void *f20;
    u16 *ids;
};
extern "C" {
void fn_80147AD8(void *p, u16 id, RGB80160B10 *out);
s32 fn_801216D4(void *a, RGB80160B10 *c, void *b);
BOOL fn_80160B10(const S80160B10 *self, void *a, u32 *out, void *b) {
    u32 n;
    u16 *p;
    u32 i;
    RGB80160B10 c;
    p = self->ids;
    i = 0;
    n = self->n;
    for (; i < n; p++, i++) {
        fn_80147AD8(self->f20, *p, &c);
        if (fn_801216D4(a, &c, b) != 0) {
            *out = i;
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
