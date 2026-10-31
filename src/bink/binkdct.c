/* RAD Bink: 0x8028F9D8-0x80290650 */
#include "bink_common.h"

void fn_80290190(s32 n, f32 *a, s32 nc, s32 idx) {
    fn_8028F9D8(n, a, nc, lbl_802AD300[idx]);
}

void fn_802901C0(void *a, void *b, void *c, s32 d) {
    fn_8028F9D8(a, b, c, lbl_802AB2C0 + d * 256);
}

void fn_802901F0(void *a, void *b, void *c, s32 d) {
    fn_8028FDB4(a, b, c, lbl_802AB2C0 + d * 256);
}
