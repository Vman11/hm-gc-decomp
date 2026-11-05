#include "common.h"

extern "C" {

struct Nm { char s[8]; };
struct VGet { u8 pad[8]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void *Get(int); };
struct C80192398 {
    u8 pad[0x68];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void Set(void *, void *);
    C80192398();
};
struct C230 {
    virtual void v0(); virtual void v1(); virtual void Start(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void Init();
    u8 pad[0x8c - 4];
    Nm nm;
};
struct C20C {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void Done();
    u8 pad[0x54 - 4];
    s32 n;
    char **names;
};
struct Mgr { u8 pad[0xc]; void *fc; };
struct Snd { u8 pad[0xc]; void *fc; u8 pad2[0x74 - 0x10]; void *f74; };
struct G460 { u8 pad[8]; u8 *f8; };
struct G684 { u8 pad[0x2c50]; u8 **f2c50; };

struct T {
    u8 pad0[0x10];
    void *f10;
    u8 pad14[0x9c - 0x14];
    u32 *f9c;
    u8 pada0[0x158 - 0xa0];
    u32 arr158[7];
    u32 f174;
    u8 pad178[0x1a4 - 0x178];
    f32 *f1a4;
    f32 f1a8;
    f32 f1ac;
    f32 *f1b0;
    f32 f1b4;
    void *f1b8, *f1bc, *f1c0, *f1c4, *f1c8, *f1cc, *f1d0, *f1d4, *f1d8, *f1dc, *f1e0;
    s32 *f1e4;
    void *f1e8;
    u8 pad1ec[4];
    void *f1f0;
    void *f1f4;
    u8 pad1f8[0x20c - 0x1f8];
    C20C *f20c;
    u8 pad210[0x21c - 0x210];
    void *f21c;
    u8 pad220[4];
    u32 *f224;
    u32 f228;
    C80192398 *f22c;
    C230 *f230;
};

extern char lbl_802A8A48[];
extern char lbl_80365F94[8];
extern char lbl_80365F9C[8];
extern char lbl_80365FA4[8];
extern char lbl_80365FA8[8];
extern char lbl_80365FB0[8];
extern char lbl_80365FB8[8];
extern char lbl_80365FC0[8];
extern char lbl_80365FC8[8];
extern f32 lbl_80365EFC;
extern Mgr *lbl_8035B754;
extern Snd *lbl_8035B65C;
extern G684 **lbl_8035B684;
extern G460 *lbl_8035B460;
extern void *lbl_8035B320;
extern void *lbl_8035B308;

void *fn_80110444(void *, char *, s32);
VGet **fn_8010FEDC(void *, void *, char *, s32);
void *fn_8023D13C(T *, char *, s32);
void fn_80271CEC(void *, T *, void *);
void *fn_800F9398(void *, void *);
void *fn_800F9788(void *, void *, void *);
void fn_800F6FBC(void *, void *);
int fn_800F6CD0(void *, void *);
void fn_800F6E88(void *, void *);
C230 *fn_8022992C(void *, char *, Nm *, C80192398 *);
void fn_80229C5C(C230 *, T *);
void fn_8022FC04(C230 *);
void fn_8022DA5C(T *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
int strncmp(const char *, const char *, u32);

#pragma opt_propagation off
static inline void *Res(char *n, void *v) {
    u8 *m = (*lbl_8035B684)->f2c50[0];
    if (!n || !*n) return fn_800F9398(m + 0x168, v);
    return fn_800F9788(m + 0x180, n, v);
}

void fn_80239024(T *t) {
    char *str = lbl_802A8A48;
    Nm b10;
    Nm b8;
    void *v;
    {
        void *r = fn_80110444(lbl_8035B754->fc, lbl_80365F94, 0);
        t->f21c = (*fn_8010FEDC(lbl_8035B754->fc, r, str + 0xb0, 0))->Get(0);
    }
    if (t->f10) {
        t->f224 = (u32 *)fn_8023D13C(t, lbl_80365F9C, 0);
        t->f228 = t->f224 ? *t->f224 : 0;
        t->f1a4 = (f32 *)fn_8023D13C(t, lbl_80365FA4, 0);
        if (t->f1a4) t->f1a8 = *t->f1a4;
        t->f1ac = t->f1a8;
        t->f1b0 = (f32 *)fn_8023D13C(t, str + 0xc0, 0);
        t->f1b4 = t->f1b0 ? *t->f1b0 : lbl_80365EFC;
        t->f1b8 = fn_8023D13C(t, lbl_80365FA8, 0);
        t->f1bc = fn_8023D13C(t, lbl_80365FB0, 0);
        t->f1c0 = fn_8023D13C(t, str + 0xcc, 0);
        t->f1c4 = fn_8023D13C(t, str + 0xd8, 0);
        t->f1c8 = fn_8023D13C(t, str + 0xe4, 0);
        t->f1cc = fn_8023D13C(t, str + 0xf0, 0);
        t->f1d0 = fn_8023D13C(t, str + 0xfc, 0);
        t->f1d4 = fn_8023D13C(t, str + 0x108, 0);
        t->f1d8 = fn_8023D13C(t, str + 0x114, 0);
        t->f1e8 = fn_8023D13C(t, str + 0x124, 0);
        t->f1dc = fn_8023D13C(t, str + 0x138, 0);
        t->f1e0 = fn_8023D13C(t, str + 0x148, 0);
        {
            s32 *p = (s32 *)fn_8023D13C(t, lbl_80365FB8, 0);
            if (!t->f1e4 && p && *p == 1)
                { Snd *sn = lbl_8035B65C; void *c = sn->fc; fn_80271CEC(sn->f74, t, c); }
            t->f1e4 = p;
        }
        {
            void *v = fn_8023D13C(t, str + 0x158, 0);
            char *n = (char *)fn_8023D13C(t, str + 0x168, 0);
            if (v && n) t->f1f0 = Res(n, v);
        }
        {
            v = fn_8023D13C(t, str + 0x180, 0);
            char *n = (char *)fn_8023D13C(t, str + 0x190, 0);
            if (v && n) t->f1f4 = Res(n, v);
        }
    }
    if (t->f20c) {
        u32 off;
        s32 i;
        for (i = 0, off = 0; i < t->f20c->n; off += 4, i++) {
            fn_800F6FBC(*(char **)((u8 *)t->f20c->names + off), &b10);
            if (fn_800F6CD0(&b10, lbl_80365FC0) && !t->f230) {
                v = fn_800F9398(lbl_8035B460->f8 + 0x90, str + 0x1a8);
                if (!lbl_8035B320) fn_800604C4(-2, 0, 0, 0);
                fn_800F7EC0(lbl_8035B320);
                t->f22c = new C80192398;
                fn_800F7E98();
                if (!t->f22c) fn_800604C4(-4, 0, 0, 0);
                t->f22c->Set(lbl_8035B460->f8, v);
                fn_800F6FBC(str + 0x1a8, &b8);
                t->f230 = fn_8022992C(lbl_8035B308, str + 0x1a8, &b8, t->f22c);
                t->f230->Init();
                t->f230->Start();
                fn_800F6E88(&t->f230->nm, &b8);
                fn_80229C5C(t->f230, t);
                if (!(*t->f9c & 2)) fn_8022FC04(t->f230);
            } else if (!strncmp(b10.s, lbl_80365FC8, 5)) {
                s32 k = b10.s[5] - '0';
                t->arr158[k] = 0;
                t->f174 = 1;
            }
        }
        t->f20c->Done();
    }
    fn_8022DA5C(t);
}

}
