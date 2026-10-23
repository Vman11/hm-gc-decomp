// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; u16 pad; } CardInfo_8020BE38;
typedef struct { void *x0; void *buf; u32 flags; u32 offset; u32 x10; u32 length; } Req_8020BE38;
typedef struct { u32 x0; u32 x4; u32 flags; } Card_8020BE38;
struct Obj_8020BE38 {
    Req_8020BE38 *req;
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual s32 v3();
    virtual s32 v4();
    Card_8020BE38 *card;
    s32 busy;
};
extern u32 lbl_80365800;
s32 fn_8020C120(Card_8020BE38 *);
s32 fn_8020C12C(Card_8020BE38 *);
s32 fn_800D21EC(s32, s32, CardInfo_8020BE38 *);
s32 fn_800D2AE8(CardInfo_8020BE38 *, void *, u32, u32, s32);
s32 fn_8020B114(s32);

static inline s32 cardOpen_8020BE38(Obj_8020BE38 *p, CardInfo_8020BE38 *info) {
    s32 a = fn_8020C120(p->card);
    return fn_800D21EC(fn_8020C12C(p->card), a, info);
}
static inline s32 cardRead_8020BE38(CardInfo_8020BE38 *info, u32 off, void *buf, u32 len) {
    return fn_800D2AE8(info, buf, len, off, 0);
}

s32 fn_8020BE38(Obj_8020BE38 *p, u32 off) {
    CardInfo_8020BE38 info;
    s32 r;
    u32 len;

    r = p->v4();
    if (r != 0) {
        return r;
    }
    if (off == p->req->offset && (p->req->flags & 8)) {
        return 0;
    }
    if (off >= p->card->x4) {
        return 8;
    }
    if (p->req->flags & 0x10) {
        r = p->v3();
        if (r != 0) {
            return r;
        }
    }
    r = cardOpen_8020BE38(p, &info);
    if (r == 0) {
        len = (off + p->req->x10 <= p->card->x4) ? p->req->x10 : p->card->x4 - off;
        r = cardRead_8020BE38(&info, off, p->req->buf, len);
        if (r == 0) {
            p->req->offset = off;
            p->busy = 1;
            {
                Req_8020BE38 *q = p->req;
                q->x0 = p->card;
                q->flags |= lbl_80365800;
            }
            p->req->length = len;
            return p->v4();
        }
    }
    return fn_8020B114(r);
}

} /* extern "C" */
