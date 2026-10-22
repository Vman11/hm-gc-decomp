/* Functions from 0x8005E00C to 0x8005E0C8, found by decomp-toolkit. */
#include "common.h"

extern "C" {

typedef struct Unk5E00CColor { f32 x, y, z; } Unk5E00CColor;
typedef struct Unk5E00CSettings { u8 pad[0xC]; Unk5E00CColor *color; } Unk5E00CSettings;
typedef struct Unk5E00CMaterial { u8 pad[0x14]; f32 x, y, z, a; } Unk5E00CMaterial;
typedef struct Unk5E00CLink { u8 pad[0x10]; Unk5E00CMaterial *material; } Unk5E00CLink;
typedef struct Unk5E00CObject { u32 flags; u8 pad[0x68]; Unk5E00CLink *link; } Unk5E00CObject;
typedef struct Unk5E00C {
    u8 pad[0x2EC];
    Unk5E00CObject *object;
    u8 pad2[0x74];
    Unk5E00CSettings *settings;
    f32 value;
    f32 *duration;
    u8 pad3[4];
    u8 flags;
} Unk5E00C;
extern Unk5E00C *lbl_8035A1A8;
extern f32 lbl_8035E4A8;
extern f32 lbl_8035E4CC;

typedef struct W5E00CColor { f32 x, y, z; } W5E00CColor;
typedef struct W5E00CSettings { u8 pad[0xC]; W5E00CColor *color; } W5E00CSettings;
typedef struct W5E00CMaterial { u8 pad[0x14]; f32 x, y, z, a; } W5E00CMaterial;
typedef struct W5E00CLink { u8 pad[0x10]; W5E00CMaterial *material; } W5E00CLink;
typedef struct W5E00CObject { u32 flags; u8 pad[0x68]; W5E00CLink *link; } W5E00CObject;
typedef struct W5E00C {
    u8 pad[0x2EC];
    W5E00CObject *object;
    u8 pad2[0x74];
    W5E00CSettings *settings;
    f32 value;
    f32 *duration;
    u8 pad3[4];
    u8 flags;
} W5E00C;

#pragma opt_common_subs off
void fn_8005E00C(W5E00C *arg0, f32 delta) {
    if (arg0->flags & 1) {
        arg0->value -= delta * (lbl_8035E4CC / *arg0->duration);
        if (arg0->value < lbl_8035E4A8) arg0->value = lbl_8035E4A8;
        if ((void *)arg0 == lbl_8035A1A8) {
            W5E00CObject *object = arg0->object;
            if (object) {
                f32 value = arg0->value;
                if (value > lbl_8035E4A8) {
                    W5E00CColor *color = arg0->settings->color;
                    W5E00CMaterial *material = object->link->material;
                    f32 x = value * color->x;
                    f32 y = value * color->y;
                    f32 z = value * color->z;
                    material->x = x;
                    material->y = y;
                    material->z = z;
                    material->a = lbl_8035E4CC;
                    return;
                }
                object->flags &= ~0x800;
                lbl_8035A1A8 = 0;
            }
        }
    }
}
#pragma opt_common_subs reset

} /* extern "C" */
