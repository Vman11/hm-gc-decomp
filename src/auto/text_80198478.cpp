// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.5 */
typedef struct { f32 x, y, z; } Vec80198478;
typedef struct { u8 pad[96]; Vec80198478 v[9]; u32 pad2; u32 n; } Poly80198478;
} /* extern "C" */
struct N80198478 { u8 pad[8]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual s32 v6(const Poly80198478 *p, void *arg); };
extern "C" {
typedef struct { u8 pad[12]; N80198478 *front; N80198478 *back; f32 nx, ny, nz, d; } Node80198478;
extern volatile f32 lbl_80364C60;

s32 fn_80198478(Node80198478 *nd, const Poly80198478 *p, void *arg) {
    u32 i = 1;
    s32 r;
    if (nd->d + (p->v[0].x * nd->nx + p->v[0].y * nd->ny + p->v[0].z * nd->nz) < lbl_80364C60) {
        r = nd->back->v6(p, arg);
        do {
            const Vec80198478 *v = &p->v[i]; if (nd->d + (v->x * nd->nx + v->y * nd->ny + v->z * nd->nz) >= lbl_80364C60) {
                return nd->front->v6(p, arg);
            }
            i++;
        } while (i < p->n);
    } else {
        r = nd->front->v6(p, arg);
        do {
            const Vec80198478 *v = &p->v[i]; if (nd->d + (v->x * nd->nx + v->y * nd->ny + v->z * nd->nz) < lbl_80364C60) {
                return nd->back->v6(p, arg);
            }
            i++;
        } while (i < p->n);
    }
    return r;
}

} /* extern "C" */
