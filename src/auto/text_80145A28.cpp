// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"

extern "C" {

typedef struct { u32 v[3]; } PM145;
extern PM145 lbl_802E5FA8[];
void fn_800604C4(int, int, int, int);
u32 fn_80147F68(u8 *);
u32 fn_80147F38(u8 *);
u32 fn_80147F08(u8 *);
u32 fn_80147ED8(u8 *);
u32 fn_801480D8(u8 *);
u32 fn_80148098(u8 *);
u32 fn_80148058(u8 *);
u32 fn_80148018(u8 *);

#define U32(o) (*(u32 *)(p + (o)))
#define U16(o) (*(u16 *)(p + (o)))
#define SLOT(o) (*(PM145 *)(p + (o)))

void fn_80145A28(u8 *p) {
    PM145 *tbl = lbl_802E5FA8;
    s32 v;
    switch (U16(0x2a)) {
    case 4:
        if (!(U16(0x28) & 4)) fn_800604C4(-6, 0, 0, 0);
        v = U32(0) & 0x200;
        if (U32(0) & 0x100) v = !v;
        if (v) {
            if (U32(0xb4) & 1) {
                SLOT(0x6e8) = tbl[67];
                SLOT(0x700) = tbl[68];
            } else {
                SLOT(0x6e8) = tbl[69];
                SLOT(0x700) = tbl[70];
            }
        } else {
            if (U32(0xb4) & 1) {
                SLOT(0x6e8) = tbl[71];
                SLOT(0x700) = tbl[72];
            } else {
                SLOT(0x6e8) = tbl[73];
                SLOT(0x700) = tbl[74];
            }
        }
        break;
    case 8:
        if (U16(0x28) & 4) {
            if (!(U32(0xb4) & 3)) {
                SLOT(0x6e8) = tbl[75];
            } else {
                SLOT(0x6e8) = tbl[76];
            }
            SLOT(0x700) = tbl[77];
        } else {
            fn_800604C4(-6, 0, 0, 0);
        }
        break;
    case 0x10:
        U32(0x5c) = 8 - fn_801480D8(p + 0x28);
        U32(0x6c) = fn_80147F68(p + 0x28);
        U32(0x60) = 8 - fn_80148098(p + 0x28);
        U32(0x70) = fn_80147F38(p + 0x28);
        U32(0x64) = 8 - fn_80148058(p + 0x28);
        U32(0x74) = fn_80147F08(p + 0x28);
        if (U32(0x38) != 0) {
            U32(0x68) = 8 - fn_80148018(p + 0x28);
            U32(0x78) = fn_80147ED8(p + 0x28);
            SLOT(0x6e8) = tbl[78];
            SLOT(0x700) = tbl[79];
        } else {
            SLOT(0x6e8) = tbl[80];
            SLOT(0x700) = tbl[81];
        }
        break;
    case 0x18:
        if (U32(0x2c) == 0xff && U32(0x30) == 0xff00 && U32(0x34) == 0xff0000) {
            SLOT(0x6e8) = tbl[82];
            SLOT(0x700) = tbl[83];
        } else if (U32(0x2c) == 0xff0000 && U32(0x30) == 0xff00 && U32(0x34) == 0xff) {
            SLOT(0x6e8) = tbl[84];
            SLOT(0x700) = tbl[85];
        } else {
            U32(0x6c) = fn_80147F68(p + 0x28);
            U32(0x70) = fn_80147F38(p + 0x28);
            U32(0x74) = fn_80147F08(p + 0x28);
            U32(0x78) = fn_80147ED8(p + 0x28);
            U32(0x5c) = 8 - fn_801480D8(p + 0x28);
            U32(0x60) = 8 - fn_80148098(p + 0x28);
            U32(0x64) = 8 - fn_80148058(p + 0x28);
            U32(0x68) = 8 - fn_80148018(p + 0x28);
            SLOT(0x6e8) = tbl[86];
            SLOT(0x700) = tbl[87];
        }
        break;
    case 0x20:
        if (U32(0x2c) == 0xff && U32(0x30) == 0xff00 && U32(0x34) == 0xff0000 && U32(0x38) == 0xff000000) {
            SLOT(0x6e8) = tbl[88];
            SLOT(0x700) = tbl[89];
        } else if (U32(0x2c) == 0xff0000 && U32(0x30) == 0xff00 && U32(0x34) == 0xff && U32(0x38) == 0xff000000) {
            SLOT(0x6e8) = tbl[90];
            SLOT(0x700) = tbl[91];
        } else {
            U32(0x6c) = fn_80147F68(p + 0x28);
            U32(0x70) = fn_80147F38(p + 0x28);
            U32(0x74) = fn_80147F08(p + 0x28);
            U32(0x78) = fn_80147ED8(p + 0x28);
            U32(0x5c) = 8 - fn_801480D8(p + 0x28);
            U32(0x60) = 8 - fn_80148098(p + 0x28);
            U32(0x64) = 8 - fn_80148058(p + 0x28);
            U32(0x68) = 8 - fn_80148018(p + 0x28);
            SLOT(0x6e8) = tbl[92];
            SLOT(0x700) = tbl[93];
        }
        break;
    default:
        fn_800604C4(-6, 0, 0, 0);
        break;
    }
    if (U32(0) & 6) {
        SLOT(0x6e8) = SLOT(0x700);
    }
}

} /* extern "C" */

} /* extern "C" */
