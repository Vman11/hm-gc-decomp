// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct Tex802215DC { u8 pad[0x1C]; u16 w; u16 h; };
struct TexSrc802215DC {
    u8 pad[20];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
    virtual Tex802215DC *Get(s32 i);
};
struct Desc802215DC {
    u8 pad0[0x1C];
    f32 *pos;
    s32 posStride;
    u8 pad1[0x4C - 0x24];
    f32 *uv;
    u8 pad2[0x6C - 0x50];
    s32 uvStride;
    u8 pad3[0x90 - 0x70];
};
struct GX802215DC;
struct VB802215DC {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void Lock(Desc802215DC *d, s32 n, f32 **out);
    virtual void Unlock(s32 n);
    virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void Draw(GX802215DC *gx, s32 a, s32 b, s32 c);
};
struct GXI802215DC {
    u8 pad[48];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18();
    virtual VB802215DC *GetVB();
};
struct GX802215DC { GXI802215DC *f0; };
struct Dev802215DC {
    u8 pad[48];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12();
    virtual GX802215DC *GetGX();
};
struct P802215DC {
    u8 pad0[4];
    Dev802215DC *f4;
    u8 pad1[16];
    TexSrc802215DC *f18;
    u8 pad2[0x40 - 0x1C];
    s32 f40;
    s32 f44;
    u8 pad3[0x58 - 0x48];
    s32 f58;
};
extern "C" {
extern f32 lbl_80365A08;
extern f32 lbl_80365A0C;
void fn_8014CA08(Desc802215DC *d);
void fn_8014C8C8(Desc802215DC *d, s32 a, s32 b, s32 c);
static inline void Pos802215DC(f32 *pos, f32 x, f32 y) {
    pos[0] = x;
    pos[1] = y;
    pos[2] = lbl_80365A08;
    pos[3] = lbl_80365A0C;
}
void fn_802215DC(P802215DC *p, f32 *r) {
    VB802215DC *vb;
    GX802215DC *gx;
    Desc802215DC d;
    Tex802215DC *tex;
    f32 su;
    f32 sv;
    f32 *pos;
    f32 *uv;
    fn_8014CA08(&d);
    tex = p->f18->Get(0);
    su = (f32)p->f40 / (f32)tex->w;
    sv = (f32)p->f44 / (f32)tex->h;
    gx = p->f4->GetGX();
    vb = gx->f0->GetVB();
    fn_8014C8C8(&d, 256, 0, 1);
    vb->Lock(&d, 6, (f32 **)((u8 *)&d + 0x1C));
    pos = d.pos;
    uv = d.uv;
    Pos802215DC(pos, r[0], r[1]);
    uv[0] = lbl_80365A08;
    uv[1] = lbl_80365A08;
    pos = (f32 *)((u8 *)pos + d.posStride);
    uv = (f32 *)((u8 *)uv + d.uvStride);
    Pos802215DC(pos, r[2], r[1]);
    uv[0] = su;
    uv[1] = lbl_80365A08;
    pos = (f32 *)((u8 *)pos + d.posStride);
    uv = (f32 *)((u8 *)uv + d.uvStride);
    Pos802215DC(pos, r[0], r[3]);
    uv[0] = lbl_80365A08;
    uv[1] = sv;
    pos = (f32 *)((u8 *)pos + d.posStride);
    uv = (f32 *)((u8 *)uv + d.uvStride);
    Pos802215DC(pos, r[0], r[3]);
    uv[0] = lbl_80365A08;
    uv[1] = sv;
    pos = (f32 *)((u8 *)pos + d.posStride);
    uv = (f32 *)((u8 *)uv + d.uvStride);
    Pos802215DC(pos, r[2], r[1]);
    uv[0] = su;
    uv[1] = lbl_80365A08;
    pos = (f32 *)((u8 *)pos + d.posStride);
    uv = (f32 *)((u8 *)uv + d.uvStride);
    Pos802215DC(pos, r[2], r[3]);
    uv[0] = su;
    uv[1] = sv;
    vb->Unlock(6);
    vb->Draw(gx, p->f58, 0, 0);
}

} /* extern "C" */

extern "C" {



void fn_802218D0(u8 *p) {
    if (*(u32 *)(p + 0x4C) & 2) {
        f32 v[4];
        v[0] = *(s32 *)(p + 8);
        v[1] = *(s32 *)(p + 0xC);
        v[2] = *(s32 *)(p + 0x10);
        v[3] = *(s32 *)(p + 0x14);
        fn_802215DC((P802215DC *)p, v);
    }
}
} /* extern "C" */
