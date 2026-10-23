// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
#include <stdarg.h>

typedef struct { f32 x, y; } V2_8023A670;
typedef struct {
    char text[100];
    V2_8023A670 pos;
    V2_8023A670 size;
} Ent_8023A670;
typedef struct {
    u8 pad[12];
    Ent_8023A670 ents[10];
    s32 n;
} T_8023A670;

extern u8 *lbl_8035B684;
extern f32 lbl_80365FF0;
void fn_800E904C(char *, const char *, va_list);
char *strcpy(char *, const char *);
static inline void SetV2(V2_8023A670 *v, f32 x, f32 y) { v->x = x; v->y = y; }

#pragma peephole off
void fn_8023A670(T_8023A670 *p, const char *fmt, f32 a, f32 b, f32 c, f32 d, ...) {
    va_list va;
    char buf[100];
    if (*(s32 *)(lbl_8035B684 + 188) == 0) return;
    va_start(va, fmt);
    fn_800E904C(buf, fmt, va);
    d = lbl_80365FF0 * d;
    if (p->n >= 10) p->n = 0;
    SetV2(&p->ents[p->n].pos, a, b);
    SetV2(&p->ents[p->n].size, c, d);
    strcpy(p->ents[p->n].text, buf);
    p->n++;
}
#pragma peephole reset

} /* extern "C" */
