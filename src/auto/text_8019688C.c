// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { u8 pad[24]; u32 f24; u8 pad2[16]; u32 f44; u8 pad3[4]; } Pt;
typedef struct { u8 pad[12]; u32 fl; u8 pad2[88 - 16]; f32 period; u8 pad3[428 - 92]; f32 life; } D;
typedef struct { u32 f0; } Q;
typedef struct { u8 pad[24]; u8 f24[72 - 24]; Q *f72; u8 pad2[144 - 76]; D *d; u32 pad148; u32 f152; f32 time; u32 n; Pt *parts; f32 rate; u8 pad3[212 - 172]; u32 f212; } T;
extern f32 lbl_80364C1C;
extern u32 lbl_80364C24, lbl_80364C28;
void fn_80195D50(Pt *p, void *q, f32 s);
void fn_80196B9C(T *t, s32 j, f32 f);
void fn_80195A10(Pt *p, Pt *q);

static inline void jb(T *t, f32 now, f32 *po, f32 *ps) {
            f32 base;
            u32 j;
            u32 end;
            (*ps) = t->d->period;
            if ((*po) <= lbl_80364C1C) {
                j = 0;
                base = lbl_80364C1C;
            } else {
                j = (s32)((*po) / (*ps)) + 1;
                base = (f32)(s32)j * (*ps);
            }
            end = (s32)(now / (*ps));
            (*po) = now - base;
            for (; j <= end; j++) {
                fn_80196B9C(t, j, (*po));
                (*po) -= (*ps);
            }
}
void fn_8019688C(T *t, f32 dt) {
    u32 i;
    f32 old = lbl_80364C1C;
    f32 step = t->rate * dt;
    if (t->d->fl & 0x800) {
        if (t->f212) t->parts->f44 = t->f212;
        else if (t->f72) t->parts->f44 = t->f72->f0;
        else t->parts->f44 = 0;
    } else {
        t->parts->f44 = 0;
    }
    for (i = 0; i < t->n; i++) fn_80195D50(&t->parts[i], t->f24, step);
    if (!(t->f152 & 8)) {
        old = t->time;
        t->time = old + step;
    }
    {
        f32 now = t->time;
        if (now > t->d->life) {
            t->f152 |= lbl_80364C24;
            for (i = 0; i < t->n; i++) {
                if (t->parts[i].f24) break;
            }
            if (i >= t->n) t->f152 |= lbl_80364C28;
        } else if (!(t->f152 & 8) && dt > lbl_80364C1C && !(now < lbl_80364C1C)) {
            jb(t, now, &old, &step);
        }
    }
    if (t->d->fl & 0x800 && t->parts->f44) {
        for (i = 1; i < t->n; i++) fn_80195A10(&t->parts[i], t->parts);
    }
}
