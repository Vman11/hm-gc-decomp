/* Functions from 0x80221EAC to 0x8022202C, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    u8 pad[0x2C];
    u8 *data;
    u32 size;
} UnkSwapBuf;

void fn_80221EAC(UnkSwapBuf *buf) {
    u8 *p = buf->data;
    u32 n = buf->size >> 2;
    u32 i;
    u8 tmp;

    for (i = 0; i < n; i++) {
        tmp = p[0];
        p[0] = p[3];
        p[3] = tmp;
        tmp = p[2];
        p[2] = p[1];
        p[1] = tmp;
        p += 4;
    }
}
