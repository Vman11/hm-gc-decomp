// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct { u8 pad[24]; void *f24; } Sub801554E4;
typedef struct { u8 pad[36]; Sub801554E4 s; } T801554E4;
typedef struct { u8 pad[12]; u16 f12; u8 pad2[3]; u8 f17; u8 pad3[6]; u8 f24[36]; T801554E4 *f60; } S801554E4;
int fn_801609D0(Sub801554E4 *s);
void fn_800D8238(void *p, u16 v);
void fn_800D821C(void *p, s32 a, s32 b);
void fn_800D8240(void *p, s32 a, s32 b);
void fn_800D82C8(void *p, f32 v);
void fn_800D8278(void *p, f32 v);
void fn_800D84B4(void *p, s32 a);
void fn_801554E4(S801554E4 *p, s32 unused, s32 flag, s32 a, s32 b, s32 c) {
    Sub801554E4 *s = &p->f60->s;
    s32 v;
    if (s->f24) {
        fn_800D8238(p->f24, fn_801609D0(s));
    }
    if (flag && (p->f12 & 0x100)) {
        fn_800D821C(p->f24, 1, 1);
    } else {
        fn_800D821C(p->f24, 0, 0);
    }
    fn_800D8240(p->f24, a, b);
    v = (p->f12 & 0x80) ? p->f17 : -1;
    if (v >= 0) {
        fn_800D82C8(p->f24, (f32)v);
        fn_800D8278(p->f24, (f32)v);
    }
    fn_800D84B4(p->f24, c);
}

} /* extern "C" */
