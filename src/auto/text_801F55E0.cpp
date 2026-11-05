#include "common.h"

extern "C" {

typedef struct H { u32 pad0; int maxcode[16]; int mincode[16]; u8 valoff[16]; u8 pad[0x198 - 0x94]; int minlen; } H;
void fn_801F55E0(H *h, u8 *bits) {
    u32 huffsize[257];
    u16 huffcode[256];
    u32 l;
    int p, i;
    u16 code;
    int si;
    int j;
    for (l = 0, p = 0; l < 16; l++) {
        for (i = 0; i < bits[l]; i++) { huffsize[p] = l + 1; p++; }
        huffsize[p] = 0;
    }
    code = 0;
    si = huffsize[0];
    p = 0;
    while (huffsize[p]) {
        while (huffsize[p] == si) { huffcode[p] = code; code++; p++; }
        code <<= 1;
        si++;
    }
    for (l = 0, j = 0; l < 16; l++) {
        if (bits[l]) {
            h->valoff[l] = j;
            h->mincode[l] = huffcode[j];
            j += bits[l];
            h->maxcode[l] = huffcode[j - 1];
        } else {
            h->maxcode[l] = -1;
            h->mincode[l] = 0x101;
            h->valoff[l] = 0;
        }
    }
    for (l = 0; l < 16; l++) {
        if (bits[l]) { h->minlen = l + 1; return; }
    }
}

}
