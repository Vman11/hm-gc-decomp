#include "common.h"

extern "C" {

struct Huf {
    void *vt;
    s32 maxCode[15];
    s32 minCode[15];
    u32 first[15];
    u8 padb8[0x4fc - 0xb8];
    u32 sym[288];
    u32 n;
    s32 maxbits;
};

void fn_801F3174(Huf *__restrict h, s32 maxbits, u32 n, u32 *__restrict lens) {
    u32 len[292];
    u32 code[288];
    u32 i;
    u32 j;
    u32 cur;
    u32 k, cl;
    u32 c;

    h->maxbits = maxbits;
    h->n = n;
    for (i = 0; i < n; i++) {
        h->sym[i] = i;
        len[i] = lens[i];
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (len[j] < len[i] || (len[j] == len[i] && h->sym[j] < h->sym[i])) {
                u32 t = len[j];
                u32 s = h->sym[j];
                len[j] = len[i];
                h->sym[j] = h->sym[i];
                len[i] = t;
                h->sym[i] = s;
            }
        }
    }
    for (i = 0, cur = 0, c = 0; i < n; i++) {
        while (cur != len[i]) {
            c <<= 1;
            cur++;
        }
        if (cur != 0) {
            code[i] = c++;
        }
    }
    for (i = 0; i < h->maxbits; i++) {
        h->first[i] = 0;
        h->minCode[i] = 0x0FFFFFFF;
        h->maxCode[i] = -1;
    }
    for (k = 0, cl = 0; k < n; k++) {
        if (cl != len[k]) {
            cl = len[k];
            h->first[cl - 1] = k;
            h->minCode[cl - 1] = code[k];
        }
        if (cl != 0) {
            h->maxCode[cl - 1] = code[k];
        }
    }
}

}
