// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { f32 x, y, z; } V80036E44;
typedef struct { f32 x, y, z, w; } Q80036E44;
typedef struct { u8 pad[48]; void *x30; } P80036E44;
typedef struct {
    u8 pad[1456];
    P80036E44 *x5B0;
    V80036E44 pos;
    Q80036E44 rot;
} T80036E44;

extern f32 lbl_8035BE98;
void fn_80107244(void *, V80036E44 *);
void fn_801075B8(void *, Q80036E44 *);

void fn_80036E44(T80036E44 *t, P80036E44 *p) {
    V80036E44 pos;
    Q80036E44 rot;
    t->x5B0 = p;
    if (t->x5B0) {
        pos.x = lbl_8035BE98;
        pos.y = lbl_8035BE98;
        pos.z = lbl_8035BE98;
        rot.x = lbl_8035BE98;
        rot.y = lbl_8035BE98;
        rot.z = lbl_8035BE98;
        rot.w = lbl_8035BE98;
        if (t->x5B0->x30) {
            fn_80107244(t->x5B0->x30, &pos);
        } else {
            pos.x = lbl_8035BE98;
            pos.y = lbl_8035BE98;
            pos.z = lbl_8035BE98;
        }
        if (t->x5B0->x30) {
            fn_801075B8(t->x5B0->x30, &rot);
        }
        t->pos.x = pos.x;
        t->pos.y = pos.y;
        t->pos.z = pos.z;
        t->rot.x = rot.x;
        t->rot.y = rot.y;
        t->rot.z = rot.z;
        t->rot.w = rot.w;
    }
}

} /* extern "C" */
