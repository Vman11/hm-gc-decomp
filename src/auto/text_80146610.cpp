// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u32 v[3]; } PM146;
extern PM146 lbl_802E5FA8[];
extern char lbl_8029FBE0[];
void fn_801462F0(u8 *);
void fn_80145A28(u8 *);
void fn_8014601C(u8 *);
void fn_800604C4(int, int, int, int);
void fn_80060568(char *, int, int, int);
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
#define OPS(o) ((PM146 *)(p + 0x5a0))
#define ADD(k) (((PM146 *)(p + 0x5a0))[U32(0x59c)++] = tbl[k])
#define SLOT(o) (*(PM146 *)(p + (o)))

void fn_80146610(u8 *p) {
    PM146 *tbl = lbl_802E5FA8;
    U32(0x59c) = 0;
    if (U16(0x14) & 4) {
        if (U32(0) & 8) ADD(0);
        if (U32(0) & 2) ADD(1);
        if (U32(0) & 0x20) ADD(2);
        if (U16(0x28) & 1) {
            ADD(3);
            if (U32(0) & 0x2000) ADD(4);
        }
        if (U32(0) & 0x10) ADD(5);
        if (U32(0) & 4) ADD(6);
        if (U32(0) & 0x80) ADD(7);
        if (U32(0) & 0x800) ADD(8);
        if (U32(0) & 0x1000) ADD(9);
        if (U32(0x17c) != 0) {
            if (U32(0x8c) > U32(0x94)) {
                ADD(10);
                ADD(11);
            } else {
                ADD(12);
                ADD(13);
            }
        } else if (U32(0x178) != 0) {
            if (U32(0x8c) > U32(0x94)) {
                ADD(14);
                ADD(15);
            } else {
                ADD(16);
                ADD(17);
            }
        }
        switch (U16(0x16)) {
        case 4:
            fn_801462F0(p);
            break;
        case 8:
            if (!(U32(0xb0) & 3)) {
                SLOT(0x6dc) = tbl[40];
            } else {
                SLOT(0x6dc) = tbl[41];
            }
            SLOT(0x6f4) = tbl[42];
            fn_80145A28(p);
            break;
        default:
            fn_800604C4(-6, 0, 0, 0);
            break;
        }
    } else if (U16(0x14) & 1) {
        if (U32(0) & 0x10) ADD(18);
        if (U32(0) & 4) ADD(19);
        if (U32(0) & 0x2000) ADD(20);
        if (U32(0) & 0x80) ADD(21);
        if (U32(0) & 0x800) ADD(22);
        if (U32(0) & 0x1000) ADD(23);
        if (U32(0x178) != 0) {
            if (U32(0x8c) > U32(0x94)) {
                ADD(24);
                ADD(25);
            } else {
                ADD(26);
                ADD(27);
            }
        }
        switch (U16(0x16)) {
        case 0x10:
            U32(0x3c) = fn_80147F68(p + 0x14);
            U32(0x40) = fn_80147F38(p + 0x14);
            U32(0x44) = fn_80147F08(p + 0x14);
            U32(0x4c) = 8 - fn_801480D8(p + 0x14);
            U32(0x50) = 8 - fn_80148098(p + 0x14);
            U32(0x54) = 8 - fn_80148058(p + 0x14);
            U32(0x7c) = (1 << U32(0x4c)) - 1;
            U32(0x80) = (1 << U32(0x50)) - 1;
            U32(0x84) = (1 << U32(0x54)) - 1;
            if (U32(0x24) != 0) {
                U32(0x48) = fn_80147ED8(p + 0x14);
                if (fn_80148018(p + 0x14) == 1) {
                    SLOT(0x6dc) = tbl[43];
                    SLOT(0x6f4) = tbl[44];
                } else {
                    U32(0x58) = 8 - fn_80148018(p + 0x14);
                    U32(0x88) = (1 << U32(0x58)) - 1;
                    SLOT(0x6dc) = tbl[45];
                    SLOT(0x6f4) = tbl[46];
                }
            } else {
                SLOT(0x6dc) = tbl[47];
                SLOT(0x6f4) = tbl[48];
            }
            break;
        case 0x18:
            if (U32(0x18) == 0xff && U32(0x1c) == 0xff00 && U32(0x20) == 0xff0000) {
                SLOT(0x6dc) = tbl[49];
                SLOT(0x6f4) = tbl[50];
            } else if (U32(0x18) == 0xff0000 && U32(0x1c) == 0xff00 && U32(0x20) == 0xff) {
                SLOT(0x6dc) = tbl[51];
                SLOT(0x6f4) = tbl[52];
            } else {
                U32(0x3c) = fn_80147F68(p + 0x14);
                U32(0x40) = fn_80147F38(p + 0x14);
                U32(0x44) = fn_80147F08(p + 0x14);
                U32(0x48) = fn_80147ED8(p + 0x14);
                U32(0x4c) = 8 - fn_801480D8(p + 0x14);
                U32(0x50) = 8 - fn_80148098(p + 0x14);
                U32(0x54) = 8 - fn_80148058(p + 0x14);
                U32(0x58) = 8 - fn_80148018(p + 0x14);
                U32(0x7c) = (1 << U32(0x4c)) - 1;
                U32(0x80) = (1 << U32(0x50)) - 1;
                U32(0x84) = (1 << U32(0x54)) - 1;
                U32(0x88) = (1 << U32(0x58)) - 1;
                SLOT(0x6dc) = tbl[53];
                SLOT(0x6f4) = tbl[54];
            }
            break;
        case 0x20:
            fn_8014601C(p);
            break;
        default:
            fn_800604C4(-6, 0, 0, 0);
            break;
        }
        if (!(U16(0x28) & 1)) {
            fn_800604C4(-6, 0, 0, 0);
        }
        fn_80145A28(p);
    } else {
        fn_80060568(lbl_8029FBE0, 0, 0, 0);
    }
}

} /* extern "C" */
