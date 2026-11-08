#include "common.h"

extern "C" {
struct S27 { u8 pad[0x20]; s32 used; };
extern S27 lbl_80356920[32];
extern volatile u32 lbl_8035B19C;
void fn_800C4EBC(void);
void DCFlushRange(void *p, u32 n);
void fn_802079CC();
void fn_800C6D6C(S27 *s, s32 idx, s32 a, s32 b, void *buf, void *p, u32 n, void (*cb)());
static inline void Wait() { while (lbl_8035B19C != 0) fn_800C4EBC(); }
void fn_80207510(u8 *p, u8 *buf, s32 n) {
    S27 *s;
    s32 idx;
    Wait();
    DCFlushRange(buf, n);
    lbl_8035B19C = 1;
    s = 0;
    for (s32 i = 0; i < 32; i++) {
        if (lbl_80356920[i].used == 0) {
            s = &lbl_80356920[i];
            idx = i;
            s->used = 1;
            break;
        }
    }
    fn_800C6D6C(s, idx, 0, 1, buf, p, n, fn_802079CC);
    Wait();
}
}
