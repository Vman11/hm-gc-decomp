// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R;
void fn_800FB064(R *, char *);
f32 fn_800FB2E0(R *);
u32 fn_800F80DC(void *, char *, s32 *);
void fn_800F8604(void *, char *, s32, s32 *);
s32 fn_801AA9B4(u32, char *, char *);
struct D;
void fn_801C0358(D *, R *, s32);
struct D {
    u32 x0;
    s32 types[4];
    s32 ids[4];
    f32 fs[4];
    u32 mask;
    f32 r38[4];
    f32 r48[4];
    f32 r58[4];
    u32 x68;
    u32 flags;
    s32 x70;
    u32 x74;
    u8 pad78[8];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void show(s32); 
};
typedef D Self;
static inline void GetId(void *ctx, char *key, s32 *out) {
    s32 t;
    if (fn_800F80DC(ctx, key, &t) == 0) fn_800F8604(ctx, key, 0xdad, &t);
    *out = t + 1;
}
static inline s32 FreeSlot(D *d) {
    s32 i; for (i = 0; i < 4; i++) if (d->types[i] == 0) break; return i;
}
static inline void Set(D *arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4) {
    s32 i;
    arg0->types[arg1] = arg2;
    arg0->ids[arg1] = arg3;
    arg0->fs[arg1] = arg4;
    arg0->mask = 0;
    for (i = 0; i < 4; i++) {
        switch (arg0->types[i]) {
        case 1: case 2: case 4: arg0->mask |= 1; break;
        case 8: case 0x10: case 0x20: arg0->mask |= 2; break;
        case 0x40: case 0x80: case 0x100: arg0->mask |= 4; break;
        case 0x200: case 0x400: case 0x800: arg0->mask |= 8; break;
        case 0x1000: arg0->mask |= 3; break;
        case 0x2000: arg0->mask |= 0xC; break;
        case 0x4000: arg0->mask |= 0xF; break;
        case 0x8000: case 0: break;
        }
    }
}
void fn_801BDDFC(D *d, s32 msg, void *ctx, R *r) {
    D *self = d;
    switch (msg) {
    case 0xe6:
        d->flags |= 4;
        break;
    case 0x3a: {
        char b[8];
        char a[8];
        fn_800FB064(r, a);
        fn_800FB064(r, b);
        d->x70 = fn_801AA9B4(d->x74, a, b);
        break;
    }
    case 0x43:
        d->r58[0] = fn_800FB2E0(r);
        d->r58[1] = fn_800FB2E0(r);
        d->r58[2] = fn_800FB2E0(r);
        d->r58[3] = fn_800FB2E0(r);
        d->r38[0] = d->r58[0];
        d->r38[1] = d->r58[1];
        d->r38[2] = d->r58[2];
        d->r38[3] = d->r58[3];
        break;
    case 0x90: fn_801C0358(self, r, 0); break;
    case 0x91: fn_801C0358(self, r, 3); break;
    case 0x92: fn_801C0358(self, r, 1); break;
    case 0x93: fn_801C0358(self, r, 4); break;
    case 0x94: fn_801C0358(self, r, 5); break;
    case 0x95: fn_801C0358(self, r, 6); break;
    case 0x96: fn_801C0358(self, r, 7); break;
    case 0x97: fn_801C0358(self, r, 8); break;
    case 0x98: fn_801C0358(self, r, 9); break;
    case 0x99: fn_801C0358(self, r, 10); break;
    case 0x9a: fn_801C0358(self, r, 2); break;
    case 0x9b: fn_801C0358(self, r, 11); break;
    case 0x3b: self->show(0); break;
    case 0x3c: self->show(1); break;
    case 0x3d: d->flags &= ~2; break;
    case 0x3e: d->flags |= 2; break;
    case 0xd3: {
        char buf[8];
        volatile s32 id;
        f32 f;
        fn_800FB064(r, buf);
        GetId(ctx, buf, (s32 *)&id);
        f = fn_800FB2E0(r);
        s32 slot = FreeSlot(d);
        Set(d, slot, 0x0, id, f);
        break;
    }
    case 0xd4: {
        char buf[8];
        volatile s32 id;
        f32 f;
        fn_800FB064(r, buf);
        GetId(ctx, buf, (s32 *)&id);
        f = fn_800FB2E0(r);
        s32 slot = FreeSlot(d);
        Set(d, slot, 0x1, id, f);
        break;
    }
    case 0xd5: {
        char buf[8];
        volatile s32 id;
        f32 f;
        fn_800FB064(r, buf);
        GetId(ctx, buf, (s32 *)&id);
        f = fn_800FB2E0(r);
        s32 slot = FreeSlot(d);
        Set(d, slot, 0x2, id, f);
        break;
    }
    case 0xd6: {
        char buf[8];
        volatile s32 id;
        f32 f;
        fn_800FB064(r, buf);
        GetId(ctx, buf, (s32 *)&id);
        f = fn_800FB2E0(r);
        s32 slot = FreeSlot(d);
        Set(d, slot, 0x4, id, f);
        break;
    }
    case 0xd7: {
        char buf[8];
        volatile s32 id;
        f32 f;
        fn_800FB064(r, buf);
        GetId(ctx, buf, (s32 *)&id);
        f = fn_800FB2E0(r);
        s32 slot = FreeSlot(d);
        Set(d, slot, 0x8, id, f);
        break;
    }
    case 0xd8: {
        char buf[8];
        volatile s32 id;
        f32 f;
        fn_800FB064(r, buf);
        GetId(ctx, buf, (s32 *)&id);
        f = fn_800FB2E0(r);
        s32 slot = FreeSlot(d);
        Set(d, slot, 0x10, id, f);
        break;
    }
    case 0xd9: {
        char buf[8];
        volatile s32 id;
        f32 f;
        fn_800FB064(r, buf);
        GetId(ctx, buf, (s32 *)&id);
        f = fn_800FB2E0(r);
        s32 slot = FreeSlot(d);
        Set(d, slot, 0x20, id, f);
        break;
    }
    case 0xda: {
        char buf[8];
        volatile s32 id;
        f32 f;
        fn_800FB064(r, buf);
        GetId(ctx, buf, (s32 *)&id);
        f = fn_800FB2E0(r);
        s32 slot = FreeSlot(d);
        Set(d, slot, 0x40, id, f);
        break;
    }
    case 0xdb: {
        char buf[8];
        volatile s32 id;
        f32 f;
        fn_800FB064(r, buf);
        GetId(ctx, buf, (s32 *)&id);
        f = fn_800FB2E0(r);
        s32 slot = FreeSlot(d);
        Set(d, slot, 0x80, id, f);
        break;
    }
    case 0xdc: {
        char buf[8];
        volatile s32 id;
        f32 f;
        fn_800FB064(r, buf);
        GetId(ctx, buf, (s32 *)&id);
        f = fn_800FB2E0(r);
        s32 slot = FreeSlot(d);
        Set(d, slot, 0x100, id, f);
        break;
    }
    case 0xdd: {
        char buf[8];
        volatile s32 id;
        f32 f;
        fn_800FB064(r, buf);
        GetId(ctx, buf, (s32 *)&id);
        f = fn_800FB2E0(r);
        s32 slot = FreeSlot(d);
        Set(d, slot, 0x200, id, f);
        break;
    }
    case 0xde: {
        char buf[8];
        volatile s32 id;
        f32 f;
        fn_800FB064(r, buf);
        GetId(ctx, buf, (s32 *)&id);
        f = fn_800FB2E0(r);
        s32 slot = FreeSlot(d);
        Set(d, slot, 0x400, id, f);
        break;
    }
    case 0xdf: {
        char buf[8];
        volatile s32 id;
        f32 f;
        fn_800FB064(r, buf);
        GetId(ctx, buf, (s32 *)&id);
        f = fn_800FB2E0(r);
        s32 slot = FreeSlot(d);
        Set(d, slot, 0x800, id, f);
        break;
    }
    case 0xe0: {
        char buf[8];
        volatile s32 id;
        f32 f;
        fn_800FB064(r, buf);
        GetId(ctx, buf, (s32 *)&id);
        f = fn_800FB2E0(r);
        s32 slot = FreeSlot(d);
        Set(d, slot, 0x1000, id, f);
        break;
    }
    case 0xe1: {
        char buf[8];
        volatile s32 id;
        f32 f;
        fn_800FB064(r, buf);
        GetId(ctx, buf, (s32 *)&id);
        f = fn_800FB2E0(r);
        s32 slot = FreeSlot(d);
        Set(d, slot, 0x2000, id, f);
        break;
    }
    case 0xe2: {
        char buf[8];
        volatile s32 id;
        f32 f;
        fn_800FB064(r, buf);
        GetId(ctx, buf, (s32 *)&id);
        f = fn_800FB2E0(r);
        s32 slot = FreeSlot(d);
        Set(d, slot, 0x4000, id, f);
        break;
    }
    case 0xe3: {
        char buf[8];
        volatile s32 id;
        f32 f;
        fn_800FB064(r, buf);
        GetId(ctx, buf, (s32 *)&id);
        f = fn_800FB2E0(r);
        s32 slot = FreeSlot(d);
        Set(d, slot, 0x8000, id, f);
        break;
    }
    }
}

} /* extern "C" */
