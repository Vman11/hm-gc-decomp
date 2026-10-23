// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u32 v[3]; } PM145;
extern PM145 lbl_802E5FA8[];
void fn_800604C4(int, int, int, int);
void fn_80145A28(u8 *p);
#define U32(o) (*(u32 *)(p + (o)))
#define U16(o) (*(u16 *)(p + (o)))
#define SLOT(o) (*(PM145 *)(p + (o)))
void fn_801462F0(u8 *p) {
    PM145 *tbl = lbl_802E5FA8;
    s32 v;
    if (((U16(0x28) >> 2) & 1) && U16(0x2a) == 4) {
        if (!(U32(0xb0) & 3) && !(U32(0xb4) & 3) && !((U32(0x90) | U32(0x98)) & 1) && U32(0x8c) == U32(0x94) && !(U32(0x8c) & 1) && U32(0x59c) == 0) {
            SLOT(0x6dc) = tbl[28];
            SLOT(0x6e8) = tbl[29];
            SLOT(0x6f4) = tbl[30];
            SLOT(0x700) = tbl[31];
            return;
        }
        if (!((U16(0x28) >> 2) & 1)) fn_800604C4(-6, 0, 0, 0);
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
    } else {
        fn_80145A28(p);
    }
    if (U32(0) & 0x200) {
        if (U32(0x90) & 1) {
            SLOT(0x6dc) = tbl[32];
            SLOT(0x6f4) = tbl[33];
        } else {
            SLOT(0x6dc) = tbl[34];
            SLOT(0x6f4) = tbl[35];
        }
    } else {
        if (U32(0x90) & 1) {
            SLOT(0x6dc) = tbl[36];
            SLOT(0x6f4) = tbl[37];
        } else {
            SLOT(0x6dc) = tbl[38];
            SLOT(0x6f4) = tbl[39];
        }
    }
}

} /* extern "C" */
