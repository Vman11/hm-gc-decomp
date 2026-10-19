/* Functions from 0x8018FD40 to 0x8018FFC4, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern "C" {

}


extern "C" void fn_8018FD40(u32* list, u32 a, u32 b) {
    u32 n = list[0];
    u32 (*e)[2] = (u32 (*)[2])(list + 1);
    u32 (*end)[2] = e + n;

    for (; e < end; e++) {
        if (((s32*)a)[2] > ((s32*)e[0][0])[2]) {
            if (n >= 7) {
                list[0]--;
                end--;
            }
            switch (7 - (end - e)) {
            case 0: e[7][0] = e[6][0]; e[7][1] = e[6][1];
            case 1: e[6][0] = e[5][0]; e[6][1] = e[5][1];
            case 2: e[5][0] = e[4][0]; e[5][1] = e[4][1];
            case 3: e[4][0] = e[3][0]; e[4][1] = e[3][1];
            case 4: e[3][0] = e[2][0]; e[3][1] = e[2][1];
            case 5: e[2][0] = e[1][0]; e[2][1] = e[1][1];
            case 6: e[1][0] = e[0][0]; e[1][1] = e[0][1];
            }
            list[0]++;
            e[0][0] = a;
            e[0][1] = b;
            return;
        }
    }
    if (n < 7) {
        list[0]++;
        e[0][0] = a;
        e[0][1] = b;
    }
}

extern "C" {

}


extern "C" void fn_8018FE74(u32* list, u32 a, u32 b) {
    u32 (*e)[2] = (u32 (*)[2])(list + 1);
    u32 (*end)[2] = e + list[0];

    for (; e < end; e++) {
        if (e[0][0] == a && (b == 0 || e[0][1] == b)) {
            switch (7 - (end - e)) {
            case 0: e[7][0] = e[6][0]; e[7][1] = e[6][1];
            case 1: e[6][0] = e[5][0]; e[6][1] = e[5][1];
            case 2: e[5][0] = e[4][0]; e[5][1] = e[4][1];
            case 3: e[4][0] = e[3][0]; e[4][1] = e[3][1];
            case 4: e[3][0] = e[2][0]; e[3][1] = e[2][1];
            case 5: e[2][0] = e[1][0]; e[2][1] = e[1][1];
            case 6: e[1][0] = e[0][0]; e[1][1] = e[0][1];
            }
            list[0]--;
        }
    }
}

extern "C" {

}


extern "C" void fn_8018FF64(u32* dst, u32* src, s32 n) {
    switch (7 - n) {
    case 0: dst[12] = src[12];
    case 1: dst[10] = src[10];
    case 2: dst[8] = src[8];
    case 3: dst[6] = src[6];
    case 4: dst[4] = src[4];
    case 5: dst[2] = src[2];
    case 6: dst[0] = src[0];
    }
}

} /* extern "C" */
