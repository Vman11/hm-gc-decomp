// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Stream80206A1C { u8 pad[16]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual s32 Seek(u32); };
struct Dst80206A1C {
    u8 pad[32];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8();
    virtual void Lock(void **, u32 *, s32);
    virtual void Unlock();
};
typedef struct P80206A1C {
    u8 pad0[0x30]; u8 f30[4]; Stream80206A1C *f34;
    u8 pad38[0x548 - 0x38]; u8 *f548; u32 f54C; u32 f550;
} P80206A1C;
extern void *lbl_8035A9F4;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_801485B4(P80206A1C *, s32);
s32 fn_802108B4(void *, u8 *, u32, void *);
void *memcpy(void *, const void *, unsigned long);
void DCFlushRange(void *, u32);

void fn_80206A1C(P80206A1C *p, void *a2, Dst80206A1C *q) {
    u8 *buf;
    s32 err;
    void *dst;
    u32 size;
    u8 tmp[4];
    if (p->f548 == 0) {
        if (lbl_8035A9F4 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035A9F4);
        buf = new u8[p->f550];
        fn_800F7E98();
        if (buf == 0) fn_800604C4(-4, 0, 0, 0);
        err = p->f34->Seek(p->f54C);
        if (err) fn_801485B4(p, err);
        err = fn_802108B4(p->f30, buf, p->f550, tmp);
        if (err) fn_801485B4(p, err);
    } else {
        buf = p->f548;
    }
    q->Lock(&dst, &size, 2);
    memcpy(dst, buf, p->f550);
    q->Unlock();
    DCFlushRange(dst, p->f550);
    if (p->f548 == 0) delete[] buf;
}

} /* extern "C" */
