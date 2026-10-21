#include "common.h"
extern "C" {
void fn_8018FD40(u8 *, u32 *, void *);

void fn_8018AF54(u32 *p, u32 *q, void *c) {
    if ((p[0] & 2) == 0 && p[1] < q[0]) {
        fn_8018FD40((u8 *)q[1] + p[1] * 0x40, p, c);
    }
}
}
