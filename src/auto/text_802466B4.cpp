// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V3 { f32 x, y, z; };
struct A { u8 pad[0xc]; u32 n; s32 loop; u8 pad2[4]; V3 *def; u8 pad3[0x1c]; f32 *dur; f32 *times; };
extern f32 lbl_80366250;
extern f32 lbl_80366278;
void fn_80245F9C(A *, u32, V3 *, void *, void *, void *, f32);

static inline void eval(A *a, u32 i, f32 u, V3 *pos, void *p6, void *p7, void *p8) {
    u32 k = i;
    f32 d;
    if (a->loop) {
        if (k >= a->n) k = a->n - 1;
    } else {
        if (a->n == 1 && k >= a->n) {
            k = 0;
            u += a->dur[i];
        }
        if (a->n != 1 && k >= a->n - 1) {
            u += a->dur[k];
            k = a->n - 2;
        }
    }
    d = a->dur[(k + 1) % a->n];
    if (d <= lbl_80366250) d = lbl_80366278;
    fn_80245F9C(a, k, pos, p6, p7, p8, u / d);
}

u32 fn_802466B4(A *a, u32 hint, V3 *pos, void *p6, void *p7, void *p8, f32 t) {
    u32 i;
    f32 end;
    u8 c;
    f32 th;
    if (a->n == 0) {
        if (pos) {
            pos->x = lbl_80366250;
            pos->y = lbl_80366250;
            pos->z = lbl_80366250;
        }
        return 0;
    }
    if (a->loop) {
        end = a->times[0];
        if (lbl_80366250 == end) {
            if (pos) {
                *pos = *a->def;
            }
        } else {
            while (t < *(volatile f32 *)&lbl_80366250) t += end;
            while (t >= end) t -= end;
        }
    } else {
        end = a->times[a->n - 1];
        if (lbl_80366250 == end) {
            if (pos) {
                *pos = *a->def;
            }
        } else if (t < lbl_80366250) {
            t = lbl_80366250;
        } else if (t > end) {
            t = end;
        }
    }
    c = 0;
    if (a->loop && hint == 0) c = 1;
    th = c ? lbl_80366250 : a->times[hint];
    if (t >= th) {
        for (i = hint; i < a->n - 1; i++) {
            if (a->times[i + 1] > t) break;
        }
    } else {
        for (i = hint; i > 0; i--) {
            if (a->times[i] <= t) break;
        }
    }
    if (pos || p6 || p7 || p8) {
        if (i == 0) eval(a, i, t, pos, p6, p7, p8);
        else eval(a, i, t - a->times[i], pos, p6, p7, p8);
    }
    return i;
}

} /* extern "C" */
