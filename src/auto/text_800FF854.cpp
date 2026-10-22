// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

/* QV=2.0p1 */

extern "C" {

typedef struct { f32 x, y, z; } V800FF854;
typedef struct { V800FF854 n; f32 d; } P800FF854;
void fn_80101820(V800FF854 *);

void fn_800FF854(P800FF854 *out, const V800FF854 *a, const V800FF854 *b, const V800FF854 *c) {
    V800FF854 e1, e2, n;
    e1.x = a->x - b->x;
    e1.y = a->y - b->y;
    e1.z = a->z - b->z;
    e2.x = c->x - b->x;
    e2.y = c->y - b->y;
    e2.z = c->z - b->z;
    n.x = e1.y * e2.z - e1.z * e2.y;
    n.y = e1.z * e2.x - e1.x * e2.z;
    n.z = e1.x * e2.y - e1.y * e2.x;
    fn_80101820(&n);
    out->n.x = n.x;
    out->n.y = n.y;
    out->n.z = n.z;
    out->d = -(a->x * n.x + a->y * n.y + a->z * n.z);
}

} /* extern "C" */
