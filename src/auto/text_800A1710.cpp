// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { f32 x, y, z; } V800A1710;
typedef struct { u8 pad[40]; V800A1710 scale; } O800A1710;
typedef struct { u8 pad[120]; O800A1710 *f78; } B800A1710;
typedef struct { u8 pad[156]; B800A1710 *f9C; } A800A1710;
typedef struct { u8 pad[12]; V800A1710 *fC; } C800A1710;
typedef struct { u8 pad[16]; u32 f10; } E800A1710;
typedef struct { u8 b[8]; } N800A1710;
typedef struct { E800A1710 *f0; u8 pad4[8]; N800A1710 *fC; } D800A1710;
typedef struct { u32 f0; u8 pad4[44]; u32 f30; } Q800A1710;
typedef struct S800A1710 {
    u8 pad0[224];
    A800A1710 *fE0;
    u8 padE4[396 - 228];
    D800A1710 *f18C;
    u8 pad190[416 - 400];
    C800A1710 *f1A0;
    u8 pad1A4[528 - 420];
    s32 f210;
} S800A1710;
extern f32 lbl_80361BF4;
extern N800A1710 lbl_80361BD4;
void fn_80107F3C(O800A1710 *, V800A1710 *);
u32 fn_800EB1B4(void);
void fn_800F6E88(N800A1710 *, N800A1710 *);
s32 fn_800F6CD0(N800A1710 *, N800A1710 *);
void fn_802410CC(S800A1710 *, N800A1710 *, s32);
Q800A1710 *fn_8022D694(A800A1710 *);

void fn_800A1710(S800A1710 *p) {
    N800A1710 name;
    V800A1710 v;
    O800A1710 *o;
    V800A1710 *s;
    f32 sx, sy, sz;
    u32 n;
    u32 r;
    Q800A1710 *q;
    p->f210 = 1;
    o = p->fE0->f9C->f78;
    if (o != 0) {
        v.x = o->scale.x;
        v.y = o->scale.y;
        v.z = o->scale.z;
    } else {
        v.x = lbl_80361BF4;
        v.y = lbl_80361BF4;
        v.z = lbl_80361BF4;
    }
    s = p->f1A0->fC;
    sx = s->x;
    sy = s->y;
    sz = s->z;
    v.x *= sx;
    v.y *= sy;
    v.z *= sz;
    o = p->fE0->f9C->f78;
    if (o != 0) {
        fn_80107F3C(o, &v);
    }
    n = p->f18C->f0->f10;
    if (n != 0) {
        r = fn_800EB1B4();
        fn_800F6E88(&name, &p->f18C->fC[r % n]);
        if (fn_800F6CD0(&name, &lbl_80361BD4) == 0) {
            fn_802410CC(p, &name, 0);
        }
    }
    q = fn_8022D694(p->fE0);
    if (q->f30 & 1) {
        q->f0 &= ~2;
    }
}

} /* extern "C" */
