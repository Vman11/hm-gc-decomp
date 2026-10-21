// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 next(); };
extern "C" { void fn_800FAEF8(R *); u32 fn_800FB33C(R *);
    extern u32 lbl_803641D8, lbl_803641DC, lbl_803641E0, lbl_803641E4, lbl_803641E8, lbl_803641EC, lbl_803641F0, lbl_803641F4, lbl_803641F8, lbl_803641FC, lbl_80364200, lbl_80364204, lbl_80364208, lbl_8036420C, lbl_80364210, lbl_80364214, lbl_80364218, lbl_8036421C, lbl_80364220, lbl_80364224, lbl_80364228, lbl_8036422C, lbl_80364230, lbl_80364234, lbl_80364238;
}

extern "C" u32 fn_80139228(R *r, u32 *a, u32 *b) {
    u32 f = 0;
    u32 k;
    *a = 0;
    *b = 0;
    fn_800FAEF8(r);
    while ((k = r->next()) != 6) {
        switch (k) {
        case 64:
            f &= ~0x180;
            f |= lbl_803641D8;
            break;
        case 65:
            f &= ~0x140;
            f |= lbl_803641DC;
            break;
        case 66:
            f &= ~0xC0;
            f |= lbl_803641E0;
            break;
        case 67:
            f |= lbl_803641E4;
            *a = fn_800FB33C(r);
            break;
        case 95:
            f |= lbl_803641E8;
            break;
        case 68:
            f |= lbl_803641EC;
            break;
        case 69:
            f |= lbl_803641F0;
            break;
        case 70:
            f |= lbl_803641F4;
            break;
        case 71:
            f |= lbl_803641F8;
            *b = fn_800FB33C(r);
            break;
        case 72:
            f |= lbl_803641FC;
            break;
        case 73:
            f |= lbl_80364200;
            break;
        case 74:
            f |= lbl_80364204;
            break;
        case 75:
            f |= lbl_80364208;
            break;
        case 76:
            f |= lbl_8036420C;
            break;
        case 77:
            f |= lbl_80364210;
            break;
        case 78:
            f |= lbl_80364214;
            break;
        case 79:
            f |= lbl_80364218;
            break;
        case 80:
            f |= lbl_8036421C;
            break;
        case 81:
            f |= lbl_80364220;
            break;
        case 82:
            f |= lbl_80364224;
            break;
        case 83:
            f |= lbl_80364228;
            break;
        case 84:
            f |= lbl_8036422C;
            break;
        case 85:
            f |= lbl_80364230;
            break;
        case 86:
            f |= lbl_80364234;
            break;
        case 87:
            f |= lbl_80364238;
            break;
        default:
            r->err(30);
            break;
        }
    }
    return f;
}

} /* extern "C" */
