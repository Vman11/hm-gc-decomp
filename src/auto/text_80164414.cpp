// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"
struct V4 { f32 x, y, z, w; };
struct GXLightObj;
extern "C" void fn_800D77D8(GXLightObj *, f32 *, f32 *, f32 *);
extern "C" f32 lbl_80364684;
struct T {
    u8 pad[0x1A98];
    GXLightObj *lights[8];
    void get(u32 i, V4 *v);
};
extern "C" void fn_80164414(T *t, u32 i, V4 *v) {
    fn_800D77D8(t->lights[i], &v->x, &v->y, &v->z);
    v->w = lbl_80364684;
}
