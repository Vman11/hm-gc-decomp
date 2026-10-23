// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct Vec { f32 x, y, z; } Vec;
typedef struct C16 { u8 pad[4]; f32 f4; } C16;
typedef struct C176 { u8 pad[4]; f32 f4; f32 f8; u8 pad2[4]; C16 *f16; u8 pad3[16]; f32 f36; } C176;
typedef struct C340 { u8 pad[176]; C176 *f176; } C340;
typedef struct C156 { u8 pad[120]; void *f120; } C156;
typedef struct C224 { u8 pad[156]; C156 *f156; } C224;
typedef struct Obj { u8 pad[224]; C224 *f224; u8 pad2[340 - 228]; C340 *f340; } Obj;
extern f32 lbl_8035F974;
extern f32 lbl_8035F910;
void fn_80107F3C(void *, Vec *);

static inline void setF8(C176 *r, f32 v) {
    r->f8 = v;
    if (r->f16 != 0) {
        r->f36 = r->f8 / r->f16->f4;
    }
}

void fn_8007DD70(Obj *o) {
    C156 *q;
    if (o->f340 != 0) {
        q = o->f224->f156;
        if (q != 0) {
            Vec v;
            v.x = lbl_8035F974;
            v.y = lbl_8035F974;
            v.z = lbl_8035F974;
            if (q->f120 != 0) {
                fn_80107F3C(q->f120, &v);
            }
        }
        o->f340->f176->f4 = lbl_8035F910;
        setF8(o->f340->f176, lbl_8035F910);
    }
}

} /* extern "C" */
