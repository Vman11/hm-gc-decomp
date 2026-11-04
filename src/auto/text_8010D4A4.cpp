// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct Rd {
    u8 pad_[0x124];
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3();
    virtual void err(s32);
    virtual u32 tok();
};
struct Attr { u8 pad0[8]; s32 type; u8 padc[4]; s32 cnt; u8 pad14[4]; s32 n; };
struct Fmt { u8 pad0[0x40]; s32 stride; };
struct AB {
    u32 a, b;
    virtual void v0();
    virtual void upd(Attr *);
    virtual void v2();
    virtual void v3();
    virtual void upd2(Attr *, Rd *);
};
struct C8010D328 { u8 d[12]; u32 pre; u32 f10; C8010D328(); ~C8010D328(); };
struct C8010AC94 { u8 d[16]; C8010AC94(); ~C8010AC94(); };
struct C8010AB20 { u8 d[16]; C8010AB20(); ~C8010AB20(); };
struct C8010A9AC { u8 d[16]; C8010A9AC(); ~C8010A9AC(); };
struct C8010A838 { u8 d[20]; C8010A838(); ~C8010A838(); };
struct C8010A664 { u8 d[60]; C8010A664(); ~C8010A664(); };
struct C8011497C { u8 d[16]; C8011497C(); ~C8011497C(); };
struct C801145C8 { u8 d[16]; C801145C8(); ~C801145C8(); };
struct C80114210 { u8 d[16]; C80114210(); ~C80114210(); };
struct C80113E5C { u8 d[16]; C80113E5C(); ~C80113E5C(); };
struct C80113AA8 { u8 d[16]; C80113AA8(); ~C80113AA8(); };
struct C801136E0 { u8 d[20]; C801136E0(); ~C801136E0(); };
struct C80109C6C { u8 d[36]; C80109C6C(); ~C80109C6C(); };
struct SelfB {
    u8 pad0[0x10];
    virtual void d0();
    virtual void clear();
};
struct Self : SelfB {
    u8 f14[8];
    char *name;
    u32 n;
    u32 f24;
    C8010D328 *f28;
    u32 f2c;
    void *fmt;
    void **arr;
    u8 *buf;
    u32 bufsz;
    u32 bufpos;
};

