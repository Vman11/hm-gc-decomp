// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct { u8 pad[11]; u8 fB; u8 pad2[32]; u32 f2C; } Part8022BF30;
typedef struct { u32 count; Part8022BF30 **parts; } Mesh8022BF30;
typedef struct { u8 pad[28]; Mesh8022BF30 m; } MB8022BF30;
typedef struct Obj8022BF30 {
    u8 pad0[4];
    u16 type;
    u8 pad1[102];
    Mesh8022BF30 *f6C;
    u8 pad2[32];
    MB8022BF30 *f90;
    u8 pad3[4];
    u32 f98;
    struct Obj8022BF30 **f9C;
    s32 fA0;
} Obj8022BF30;
typedef struct {
    u8 pad0[156];
    Obj8022BF30 *f9C;
    u8 pad1[52];
    s32 fD4;
    s32 fD8;
    u8 pad2[16];
    f32 fEC;
    u8 pad3[12];
    f32 fFC;
    u8 pad4[12];
    f32 f10C;
} P8022BF30;
extern f32 lbl_80365D28;
extern u32 lbl_80365D34;
Obj8022BF30 *fn_801954E8(Obj8022BF30 *o);
Obj8022BF30 *fn_801955D8(Obj8022BF30 *o);
static inline s32 Idx8022BF30(Obj8022BF30 *o) {
    u16 t;
    s32 r = 0;
    t = o->type;
    if (t == 13) r = 0;
    else if (t == 12) r = o->fA0;
    return r;
}
static inline Obj8022BF30 *GetE8022BF30(P8022BF30 *p) {
    Obj8022BF30 *o = p->f9C;
    if (o == 0) return 0;
    if (o->type >= 11 && o->type <= 13) {
        Obj8022BF30 *g = fn_801954E8(o);
        return fn_801955D8(g->f9C[Idx8022BF30(p->f9C)]);
    }
    if (o->type >= 2 && o->type <= 3) return fn_801955D8(o);
    return 0;
}
static inline Mesh8022BF30 *GetMesh8022BF30(Obj8022BF30 *e) {
    Mesh8022BF30 *m = e->f6C;
    if (m == 0) m = &e->f90->m;
    return m;
}
static inline void SPA8022BF30(P8022BF30 *p, Part8022BF30 *m, s32 a) {
    if (m->f2C & 0x20) {
        m->fB = a;
        m->f2C |= lbl_80365D34;
        if (p->fD4 == 0) p->fEC = a;
    }
}
void fn_8022BF30(P8022BF30 *p, u8 v, s32 c, f32 t) {
    s32 a;
    Obj8022BF30 *grp = 0;
    u32 n = 1;
    u32 i;
    u32 j;
    Mesh8022BF30 *x;
    Obj8022BF30 *o = p->f9C;
    if (o->type >= 11 && o->type <= 13) {
        grp = o;
        n = o->f98;
    }
    if (lbl_80365D28 == t) {
        a = v;
        for (i = 0; i < n; i++) {
            if (grp) x = grp->f9C[i]->f6C;
            else x = GetMesh8022BF30(GetE8022BF30(p));
            if (x) {
                for (j = 0; j < x->count; j++) {
                    SPA8022BF30(p, x->parts[j], a);
                }
            }
        }
    } else {
        a = v;
        p->fFC = a;
        if (p->fFC != p->fEC) {
            p->f10C = (p->fFC - p->fEC) / t;
            p->fD4 = 1;
            p->fD8 = c;
        }
    }
}

} /* extern "C" */

