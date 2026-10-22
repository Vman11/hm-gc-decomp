// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct wA_Q { u8 flags; u8 n; u16 cnt; u8 *data; void *x; };
void fn_800D9C58(u8 *d, void *x);
void fn_800D6B8C(u32 cmd, u32 fmt, u16 n);

inline void wA_send(wA_Q *q) {
    u16 c = q->cnt;
    u8 *p = q->data + 3;
    u8 *end = p + q->n * (c * 2);
    if (q->flags & 2) {
        end += c;
    }
    for (; p < end; p++) {
        *(volatile u8 *)0xCC008000 = *p;
    }
}

void fn_80217224(wA_Q *q, s32 mode, u8 fmt) {
    u8 *h = q->data;
    if (fmt == (h[0] & 7u)) {
        if (mode == 0) {
            fn_800D9C58(h, q->x);
        } else if (mode == 1) {
            fn_800D6B8C(0xa8, h[0] & 7u, *(u16 *)(h + 1));
            wA_send(q);
        } else {
            fn_800D6B8C(0xb8, h[0] & 7u, *(u16 *)(h + 1));
            wA_send(q);
        }
    } else {
        if (mode == 0) {
            fn_800D6B8C(h[0] & 0xf8, fmt, *(u16 *)(h + 1));
            wA_send(q);
        } else if (mode == 1) {
            fn_800D6B8C(0xa8, fmt, *(u16 *)(h + 1));
            wA_send(q);
        } else {
            fn_800D6B8C(0xb8, fmt, *(u16 *)(h + 1));
            wA_send(q);
        }
    }
}

} /* extern "C" */
