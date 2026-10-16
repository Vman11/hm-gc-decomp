/* Functions from 0x8005E00C to 0x8005E0C8, found by decomp-toolkit. */
#include "common.h"

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
