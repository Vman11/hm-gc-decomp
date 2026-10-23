// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct B801E4248 {
    u8 pad[16];
    virtual void v0();
    virtual void v1();
};
extern "C" {
void fn_800F9638(void *o);
void fn_800F9654(void *o, u8 *c);
void fn_800F994C(void *o, u32 x);

typedef struct D801E4248 {
    u32 f0, f4, f8, f12, f16, f20, f24, f28, f32, f36, f40, f44;
} D801E4248;

void fn_801E4248(u8 *p, const D801E4248 *d, u32 a, u32 b, u32 c) {
    u8 z;
    if (*(u32 *)(p + 212) != 0) {
        fn_800F9638(p);
        ((B801E4248 *)(p + 24))->v1();
        fn_800F9638(p + 60);
        ((B801E4248 *)(p + 84))->v1();
        fn_800F9638(p + 120);
        ((B801E4248 *)(p + 144))->v1();
        *(u32 *)(p + 192) = 0;
        *(u32 *)(p + 200) = 0;
        *(u32 *)(p + 204) = 0;
        *(u32 *)(p + 184) = 0;
        *(u32 *)(p + 212) = 0;
        *(u32 *)(p + 224) = 0;
        *(u32 *)(p + 228) = 0;
        *(u32 *)(p + 208) = 0;
        *(u32 *)(p + 216) = 0;
        *(u32 *)(p + 220) = 0;
        *(u32 *)(p + 196) = 0;
        *(u32 *)(p + 180) = 0;
        *(u32 *)(p + 188) = 0;
    }
    *(u32 *)(p + 192) = d->f20;
    *(u32 *)(p + 184) = d->f0;
    *(u32 *)(p + 204) = d->f8;
    *(u32 *)(p + 180) = d->f32;
    *(u32 *)(p + 208) = d->f16;
    *(u32 *)(p + 224) = d->f12;
    *(u32 *)(p + 212) = d->f36;
    *(u32 *)(p + 228) = d->f28;
    *(u32 *)(p + 188) = d->f4;
    *(u32 *)(p + 216) = d->f40;
    *(u32 *)(p + 220) = d->f44;
    *(u32 *)(p + 196) = d->f24;
    z = 0;
    fn_800F9654(p, &z);
    fn_800F994C(p + 24, a);
    fn_800F9654(p + 60, &z);
    fn_800F994C(p + 84, b);
    fn_800F9654(p + 120, &z);
    fn_800F994C(p + 144, c);
}

} /* extern "C" */
