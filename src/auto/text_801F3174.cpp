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

void fn_801F3174(Huf *h, s32 maxbits, u32 n, u32 *lens) {
    u32 len[292];
    u32 code[288];
    u32 i;
    u32 j;
    u32 c;
    u32 cur;

    h->maxbits = maxbits;
    h->n = n;
    for (i = 0; i < n; i++) {
        len[i] = lens[i];
        h->sym[i] = i;
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
    c = 0;
    cur = 0;
    for (i = 0; i < n; i++) {
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
    cur = 0;
    for (i = 0; i < n; i++) {
        if (cur != len[i]) {
            cur = len[i];
            h->first[cur - 1] = i;
            h->minCode[cur - 1] = code[i];
        }
        if (cur != 0) {
            h->maxCode[cur - 1] = code[i];
        }
    }
}

}
