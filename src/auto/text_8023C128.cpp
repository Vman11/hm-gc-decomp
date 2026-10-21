#include "common.h"

extern "C" {

extern const f32 lbl_80366048;
struct V8023C128 { f32 x; f32 y; f32 z; };
void fn_80101820(V8023C128 *);

static inline f32 Dot8023C128(const V8023C128 *a, const V8023C128 *b) {
    return a->x * b->x + a->y * b->y + a->z * b->z;
}

static inline void AddScaled8023C128(V8023C128 *a, const V8023C128 *b, f32 s) {
    a->x = s * b->x + a->x;
    a->y = s * b->y + a->y;
    a->z = s * b->z + a->z;
}

void fn_8023C128(V8023C128 *a, V8023C128 *b) {
    f32 s;

    fn_80101820(b);
    s = Dot8023C128(a, b);
    s = lbl_80366048 * s;
    AddScaled8023C128(a, b, s);
}

} /* extern "C" */
