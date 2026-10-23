// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { s32 chan; s32 fileNo; s32 offset; s32 length; u16 iBlock; u16 pad; } CardInfo_8020BD18;
typedef struct { u32 x0; void *buf; u32 flags; s32 offset; u32 x10; s32 length; } Req_8020BD18;
typedef struct { u32 x0; u32 x4; u32 flags; } Card_8020BD18;
struct Obj_8020BD18 {
    Req_8020BD18 *req;
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual s32 v4();
    Card_8020BD18 *card;
    s32 busy;
};
s32 fn_8020C120(Card_8020BD18 *);
s32 fn_8020C12C(Card_8020BD18 *);
s32 fn_800D21EC(s32, s32, CardInfo_8020BD18 *);
s32 fn_800D2E94(CardInfo_8020BD18 *, void *, s32, s32, void *);
s32 fn_800D240C(CardInfo_8020BD18 *);
s32 fn_8020B114(s32);

static inline s32 cardOpen_8020BD18(Obj_8020BD18 *p, CardInfo_8020BD18 *info) {
    s32 a = fn_8020C120(p->card);
    return fn_800D21EC(fn_8020C12C(p->card), a, info);
}
static inline s32 cardWrite_8020BD18(CardInfo_8020BD18 *info, s32 off, void *buf, s32 len) {
    return fn_800D2E94(info, buf, len, off, 0);
}
s32 fn_8020BD18(Obj_8020BD18 *p) {
    CardInfo_8020BD18 info;
    s32 r;
    u32 f;
    u8 b;

    f = p->req->flags;
    if (((f >> 3) & 1) && (f & 0x10)) {
        b = 0;
        f = p->card->flags;
        if ((f & 4) || (f & 8)) {
            b = 1;
        }
        if (!b) {
            return 9;
        }
        r = p->v4();
        if (r != 0) {
            return r;
        }
        r = cardOpen_8020BD18(p, &info);
        if (r == 0) {
            r = cardWrite_8020BD18(&info, p->req->offset, p->req->buf, p->req->length);
            if (r == 0) {
                p->busy = 1;
                r = p->v4();
                if (r != 0) {
                    return r;
                }
                r = fn_800D240C(&info);
            }
        }
        return fn_8020B114(r);
    }
    return 0;
}

} /* extern "C" */
