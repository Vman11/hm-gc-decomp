#include "common.h"

extern "C" {

struct wA_T { virtual void v0(); virtual void v1(); virtual s32 get(); };
struct wA_F {
    u8 pad[0x10];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual s32 seek(u32 pos);
    virtual s32 read(void *buf, s32 n, u32 *got, wA_T **t); virtual void v6(); virtual void v7(); virtual void v8(); virtual void drop(wA_T *t);
};
struct C8021324C { u32 a; u32 b; u16 c; u8 d; u8 e; C8021324C(); };
struct C80213428 { C80213428 *dirs; C8021324C *files; u32 off; u16 nd; u16 nf; u16 f10; u16 flags; C80213428(); ~C80213428(); };
extern void *lbl_8035B1E8;
extern const u16 lbl_80365880;
void fn_800604C4(s32 code, s32 a, s32 b, s32 c);
void fn_800F7EC0(void *heap);
void fn_800F7E98(void);
void fn_80060568(const char *s, s32 a, s32 b, s32 c);
void fn_800E1E88(void *p, void *dtor);
void __dt__9C80213428Fv(void *p, s16 f);

inline s32 wA_rd(wA_F *f, void *buf, s32 n, u32 *got, wA_T *&t) {
    s32 r = f->read(buf, n, got, &t);
    if (r == 7) {
        r = t->get();
        f->drop(t);
    }
    return r;
}

void fn_80212DA4(C80213428 *p, wA_F *f) {
    u8 buf[0xc];
    u32 got;
    wA_T *t;
    if (!(p->flags & 2)) {
        if (p->nf != 0) {
            if (lbl_8035B1E8 == 0) {
                fn_800604C4(-2, 0, 0, 0);
            }
            fn_800F7EC0(lbl_8035B1E8);
            p->files = new C8021324C[p->nf];
            fn_800F7E98();
            if (p->files == 0) {
                fn_800604C4(-4, 0, 0, 0);
            }
        }
        if (p->nd != 0) {
            if (lbl_8035B1E8 == 0) {
                fn_800604C4(-2, 0, 0, 0);
            }
            fn_800F7EC0(lbl_8035B1E8);
            p->dirs = new C80213428[p->nd];
            fn_800F7E98();
            if (p->dirs == 0) {
                fn_800604C4(-4, 0, 0, 0);
            }
        }
        if (f->seek(p->off) != 0) {
            fn_80060568("AtIoSafeJamDirectory::vLoad:  error loading!\n", 0, 0, 0);
        }
        {
            u32 i;
            u32 o;
            for (i = 0, o = 0; i < p->nd; i++) {
                s32 r = wA_rd(f, buf, 8, &got, t);
                if (r != 0) {
                    fn_80060568("AtIoSafeJamDirectory::vLoad:  error loading directory!\n", 0, 0, 0);
                }
                if (got != 8) {
                    fn_80060568("AtIoSafeJamDirectory::vLoad:  unable to load the entire directory entry!\n", 0, 0, 0);
                }
                {
                    C80213428 *d = (C80213428 *)((u8 *)p->dirs + o);
                    u32 w = buf[4] + (buf[5] << 8) + (buf[6] << 16) + (buf[7] << 24);
                    u32 v = buf[0] + (buf[1] << 8) + (buf[2] << 16) + (buf[3] << 24);
                    u16 a = v & 0xfff;
                    u16 b = (v >> 12) & 0x1ff;
                    u16 c = v >> 21;
                    if (d->flags & 1) {
                        if (d->files != 0) {
                            delete[] d->files;
                        }
                        if (d->dirs != 0) {
                            fn_800E1E88(d->dirs, (void *)__dt__9C80213428Fv);
                        }
                        d->dirs = 0;
                        d->files = 0;
                        d->off = 0;
                        d->nd = 0;
                        d->nf = 0;
                        d->f10 = 0;
                        d->flags = 0;
                    }
                    d->off = w;
                    d->f10 = a;
                    d->nf = c;
                    d->nd = b;
                    d->flags = 1;
                }
                o += 0x14;
            }
        }
        {
            u32 i2;
            u32 o2;
            for (i2 = 0, o2 = 0; i2 < p->nf; i2++) {
                s32 r = wA_rd(f, buf, 0xc, &got, t);
                if (r != 0) {
                    fn_80060568("AtIoSafeJamDirectory::vLoad:  error loading file!\n", 0, 0, 0);
                }
                if (got != 0xc) {
                    fn_80060568("AtIoSafeJamDirectory::vLoad:  unable to load the entire file entry!\n", 0, 0, 0);
                }
                ((C8021324C *)((u8 *)p->files + o2))->c = buf[0] + (buf[1] << 8);
                ((C8021324C *)((u8 *)p->files + o2))->d = buf[2];
                ((C8021324C *)((u8 *)p->files + o2))->e = buf[3];
                ((C8021324C *)((u8 *)p->files + o2))->b = buf[4] + (buf[5] << 8) + (buf[6] << 16) + (buf[7] << 24);
                ((C8021324C *)((u8 *)p->files + o2))->a = buf[8] + (buf[9] << 8) + (buf[10] << 16) + (buf[11] << 24);
                o2 += 0xc;
            }
        }
        p->flags |= lbl_80365880;
    }
}

} /* extern "C" */
