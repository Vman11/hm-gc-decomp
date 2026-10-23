/* Functions from 0x8007C5AC to 0x8007C668, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_802C3040[];
extern char lbl_803592D0[4];
extern char lbl_803592D4[4];

extern char lbl_802986EC[];
extern char lbl_802986F8[];
extern char lbl_80298704[];
extern char lbl_8035F8C8[];
extern char lbl_8035F8D0[];
extern char lbl_8035F8D8[];
extern char lbl_8035F8E0[];

/* This unit's .data (lbl_802C3040, 0x344 bytes): the function addresses the tables below through one section base. */
static s32 data_000[4] = { 0, 0xFA, 0x1F4, 0x2EE };
static char data_010[12] = "UI\\MEMCARD\\";
static char data_01C[31][8] = {
    "ATTIC", {'B', 'A', 'L', 'L', 'R', 'O', 'O', 'M'}, {'C', 'H', 'I', 'L', 'D', 'R', 'E', 'N'}, "CONSERV", "DINROOM", "FOYER", "GALLERY", "GRAVEYD",
    "GROOM", "GRTHALL", "GUEST", "HALLAB", "HALLCD", "KITCHEN", "LAB", "MUSEUM",
    "MAID", {'M', 'A', 'S', 'T', 'R', 'B', 'E', 'D'}, "MAUSOLM", "MEASURE", "TOYROOM", "OBSERV", "PANTRY", "PARLOR",
    "SITTING", "STRETCH", "SUNROOM", "WINTER", "TITLE", "SPIRIT", "GLOBAL"
};
static s32 data_114[3][3] = { { 0, 0x28, 0 }, { 0, 0x28, 0 }, { 0, 0x28, 0 } };
static f32 data_138[22] = { 0, 1, 0, 0, 0, 0, 0, 2, 0, 1, 1, 0, -1, 1, 0, 0, 1, 1, 0, 1, -1, 0 };
static s32 data_190[35] = {
    6, 9, 0xC, 0xF, 0x12, 0x15, 0x18, 0x1B, 0,
    6, 9, 0xC, 0xF, 0x12, 0x15, 0x18, 0x1B, 0,
    6, 0x40, 0x43, 0x46, 0x49, 0x4C, 0x4F, 0x52, 0x55,
    0x1E, 0x21, 0x24, 0x27, 0x2A, 0x2D, 0x30, 0x33
};
static struct { s32 a, b, c; char *s; } data_21C = { 0, 0, 0, lbl_802986EC };
static char *data_22C[7] = { lbl_8035F8C8, lbl_8035F8D0, lbl_8035F8D8, lbl_802986F8, lbl_80298704, lbl_802986EC, lbl_8035F8E0 };
static struct { char *s; s32 a, b; } data_248[7] = {
    { lbl_8035F8C8, 0, 1 }, { lbl_8035F8D0, 1, 1 }, { lbl_8035F8D8, 2, 1 }, { lbl_802986F8, 3, 1 },
    { lbl_80298704, 4, 1 }, { lbl_802986EC, 5, 1 }, { lbl_8035F8E0, 6, 1 }
};
static s32 data_29C[7] = { 0, 1, 2, 3, 4, 5, 6 };
static s32 data_2B8[7] = { 0, 2, 4, 6, 8, 10, 12 };
static s32 data_2D4[14] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
static s32 data_30C[14] = { 0, 1, 1, 2, 1, 3, 1, 4, 1, 5, 1, 6, 1, 7 };

void fn_8007C5AC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2C) = M2C_FIELD(arg0, s32 *, 0x54) = 7;
    M2C_FIELD(arg0, s32 *, 0x68) = 2;
    M2C_FIELD(arg0, s32 *, 0x5C) = 1;
    M2C_FIELD(arg0, s32 *, 0x80) = 1;
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    M2C_FIELD(arg0, s32 *, 0x94) = 0;
    M2C_FIELD(arg0, void **, 0x58) = data_22C;
    M2C_FIELD(arg0, void **, 0x28) = data_248;
    M2C_FIELD(arg0, void **, 0x30) = data_29C;
    M2C_FIELD(arg0, void **, 0x6C) = lbl_803592D4;
    M2C_FIELD(arg0, void **, 0x78) = &data_21C;
    M2C_FIELD(arg0, void **, 0xC4) = lbl_803592D0;
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    M2C_FIELD(arg0, s32 *, 0xF4) = 0;
    M2C_FIELD(arg0, s32 *, 0xFC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10C) = 0;
    M2C_FIELD(arg0, s32 *, 0x118) = 0;
    M2C_FIELD(arg0, s32 *, 0x11C) = 0;
    M2C_FIELD(arg0, s32 *, 0x120) = 0;
    M2C_FIELD(arg0, s32 *, 0x124) = 0;
    M2C_FIELD(arg0, s32 *, 0x128) = 0;
    M2C_FIELD(arg0, s32 *, 0x12C) = 0;
    M2C_FIELD(arg0, s32 *, 0x130) = 0;
    M2C_FIELD(arg0, s32 *, 0x134) = 0;
    M2C_FIELD(arg0, s32 *, 0x138) = 1;
    M2C_FIELD(arg0, s32 *, 0x13C) = 0;
    M2C_FIELD(arg0, s32 *, 0x140) = 0;
    M2C_FIELD(arg0, s32 *, 0x144) = 0;
    M2C_FIELD(arg0, s32 *, 0x148) = 0;
}
