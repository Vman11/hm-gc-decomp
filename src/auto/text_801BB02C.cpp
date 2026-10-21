#include "common.h"
extern "C" {
void fn_801DCA84(void *, void *, void *, void *);

void fn_801BB02C(u8 *p, void *a, void *b, void *c) {
    if (*(u8 **)(p + 0x7c) != 0) {
        *(u8 **)(*(u8 **)(p + 0x7c) + 0x14) = p;
    }
    fn_801DCA84(p, a, b, c);
}
}