extern "C" {
extern u32 lbl_8035AAC8;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(u32);
void fn_800F7E98(void);
void fn_800FB064(Rd *, u8 *);
void fn_800F6E88(u8 *, u8 *);
char *fn_800FB284(Rd *);
u32 strlen(const char *);
char *strcpy(char *, const char *);
void *fn_800F8274(Fmt *, u8 *);
u32 fn_800FADA8(Rd *);
Attr *fn_80112B18(void *, u32);
void fn_8010D2A8(C8010D328 *, u32, void *, void **);
void fn_80109F1C(void *, Attr *, u8 *, s32);
void fn_80109F7C(void *, Attr *, Rd *, u8 *, s32);
void fn_800FAEA0(Rd *);

#define ALLOC(dst, expr) \
    if (!lbl_8035AAC8) fn_800604C4(-2, 0, 0, 0); \
    fn_800F7EC0(lbl_8035AAC8); \
    dst = expr; \
    fn_800F7E98(); \
    if (!dst) fn_800604C4(-4, 0, 0, 0);

static inline u32 Count(void *f) { return *(u32 *)((u8 *)f + 0x20); }

static inline void Fill(C8010A664 *e, Attr *a, Rd *r, u8 *dst, s32 cn, int pre) {
    if (pre) fn_80109F7C(e, a, r, dst, cn);
    else fn_80109F1C(e, a, dst, cn);
}

static inline void Expect(Rd *r, u32 t) {
    if (r->tok() != t) r->err(0x1e);
}

int fn_8010D4A4(Self *p, Fmt *f, Rd *r, u32 extra, void *a5, s32 full) {
    u8 buf[8];
    char *s;
    u32 cnt;
    u32 i;
    u32 j;
    u32 k;
    int ok;
    Attr *a;
    AB *o;

    if (p->arr) p->clear();
    Expect(r, 0x40);
    fn_800FB064(r, buf);
    fn_800F6E88(p->f14, buf);
    Expect(r, 0x47);
    s = fn_800FB284(r);
    ALLOC(p->name, new char[strlen(s) + 1])
    strcpy(p->name, s);
    Expect(r, 0x3f);
    fn_800FB064(r, buf);
    p->fmt = fn_800F8274(f, buf);
    Expect(r, 0x49);
    p->n = fn_800FADA8(r);
    if (!full) p->n = 0;
    p->n += extra;
    ALLOC(p->f28, new C8010D328[p->n])
    cnt = Count(p->fmt);
    p->bufsz = 0;
    for (i = 0; i < cnt; i++) {
        a = fn_80112B18(p->fmt, i);
        switch (a->type) {
        case 5:
            p->bufsz += f->stride * (a->n + 1);
            break;
        case 11:
            p->bufsz += a->cnt * (f->stride * (a->n + 1));
            break;
        }
    }
    if (p->bufsz) {
        p->bufsz *= p->n;
        ALLOC(p->buf, new u8[p->bufsz])
    }
    ALLOC(p->arr, new void *[cnt])
    for (i = 0; i < cnt; i++) {
        switch (fn_80112B18(p->fmt, i)->type) {
        case 1: ALLOC(p->arr[i], new C8010AC94[p->n]) break;
        case 2: ALLOC(p->arr[i], new C8010AB20[p->n]) break;
        case 3: ALLOC(p->arr[i], new C8010A9AC[p->n]) break;
        case 4: ALLOC(p->arr[i], new C8010A838[p->n]) break;
        case 5: ALLOC(p->arr[i], new C8010A664[p->n]) break;
        case 6: ALLOC(p->arr[i], new C8011497C[p->n]) break;
        case 7: ALLOC(p->arr[i], new C801145C8[p->n]) break;
        case 8: ALLOC(p->arr[i], new C80114210[p->n]) break;
        case 9: ALLOC(p->arr[i], new C80113E5C[p->n]) break;
        case 10: ALLOC(p->arr[i], new C80113AA8[p->n]) break;
        case 11: ALLOC(p->arr[i], new C801136E0[p->n]) break;
        case 12: ALLOC(p->arr[i], new C80109C6C[p->n]) break;
        }
    }
    for (i = 0; i < p->n; i++) {
        int pre;
        fn_8010D2A8(&p->f28[i], i, p->fmt, p->arr);
        pre = i < p->n - extra;
        p->f28[i].pre = pre;
        for (k = 0; k < cnt; k++) {
            ok = 1;
            a = fn_80112B18(p->fmt, k);
            o = 0;
            switch (a->type) {
            case 1: o = (AB *)&((C8010AC94 *)p->arr[k])[i]; break;
            case 2: o = (AB *)&((C8010AB20 *)p->arr[k])[i]; break;
            case 3: o = (AB *)&((C8010A9AC *)p->arr[k])[i]; break;
            case 4: o = (AB *)&((C8010A838 *)p->arr[k])[i]; break;
            case 5: {
                C8010A664 *e = &((C8010A664 *)p->arr[k])[i];
                s32 cn = a->n + 1;
                u8 *dst = p->buf + p->bufpos;
                p->bufpos += cn * f->stride;
                Fill(e, a, r, dst, cn, pre);
                ok = 0;
                break;
            }
            case 6: o = (AB *)&((C8011497C *)p->arr[k])[i]; break;
            case 7: o = (AB *)&((C801145C8 *)p->arr[k])[i]; break;
            case 8: o = (AB *)&((C80114210 *)p->arr[k])[i]; break;
            case 9: o = (AB *)&((C80113E5C *)p->arr[k])[i]; break;
            case 10: o = (AB *)&((C80113AA8 *)p->arr[k])[i]; break;
            case 11: o = (AB *)&((C801136E0 *)p->arr[k])[i]; break;
            case 12: o = (AB *)&((C80109C6C *)p->arr[k])[i]; break;
            }
            if (ok && ok) {
                if (pre) o->upd2(a, r);
                else o->upd(a);
            }
        }
    }
    if (full) {
        fn_800FAEA0(r);
        fn_800FAEA0(r);
    }
    return 0;
}

} /* extern "C" */
