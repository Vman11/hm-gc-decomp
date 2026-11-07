// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"
struct V3 { f32 x, y, z; };
struct GXLightObj;
extern "C" void fn_800D7994(GXLightObj *, f32 *, f32 *, f32 *);
struct T { u8 pad[0x1A98]; GXLightObj *lights[8]; };
extern "C" void fn_80164518(T *__restrict t, u32 i, V3 *v) {
    fn_800D7994(t->lights[i], &v->x, &v->y, &v->z);
    v->y = -v->y;
    v->z = -v->z;
}
