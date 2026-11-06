#include "common.h"
extern "C" {

#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct V2 { f32 x, y; };
struct R { f32 x0, y0, x1, y1; };
struct Arr { int a; u32 b; u32 c; };
extern u16 lbl_80365048;
extern u16 lbl_8036504A;
extern u16 lbl_8036504C;
extern u16 lbl_8036504E;
extern u16 lbl_80365050;
extern u16 lbl_80365052;
extern f32 lbl_80365060;
extern f32 lbl_80365064;
extern f32 lbl_80365068;
extern f32 lbl_80365078;
extern f32 lbl_8036507C;
extern f32 lbl_803596E0[];
extern f32 lbl_8035B010;
extern f32 lbl_8035B014;
extern f32 lbl_8035B018;
extern volatile u32 lbl_8035A9E8;
extern u16 lbl_802E0F60[];
extern char lbl_802A2980[];
void fn_801A5128(void *p, R *q);
void fn_8012C938(void *font, void *ctx, Arr *s, V2 *pos, V2 *scl, void *col, R *rc, s32 n, f32 a, f32 b, f32 d);
void fn_8012C744(f32 a, f32 b, f32 d, void *font, void *ctx, const char *s, V2 *pos, V2 *scl, void *col, R *rc, s32 n);
void fn_8012D0A4(f32, f32, f32, void *font, R *out, Arr *s, V2 *pos, V2 *scl, int n);
void fn_80121E1C(u8 *c);
void fn_80121D44(u8 *c, void *src);
static inline void measure(void *font, R *r, Arr *s, V2 *pos, V2 *scl) {
    fn_8012D0A4(lbl_803596E0[0], lbl_8035B010, lbl_8035B014, font, r, s, pos, scl, 17);
}
static inline u16 rnd(u16 range) {
    return (u16)((u32)(range * lbl_802E0F60[lbl_8035A9E8 = (lbl_8035A9E8 + 1) & 0x7ff]) >> 11);
}
void fn_801CBECC(void *p, void *ctx, R *rc, void *unused, R *clip, u32 selA, u32 selB, u8 *st2, int ha, int va) {
    R q;
    R q2;
    V2 pos;
    V2 scl;
    V2 pos2;
    R r;
    V2 pp;
    u8 col[16];
    u8 *st;
    void *font;
    V2 *s;
    f32 width;
    u32 fl;
    { f32 d, c, b, a; a = *(volatile f32 *)&rc->x0; b = *(volatile f32 *)&rc->y0; c = *(volatile f32 *)&rc->x1; d = *(volatile f32 *)&rc->y1; q.x0 = a; q.y0 = b; q.x1 = c; q.y1 = d; }
    fn_801A5128(p, &q);
    if (clip) {
        { f32 d, c, b, a; a = *(volatile f32 *)&clip->x0; b = *(volatile f32 *)&clip->y0; c = *(volatile f32 *)&clip->x1; d = *(volatile f32 *)&clip->y1; q2.x0 = a; q2.y0 = b; q2.x1 = c; q2.y1 = d; }
        fn_801A5128(p, &q2);
    }
    pos.x = q.x0;
    pos.y = q.y0;
    st = F(F(p,0xc,u8*),0x6c,u8*);
    if (!st) return;
    font = F(st,0x24,void*);
    if (!font) return;
    s = (V2 *)(st + 0x30);
    if (!s) return;
    scl = *s;
    if (rc->x0 != 0.0) scl.x = scl.x * (q.x0 / rc->x0);
    if (rc->y0 != 0.0) scl.y = scl.y * (q.y0 / rc->y0);
    if (F(p,0x38,int)) width = __fabs(q.x1 - q.x0);
    else width = lbl_803596E0[0];
    fl = 0;
    switch (ha) {
    case 0: pos.x = q.x1; fl = lbl_80365048; break;
    case 1: pos.x = q.x0; fl = lbl_8036504A; break;
    case 2: fl = lbl_8036504C; pos.x = (q.x0 + q.x1) * lbl_80365060; break;
    }
    switch (va) {
    case 0: pos.y = q.y0; fl |= lbl_8036504E; break;
    case 1: pos.y = q.y1; fl |= lbl_80365050; break;
    case 2: fl |= lbl_80365052; pos.y = (q.y0 + q.y1) * lbl_80365060; break;
    }
    if (selA != selB && F(p,0x24,Arr*)) {
        u32 len;
        pos2 = pos;
        len = F(p,0x24,Arr*)->c - F(p,0x24,Arr*)->b;
        if (selA) {
            F(p,0x24,Arr*)->b = 0;
            F(p,0x24,Arr*)->c = selA;
            fn_8012C938(font, ctx, F(p,0x24,Arr*), &pos, &scl, st + 0x14, clip, fl, width, F(st,0x28,f32), F(st,0x2c,f32));
            measure(font, &r, F(p,0x24,Arr*), &pos2, &scl);
            pos2.x = r.x1;
            pos2.y = r.y0;
        }
        if (selB != selA) {
            void *font2 = F(st2,0x24,void*);
            F(p,0x24,Arr*)->b = selA;
            F(p,0x24,Arr*)->c = selB + 1;
            fn_8012C938(font2, ctx, F(p,0x24,Arr*), &pos2, &scl, st2 + 0x14, clip, fl, width, F(st2,0x28,f32), F(st2,0x2c,f32));
            measure(font2, &r, F(p,0x24,Arr*), &pos2, &scl);
            pos2.x = r.x1;
            pos2.y = r.y0;
        }
        if (selB < len) {
            F(p,0x24,Arr*)->b = selB + 1;
            F(p,0x24,Arr*)->c = len;
            fn_8012C938(font, ctx, F(p,0x24,Arr*), &pos2, &scl, st + 0x14, clip, fl, width, F(st,0x28,f32), F(st,0x2c,f32));
        }
        F(p,0x24,Arr*)->b = 0;
        F(p,0x24,Arr*)->c = len;
    } else if (F(p,0x24,Arr*)) {
        f32 t = lbl_8035B018;
        int n = 1;
        int i;
        f32 c;
        f32 a;
        int al;
        u8 alpha;
        u16 jit;
        int half;
        u32 k;
        if ((int)t > 0) n = 2;
        c = t;
        if (c >= lbl_80365064) c = lbl_80365064;
        a = 1.0 - c * lbl_80365068;
        al = (int)(lbl_80365078 * a);
        if (al > 255) al = 255;
        if (al < 0) al = 0;
        alpha = al;
        jit = (int)t;
        half = (int)t >> 1;
        a = lbl_8036507C - a;
        scl.x *= a;
        scl.y *= a;
        for (i = 0; i < n; i++) {
            pp = pos;
            lbl_8035A9E8 = (lbl_8035A9E8 + 1) & 0x7ff;
            k = lbl_8035A9E8;
            pp.x += (int)((u16)((u32)(jit * lbl_802E0F60[k]) >> 11) - half);
            lbl_8035A9E8 = (k + 1) & 0x7ff;
            pp.y += (int)((u16)((u32)(jit * lbl_802E0F60[lbl_8035A9E8]) >> 11) - half);
            fn_80121E1C(col);
            fn_80121D44(col, st + 0x14);
            col[0] = ((u32)(alpha * (col[0] + 1)) >> 8) & 0xff;
            col[1] = ((u32)(alpha * (col[1] + 1)) >> 8) & 0xff;
            col[2] = ((u32)(alpha * (col[2] + 1)) >> 8) & 0xff;
            col[3] = ((u32)(255 * (col[3] + 1)) >> 8) & 0xff;
            col[4] = ((u32)(alpha * (col[4] + 1)) >> 8) & 0xff;
            col[5] = ((u32)(alpha * (col[5] + 1)) >> 8) & 0xff;
            col[6] = ((u32)(alpha * (col[6] + 1)) >> 8) & 0xff;
            col[7] = ((u32)(255 * (col[7] + 1)) >> 8) & 0xff;
            col[8] = ((u32)(alpha * (col[8] + 1)) >> 8) & 0xff;
            col[9] = ((u32)(alpha * (col[9] + 1)) >> 8) & 0xff;
            col[10] = ((u32)(alpha * (col[10] + 1)) >> 8) & 0xff;
            col[11] = ((u32)(255 * (col[11] + 1)) >> 8) & 0xff;
            col[12] = ((u32)(alpha * (col[12] + 1)) >> 8) & 0xff;
            col[13] = ((u32)(alpha * (col[13] + 1)) >> 8) & 0xff;
            col[14] = ((u32)(alpha * (col[14] + 1)) >> 8) & 0xff;
            col[15] = ((u32)(255 * (col[15] + 1)) >> 8) & 0xff;
            if (clip) fn_8012C938(font, ctx, F(p,0x24,Arr*), &pp, &scl, col, &q2, fl, width, F(st,0x28,f32), F(st,0x2c,f32));
            else fn_8012C938(font, ctx, F(p,0x24,Arr*), &pp, &scl, col, 0, fl, width, F(st,0x28,f32), F(st,0x2c,f32));
        }
    } else {
        if (clip) fn_8012C744(width, F(st,0x28,f32), F(st,0x2c,f32), font, ctx, lbl_802A2980, &pos, &scl, st + 0x14, &q2, fl);
        else fn_8012C744(width, F(st,0x28,f32), F(st,0x2c,f32), font, ctx, lbl_802A2980, &pos, &scl, st + 0x14, 0, fl);
    }
}
}
