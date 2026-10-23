// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct { s32 x0, y0, x1, y1; f32 n, f; } Rect80163CB4;
typedef struct { u8 pad[28]; u16 w, h; } FB80163CB4;
static inline s32 W80163CB4(FB80163CB4 *fb) { return fb->w; }
static inline s32 H80163CB4(FB80163CB4 *fb) { return fb->h; }
} /* extern "C" */
struct B80163CB4 {
    void *f0; FB80163CB4 *fb; u8 pad8[24]; Rect80163CB4 rect; u8 pad56[6448 - 56];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(s32 a);
};
struct D80163CB4 : B80163CB4 { u32 f6452, f6456; s32 f6460; };
extern "C" {
extern f32 lbl_80364684;
extern f32 lbl_80364680;
void fn_800DA010(f32 x, f32 y, f32 w, f32 h, f32 n, f32 f);
void fn_800DA0C4(u32 x, u32 y, u32 w, u32 h);
void fn_8014CBA4(Rect80163CB4 *dst, const Rect80163CB4 *src);
void fn_80163CB4(D80163CB4 *p, const Rect80163CB4 *r) {
    if (r == 0) {
        p->rect.x0 = 0;
        p->rect.y0 = 0;
        p->rect.x1 = p->fb->w;
        p->rect.y1 = p->fb->h;
        p->rect.n = lbl_80364684;
        p->rect.f = lbl_80364680;
        fn_800DA010(lbl_80364684, lbl_80364684, W80163CB4(p->fb), H80163CB4(p->fb), lbl_80364684, lbl_80364680);
        fn_800DA0C4(0, 0, (u32)(f32)(s32)p->fb->w, (u32)(f32)(s32)p->fb->h);
    } else {
        fn_8014CBA4(&p->rect, r);
        fn_800DA010((f32)r->x0, (f32)r->y0, (f32)(r->x1 - r->x0), (f32)(r->y1 - r->y0), r->n, r->f);
        fn_800DA0C4((u32)(f32)r->x0, (u32)(f32)r->y0, (u32)(f32)(r->x1 - r->x0), (u32)(f32)(r->y1 - r->y0));
    }
    p->v38(p->f6460);
}

} /* extern "C" */
