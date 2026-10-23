// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct V80191360 {
    f32 x, y, z;
} V80191360;
extern f32 lbl_80364B3C;
extern f32 lbl_80364B40;
void fn_80107244(void *, V80191360 *);
void fn_801077B0(void *, V80191360 *, V80191360 *, V80191360 *, s32);

struct S80191360 {
    u8 pad[48];
    void *f48;
};

void fn_80191360(S80191360 *p, S80191360 *q, V80191360 *off) {
    V80191360 posB;
    V80191360 posA;
    V80191360 diff;
    V80191360 up;
    if (p->f48 == 0) {
        return;
    }
    if (q->f48) {
        fn_80107244(q->f48, &posA);
    } else {
        posA.x = lbl_80364B3C;
        posA.y = lbl_80364B3C;
        posA.z = lbl_80364B3C;
    }
    if (off) {
        posA.x += off->x;
        posA.y += off->y;
        posA.z += off->z;
    }
    if (p->f48) {
        fn_80107244(p->f48, &posB);
    } else {
        posB.x = lbl_80364B3C;
        posB.y = lbl_80364B3C;
        posB.z = lbl_80364B3C;
    }
    {
        volatile V80191360 *d = &diff;
        volatile V80191360 *u = &up;
        f32 z;
        d->x = posA.x - posB.x;
        d->y = posA.y - posB.y;
        d->z = posA.z - posB.z;
        z = *(volatile f32 *)&lbl_80364B3C;
        u->x = z;
        u->y = z;
        u->z = *(volatile f32 *)&lbl_80364B40;
    }
    fn_801077B0(p->f48, &diff, &up, &posB, 0);
}

} /* extern "C" */
