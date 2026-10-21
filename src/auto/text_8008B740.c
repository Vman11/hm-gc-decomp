/* Functions from 0x8008B740 to 0x8008B804, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80359348;
extern char lbl_8029908C[];
extern char lbl_80299098[];
extern char lbl_802990A4[];
extern char lbl_802990B0[];
extern char lbl_802990BC[];
extern char lbl_803600D8[];
extern char lbl_803600E0[];
extern char lbl_803600E4[];
extern char lbl_803600EC[];
extern char lbl_803600F4[];
extern char lbl_803600FC[];
extern char lbl_80360104[];
extern char lbl_8036010C[];
extern char lbl_80360114[];
extern char lbl_8036011C[];

/* This unit's .data (lbl_802C6990, 0x36C bytes): the function addresses the tables below through one section base. */
static s32 data_000[4] = { 0, 0xFA, 0x1F4, 0x2EE };
static char data_010[12] = "UI\\MEMCARD\\";
static char data_01C[31][8] = {
    "ATTIC", "BALLROOM", "CHILDREN", "CONSERV", "DINROOM", "FOYER", "GALLERY", "GRAVEYD",
    "GROOM", "GRTHALL", "GUEST", "HALLAB", "HALLCD", "KITCHEN", "LAB", "MUSEUM",
    "MAID", "MASTRBED", "MAUSOLM", "MEASURE", "TOYROOM", "OBSERV", "PANTRY", "PARLOR",
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
static char *data_21C[10] = {
    lbl_803600D8, lbl_803600E0, lbl_803600E0, lbl_8029908C, lbl_803600E0,
    lbl_803600E0, lbl_803600E4, lbl_803600E0, lbl_803600E0, lbl_803600E0
};
static char *data_244[4] = { lbl_803600EC, lbl_80299098, lbl_803600F4, lbl_802990A4 };
static char *data_254[7] = { lbl_803600FC, lbl_80360104, lbl_802990B0, lbl_802990BC, lbl_8036010C, lbl_80360114, lbl_8036011C };
static struct { char *s; s32 a, b; } data_270[7] = {
    { lbl_803600FC, 0, 1 }, { lbl_80360104, 1, 1 }, { lbl_802990B0, 2, 1 }, { lbl_802990BC, 3, 1 },
    { lbl_8036010C, 4, 1 }, { lbl_80360114, 5, 1 }, { lbl_8036011C, 6, 1 }
};
static s32 data_2C4[7] = { 0, 1, 2, 3, 4, 5, 6 };
static s32 data_2E0[7] = { 0, 2, 3, 5, 7, 9, 12 };
static s32 data_2FC[14] = { 1, 3, 4, 1, 3, 1, 3, 3, 1, 1, 2, 1, 1, 3 };
static s32 data_334[14] = { 0, 1, 1, 1, 2, 1, 3, 1, 4, 1, 5, 1, 1, 6 };

void fn_8008B740(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x54) = 7;
    M2C_FIELD(arg0, s32 *, 0x2C) = 7;
    M2C_FIELD(arg0, s32 *, 0x68) = 4;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x80) = 1;
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(arg0, s32 *, 0x88) = 3;
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    M2C_FIELD(arg0, s32 *, 0x94) = 0;
    M2C_FIELD(arg0, void **, 0x58) = data_254;
    M2C_FIELD(arg0, void **, 0x28) = data_270;
    M2C_FIELD(arg0, void **, 0x30) = data_2C4;
    M2C_FIELD(arg0, void **, 0x6C) = data_244;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    M2C_FIELD(arg0, void **, 0xC4) = &lbl_80359348;
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    M2C_FIELD(arg0, void **, 0xF4) = data_21C;
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
    M2C_FIELD(arg0, s32 *, 0x138) = 0;
    M2C_FIELD(arg0, s32 *, 0x13C) = 0;
    M2C_FIELD(arg0, s32 *, 0x140) = 0;
    M2C_FIELD(arg0, s32 *, 0x144) = 1;
    M2C_FIELD(arg0, s32 *, 0x148) = 1;
    M2C_FIELD(arg0, s32 *, 0x14C) = 1;
}
