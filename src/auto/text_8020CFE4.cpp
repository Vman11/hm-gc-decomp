// fn_8020CFE4: save-file writer (header/data blocks via stream vtable at +0x88c). NonMatching draft:
// instructions identical (SDIFF 0), only callee-saved GPR coloring differs (self r29/b r30 vs target r30/r28). Notes: hm-work/wA_8020CFE4/STATUS.txt, hm-work/wOB/STATUS.txt
#include "common.h"

extern "C" {

void *memset(void *, int, u32);
void *memcpy(void *, const void *, u32);

struct H_8020CFE4 {
    virtual void p0();
    virtual void p1();
    virtual s32 get();
};

struct Stream_8020CFE4 {
    u8 pad[0x10];
    virtual void p0();
    virtual s32 finish();
    virtual s32 open(void *, void *, s32);
    virtual s32 flush();
    virtual s32 seek(u32);
    virtual void p5();
    virtual s32 write(u32, u32, H_8020CFE4 **);
    virtual void p7();
    virtual void p8();
    virtual void release(H_8020CFE4 *);
};

struct Self_8020CFE4 {
    u8 pad[0x6bc];
    u32 *x6bc;
    u8 pad2[0x880 - 0x6c0];
    u32 x880;
    u8 pad3[4];
    u32 x888;
    Stream_8020CFE4 s;
};

typedef struct {
    u32 a;
    u32 size;
    u32 ptr;
    u32 psize;
    s32 type;
} E_8020CFE4;

typedef struct {
    u8 pad[0xc8];
    u8 h1[0x20];
    u8 h2[0x20];
    u32 x108;
    u32 x10c;
    u32 x110;
    u32 x114;
    s32 x118;
    E_8020CFE4 ent[8];
} B_8020CFE4;

typedef struct {
    u8 pad[0x2e];
    u8 f2e;
    u8 pad2;
    u32 x30;
    u16 h34;
    u16 h36;
    u32 x38;
    u8 pad3[0x68 - 0x3c];
    u32 x68;
} O_8020CFE4;

extern u32 lbl_80365818;
void fn_8020CDB0(void *, void *, void *);
s32 fn_800D3624(u32, u32, O_8020CFE4 *);
s32 fn_800D339C(u32, u32, O_8020CFE4 *);
s32 fn_8020B114(s32);

static inline u32 Count_8020CFE4(B_8020CFE4 *b) {
    u32 k;
    for (k = 0; k < 8; k++) {
        if (b->ent[k].a == 0) {
            return k;
        }
    }
    return 8;
}

static inline s32 WriteBlk_8020CFE4(Stream_8020CFE4 *s, u32 off, u32 buf, u32 size) {
    H_8020CFE4 *h;
    s32 r = s->seek(off);
    if (r == 0) {
        r = s->write(buf, size, &h);
        if (r == 7) {
            r = h->get();
            s->release(h);
        }
    }
    return r;
}

s32 fn_8020CFE4(Self_8020CFE4 *self, B_8020CFE4 *b, O_8020CFE4 *o) {
    u32 buf[8];
    struct { u8 h1[0x20]; u8 h2[0x20]; } hdr;
    u32 c;
    u32 i;
    s32 r;
    u32 fsize;
    u32 off;
    u32 a;
    u32 csz;
    u32 asz;
    u32 first;
    u32 n;

    memset(buf, 0, 0x20);
    fn_8020CDB0(&self->s, self, 0);
    r = self->s.open(&lbl_80365818, &lbl_80365818, 4);
    if (r != 0) {
        return r;
    }
    memcpy(hdr.h1, b->h1, 0x20);
    memcpy(hdr.h2, b->h2, 0x20);
    r = WriteBlk_8020CFE4(&self->s, 0, (u32)&hdr, 0x40);
    if (r != 0) {
        return r;
    }
    buf[0] = o->x38 = 0;
    r = WriteBlk_8020CFE4(&self->s, 0x40, (u32)buf, 0x20);
    if (r != 0) {
        return r;
    }
    a = b->x108;
    off = 0x60;
    asz = b->x10c;
    c = b->x110;
    csz = b->x114;
    if (a != 0) {
        r = WriteBlk_8020CFE4(&self->s, 0x60, a, asz);
        if (r != 0) {
            return r;
        }
        off = asz + 0x60;
        if (c != 0) {
            r = WriteBlk_8020CFE4(&self->s, off, c, csz);
            if (r != 0) {
                return r;
            }
            off += csz;
        }
        o->f2e = (o->f2e & ~3) | (c ? 1 : 2);
    } else {
        o->f2e &= ~3;
    }
    n = Count_8020CFE4(b);
    o->x30 = 0x60;
    if (b->x118 != 1) {
        o->f2e &= ~4;
    } else {
        o->f2e = (o->f2e & ~4) | 4;
    }
    first = 0;
    for (i = 0; i < n; b = (B_8020CFE4 *)((u8 *)b + sizeof(E_8020CFE4)), i++) {
        u32 sh = i * 2;
        u32 ptr = b->ent[0].ptr;
        s32 type = b->ent[0].type;
        u32 ea = b->ent[0].a;
        u32 esz = b->ent[0].size;
        u32 psz = b->ent[0].psize;
        
        if (ptr != 0 && first == 0) {
            first = ptr;
            fsize = psz;
        }
        r = WriteBlk_8020CFE4(&self->s, off, ea, esz);
        if (r != 0) {
            return r;
        }
        o->h34 = (o->h34 & ~(3 << sh)) | ((ptr ? 1 : 2) << sh);
        off += esz;
        switch (type) {
        case 4:
        default:
            o->h36 = (o->h36 & ~(3 << sh)) | (1 << sh);
            break;
        case 8:
            o->h36 = (o->h36 & ~(3 << sh)) | (2 << sh);
            break;
        case 12:
            o->h36 = (o->h36 & ~(3 << sh)) | (3 << sh);
            break;
        }
    }
    if (i != 8) {
        o->h36 &= ~(3 << (i * 2));
    }
    if (first != 0) {
        r = WriteBlk_8020CFE4(&self->s, off, first, fsize);
        if (r != 0) {
            return r;
        }
    }
    r = self->s.flush();
    if (r != 0) {
        return r;
    }
    r = self->s.finish();
    if (r != 0) {
        return r;
    }
    do {
        r = fn_800D3624(*self->x6bc, self->x880, o);
    } while (r == -1);
    if (r != 0) {
        return fn_8020B114(r);
    }
    do {
        r = fn_800D339C(*self->x6bc, self->x880, o);
    } while (r == -1);
    if (r != 0) {
        return fn_8020B114(r);
    }
    self->x888 = o->x68;
    return 0;
}

}
