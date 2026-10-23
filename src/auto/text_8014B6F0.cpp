// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct V8014B6F0 { u8 pad[16]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual s32 v4(u32 a); };
struct P8014B6F0 {
    u8 pad0[16];
    u32 f16;
    u32 f20;
    u32 f24;
    u16 f28;
    u16 f30;
    u8 pad32[16];
    u8 f48[4];
    V8014B6F0 *f52;
    u32 f56;
    u8 pad60[1344 - 60];
    u32 f1344;
    u32 f1348;
    u8 pad1352[8];
    u8 f1360;
    u8 f1361;
    u8 f1362;
    u8 f1363;
    u32 f1364;
};
extern "C" {
void fn_8014BA24(P8014B6F0 *p, u8 *buf);
s32 fn_801485B4(P8014B6F0 *p, s32 err);
s32 fn_802108B4(void *a, u8 *buf, u32 n, u32 *out);
void fn_8014B6F0(P8014B6F0 *p, u8 *buf) {
    u8 *q = buf + 21;
    s32 r;
    u32 tmp;
    buf[0] = p->f16;
    buf[1] = p->f16 >> 8;
    buf[2] = p->f20;
    buf[3] = p->f20 >> 8;
    buf[4] = p->f30;
    buf[5] = (u32)p->f30 >> 8;
    buf[6] = p->f56;
    buf[7] = p->f56 >> 8;
    buf[8] = p->f24;
    buf[9] = p->f24 >> 8;
    buf[10] = p->f24 >> 16;
    buf[11] = p->f24 >> 24;
    buf[12] = p->f1348;
    buf[13] = p->f1348 >> 8;
    buf[14] = p->f1348 >> 16;
    buf[15] = p->f1348 >> 24;
    buf[16] = p->f1360;
    buf[17] = p->f1361;
    buf[18] = p->f1362;
    buf[19] = p->f1364;
    buf[20] = p->f1364 >> 8;
    fn_8014BA24(p, q);
    q += ((p->f1361 + 7) >> 3) * (p->f56 + p->f1364);
    r = p->f52->v4(p->f1344);
    if (r != 0) fn_801485B4(p, r);
    r = fn_802108B4(p->f48, q, p->f1348, &tmp);
    if (r != 0) fn_801485B4(p, r);
}

} /* extern "C" */