extern "C" {

/* QV=2.0p1 */
typedef struct { u8 pad[8]; u8 f8; u8 f9; u8 fA; u8 fB; u8 pad2[32]; u32 f2C; } Part8022C128;
typedef struct { u32 count; Part8022C128 **parts; } Mesh8022C128;
typedef struct { u8 pad[28]; Mesh8022C128 m; } MB8022C128;
typedef struct Obj8022C128 {
    u8 pad0[4];
    u16 type;
    u8 pad1[102];
    Mesh8022C128 *f6C;
    u8 pad2[32];
    MB8022C128 *f90;
    u8 pad3[4];
    u32 f98;
    struct Obj8022C128 **f9C;
    s32 fA0;
} Obj8022C128;
typedef struct {
    u8 pad0[156];
    Obj8022C128 *f9C;
    u8 pad1[48];
    s32 fD0;
    u8 pad2[4];
    s32 fD8;
    u8 pad3[4];
    f32 fE0;
    f32 fE4;
    f32 fE8;
    u8 pad4[4];
    f32 fF0;
    f32 fF4;
    f32 fF8;
    u8 pad5[4];
    f32 f100;
    f32 f104;
    f32 f108;
} P8022C128;
extern f32 lbl_80365D28;
extern u32 lbl_80365D40;

static inline s32 Idx8022C128(Obj8022C128 *o) {
    u16 t;
    s32 r = 0;
    t = o->type;
    if (t == 13) r = 0;
    else if (t == 12) r = o->fA0;
    return r;
}
static inline Obj8022C128 *GetE8022C128(P8022C128 *p) {
    Obj8022C128 *o = p->f9C;
    if (o == 0) return 0;
    if (o->type >= 11 && o->type <= 13) {
        Obj8022C128 *g = (Obj8022C128 *)fn_801954E8((Obj8022BF30 *)o);
        return (Obj8022C128 *)fn_801955D8((Obj8022BF30 *)g->f9C[Idx8022C128(p->f9C)]);
    }
    if (o->type >= 2 && o->type <= 3) return (Obj8022C128 *)fn_801955D8((Obj8022BF30 *)o);
    return 0;
}
static inline Mesh8022C128 *GetMesh8022C128(Obj8022C128 *e) {
    Mesh8022C128 *m = e->f6C;
    if (m == 0) m = &e->f90->m;
    return m;
}
static inline void SPC8022C128(P8022C128 *p, Part8022C128 *m, s32 r, s32 g, s32 b) {
    if (m->f2C & 0x10) {
        m->f8 = r;
        m->f9 = g;
        m->fA = b;
        m->f2C |= lbl_80365D40;
        p->fE0 = r;
        p->fE4 = g;
        p->fE8 = b;
    }
}
void fn_8022C128(P8022C128 *p, s32 r, s32 g, s32 b, s32 c, f32 t) {
    Obj8022C128 *grp = 0;
    u32 n = 1;
    u32 i;
    Mesh8022C128 *x;
    u32 j;
    Obj8022C128 *o = p->f9C;
    if (o->type >= 11 && o->type <= 13) {
        grp = o;
        n = o->f98;
    }
    if (lbl_80365D28 == t) {
        for (i = 0; i < n; i++) {
            if (grp) x = grp->f9C[i]->f6C;
            else x = GetMesh8022C128(GetE8022C128(p));
            for (j = 0; j < x->count; j++) {
                SPC8022C128(p, x->parts[j], r, g, b);
            }
        }
    } else {
        p->f100 = lbl_80365D28;
        p->f104 = lbl_80365D28;
        p->f108 = lbl_80365D28;
        p->fF0 = r;
        if (p->fF0 != p->fE0) {
            p->f100 = (p->fF0 - p->fE0) / t;
            p->fD0 = 1;
            p->fD8 = c;
        }
        p->fF4 = g;
        if (p->fF4 != p->fE4) {
            p->f104 = (p->fF4 - p->fE4) / t;
            p->fD0 = 1;
            p->fD8 = c;
        }
        p->fF8 = b;
        if (p->fF8 != p->fE8) {
            p->f108 = (p->fF8 - p->fE8) / t;
            p->fD0 = 1;
            p->fD8 = c;
        }
    }
}

} /* extern "C" */
