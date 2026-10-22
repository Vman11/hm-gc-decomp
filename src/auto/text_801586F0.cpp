// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803645B0;
void *memset(void *, s32, u32);

void fn_801586F0(u8 *p) {
    M2C_FIELD(p, s32 *, 72) = 0;
    memset(p + 76, 0, 32);
    memset(p + 56, 0, 16);
    memset(p, 0, 56);
    M2C_FIELD(p, u8 *, 1132) = 0;
    M2C_FIELD(p, s32 *, 1144) = 0;
    memset(p + 1133, 0, 4);
    M2C_FIELD(p, s32 *, 1148) = 0;
    M2C_FIELD(p, s32 *, 1152) = 2;
    M2C_FIELD(p, s32 *, 1156) = 2;
    M2C_FIELD(p, s32 *, 1160) = 7;
    M2C_FIELD(p, u8 *, 1164) = 0;
    M2C_FIELD(p, s32 *, 1168) = 2;
    M2C_FIELD(p, s32 *, 1172) = 0;
    M2C_FIELD(p, s32 *, 1176) = 0;
    M2C_FIELD(p, f32 *, 1180) = lbl_803645B0;
    M2C_FIELD(p, f32 *, 1184) = lbl_803645B0;
    M2C_FIELD(p, f32 *, 1188) = lbl_803645B0;
    M2C_FIELD(p, f32 *, 1192) = lbl_803645B0;
    M2C_FIELD(p, u8 *, 1196) = 0;
    M2C_FIELD(p, u8 *, 1197) = 0;
    M2C_FIELD(p, u8 *, 1198) = 0;
    M2C_FIELD(p, u8 *, 1199) = 0;
    M2C_FIELD(p, f32 *, 1200) = lbl_803645B0;
    M2C_FIELD(p, u8 *, 1204) = 1;
    M2C_FIELD(p, s32 *, 1208) = 3;
    M2C_FIELD(p, u8 *, 1212) = 1;
    M2C_FIELD(p, u8 *, 1213) = 1;
    M2C_FIELD(p, s32 *, 1216) = 0;
    M2C_FIELD(p, s32 *, 1220) = 1;
    M2C_FIELD(p, s32 *, 1224) = 0;
    M2C_FIELD(p, s32 *, 1228) = 3;
    M2C_FIELD(p, s32 *, 1236) = 0;
    M2C_FIELD(p, s32 *, 1232) = 0;
    M2C_FIELD(p, s32 *, 2072) = 0;
    M2C_FIELD(p, s32 *, 2008) = 0;
    M2C_FIELD(p, s32 *, 2012) = 1;
    M2C_FIELD(p, s32 *, 2016) = 2;
    M2C_FIELD(p, s32 *, 2020) = 3;
    M2C_FIELD(p, s32 *, 2024) = 0;
    M2C_FIELD(p, s32 *, 2028) = 0;
    M2C_FIELD(p, s32 *, 2032) = 0;
    M2C_FIELD(p, s32 *, 2036) = 3;
    M2C_FIELD(p, s32 *, 2040) = 1;
    M2C_FIELD(p, s32 *, 2044) = 1;
    M2C_FIELD(p, s32 *, 2048) = 1;
    M2C_FIELD(p, s32 *, 2052) = 3;
    M2C_FIELD(p, s32 *, 2056) = 2;
    M2C_FIELD(p, s32 *, 2060) = 2;
    M2C_FIELD(p, s32 *, 2064) = 2;
    M2C_FIELD(p, s32 *, 2068) = 3;
    memset(p + 2076, 0, 64);
}

} /* extern "C" */
