// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u8 *fn_80111BC0(u32 *p, u32 n) {
    if (n < p[0]) {
        switch (p[2]) {
        case 0:
            return (u8 *)p[4] + n * 12;
        case 1:
            return (u8 *)p[4] + n * 16;
        case 2:
            return (u8 *)p[4] + n * 16;
        case 3:
            return (u8 *)p[4] + n * 16;
        case 4:
            return (u8 *)p[4] + n * 20;
        case 5:
            return (u8 *)p[4] + n * 60;
        case 6:
            return (u8 *)p[4] + n * 16;
        case 7:
            return (u8 *)p[4] + n * 16;
        case 8:
            return (u8 *)p[4] + n * 16;
        case 9:
            return (u8 *)p[4] + n * 16;
        case 10:
            return (u8 *)p[4] + n * 16;
        case 11:
            return (u8 *)p[4] + n * 20;
        }
    } else if (p[7] != 0) {
        return fn_80111BC0((u32 *)p[7], n);
    }
    return 0;
}

} /* extern "C" */
