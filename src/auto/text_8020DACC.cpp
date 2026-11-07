// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

// fn_8020DACC: NonMatching draft (SDIFF 0, DIFF 32: register-only; s32 roundup temp fixed the size copy into r29; left total init operand order + loop regs), see hm-work/wPH/STATUS.txt.
struct Ent { void *p; u32 size; u32 pad8; u32 x; u32 pad16; };
struct S {
    u32 base;
    u8 pad4[64];
    char name[200];
    u32 a268;
    u8 pad272[4];
    u32 a276;
    u8 pad280[4];
    Ent ent[8];
};
struct ST { u8 pad[32]; u32 a32; u32 time; u8 pad40[68]; };
struct FI { u32 a0; u32 fileNo; u8 pad8[12]; };
struct TM { s32 sec, min, hour, mday, mon, year, wday, yday, msec, usec; };
struct OBJ { u8 pad[8]; u32 fl; };
struct M {
    u8 pad0[1716];
    u32 blk;
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
    virtual s32 s14(); virtual OBJ *s15();
    u32 *chan;
    u8 st1728[448];
    s32 fileNo;
    s32 a2180;
};
extern char lbl_80365818[4];
void fn_800FA474(char *, char *, int);
s32 fn_800D27B8(u32, char *, u32, FI *);
s32 fn_8020B114(s32);
s32 fn_800D339C(u32, s32, ST *);
void fn_80214884(S *, s32);
void fn_800BA7DC(u64, TM *);
void fn_80214868(S *, s32, s32, s32, s32, s32, s32);
s32 fn_8020CFE4(M *, S *, ST *);
s32 fn_800D240C(FI *);
void fn_80214988(u8 *, S *);
void fn_8021488C(u8 *, char *);

static inline u32 count(S *s) {
    if (!s->ent[0].p) return 0;
    if (!s->ent[1].p) return 1;
    if (!s->ent[2].p) return 2;
    if (!s->ent[3].p) return 3;
    if (!s->ent[4].p) return 4;
    if (!s->ent[5].p) return 5;
    if (!s->ent[6].p) return 6;
    if (!s->ent[7].p) return 7;
    return 8;
}

static inline s32 create(M *m, char *n, u32 sz, FI *fi) { s32 r; do r = fn_800D27B8(*m->chan, n, sz, fi); while (r == -1); return r; }
static inline s32 close(FI *fi) { s32 r; do r = fn_800D240C(fi); while (r == -1); return r; }
#pragma opt_loop_invariants off
static inline u32 dataSize(S *s) {
    u32 i;
    u32 total;
    u32 last;
    total = s->a276 + 96;
    total += s->a268;
    last = 0;
    for (i = 0; i < count(s); i++) {
        u32 x;
        total += s->ent[i].size;
        x = s->ent[i].x;
        if (!last && x) last = x;
    }
    total += last;
    return total;
}
static inline u32 fileSize(S *s) { u32 b = s->base; return b + dataSize(s); }
static inline u32 roundup(u32 v, u32 b) { if (v % b) v = b * (v / b + 1); return v; }
s32 fn_8020DACC(M *m, S *s) {
    ST st;
    TM tm;
    char name[32];
    FI fi;
    s32 r;
    u32 size;
    if (m->s14()) {
        fn_800FA474(s->name, name, 31);
        { s32 v = fileSize(s); if (v % m->blk) v = m->blk * (v / m->blk + 1); size = v; }
        r = create(m, name, size, &fi);
        if (r) return fn_8020B114(r);
        m->fileNo = fi.fileNo;
        do r = fn_800D339C(*m->chan, m->fileNo, &st); while (r == -1);
        if (r) { m->fileNo = -1; return fn_8020B114(r); }
        m->a2180 = st.a32;
        fn_80214884(s, m->a2180);
        fn_800BA7DC((s64)st.time * (*(u32 *)0x800000F8 / 4), &tm);
        fn_80214868(s, tm.year, tm.mon + 1, tm.mday, tm.hour, tm.min, tm.sec);
        if ((r = fn_8020CFE4(m, s, &st)) != 0) {
            m->fileNo = -1;
            m->a2180 = -1;
            return r;
        }
        r = close(&fi);
        if (r == 0) {
            fn_80214988(m->st1728, s);
            fn_8021488C(m->st1728, lbl_80365818);
            return 0;
        }
        m->fileNo = -1;
        m->a2180 = -1;
        return fn_8020B114(r);
    }
    {
        OBJ *ob = m->s15();
        r = 12;
        if (ob->fl & 2) r = 11;
    }
    return r;
}
#pragma opt_loop_invariants reset

}
