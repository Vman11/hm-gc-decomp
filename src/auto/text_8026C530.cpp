#include "common.h"

extern "C" {

struct wA_Nm { u32 a; u32 b; };
struct V3 { f32 x, y, z; };
struct Msg { u32 w[32]; };
struct wA_J { u8 pad[0x1c]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void play(s32 a); };
struct wA_L { u8 pad[8]; u32 n; u32 cnt; u8 pad10[0x14]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void *get(u32 i); virtual void *first(s32 a); };
struct wA_B { u32 flags; u8 pad[0x54];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void attach(wA_J *j, s32 a, s32 b); virtual void v19(); virtual void v20(); virtual void reset(s32 a); virtual void setw(s32 a, f32 w); virtual void v23(); virtual void setr(f32 r);
    virtual void setpos(V3 *v); virtual void setrot(V3 *v); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
    virtual void enable(s32 a); };
struct wA_E { u32 flags; u8 pad[0x54];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void attach(wA_J *j, s32 a, s32 b); virtual void v19(); virtual void v20(); virtual void reset(s32 a); virtual void setw(s32 a, f32 w); virtual void v23(); virtual void setr(f32 r);
    virtual void setpos(V3 *v); virtual void setrot(V3 *v); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
    virtual void enable(s32 a); };
struct wA_R { u8 pad[0x10]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual wA_B *bone(u32 i); virtual wA_B *node(u32 i);
    u32 n; u32 n2; };
struct wA_Gen { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual u32 gen(); };
struct wA_O { u8 pad[0x30]; void *f30; u8 pad34[0x38]; wA_B *f6c; };
struct wA_P { u8 pad[0x14]; wA_L *l1; wA_L *l2; f32 w; u8 pad20[0x18]; u32 n; u32 *ids; u32 *ids2; };
extern const wA_Nm lbl_80366DD8;
extern const f32 lbl_80366DE4;
extern const f32 lbl_80366DD0;
extern const f32 lbl_80366DD4;
extern char lbl_802AA558[];
extern void *lbl_8035B7B8;
extern wA_Gen **lbl_8035B7C8;
extern u8 *lbl_8035B460;
extern "C" u32 strlen(const char *s);
s32 fn_800F6CD0(const wA_Nm *a, const wA_Nm *b);
void fn_800F806C(void *r, void *b, wA_Nm *n);
void fn_800F6E40(char *d, wA_Nm *n);
void fn_800F6FBC(char *s, wA_Nm *n);
void fn_800F6F68(Msg *m, wA_Nm *n);
wA_J *fn_800F8274(void *o, wA_Nm *n);
void *fn_800F9398(void *o, wA_Nm *n);
wA_O *fn_801952A0(void);
void fn_80107244(void *o, V3 *v);
void fn_800E8F6C(char *d, const char *fmt, ...);
void fn_801FEC18(wA_B *b, wA_J *j, u32 x, u32 y, s32 z);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

inline void wA_find(wA_P *p, wA_Nm *n, wA_J *&out, char *str) {
    u32 i;
    char msg[0x40];
    char nm[0xc];
    for (i = 0; i < p->l1->n; i++) {
        wA_J *j = fn_800F8274(p->l1->get(i), n);
        if (j != 0) {
            out = j;
            return;
        }
    }
    if (p->l2 != 0) {
        for (i = 0; i < p->l2->n; i++) {
            wA_J *j = fn_800F8274(p->l2->get(i), n);
            if (j != 0) {
                out = j;
                return;
            }
        }
    }
    fn_800F6E40(nm, n);
    fn_800E8F6C(msg, str + 0x2a0, nm);
    out = 0;
}

inline void fin(wA_P *p, wA_E *e, wA_J *ja, V3 *pos, V3 *rot) {
    e->setpos(pos);
    e->setrot(rot);
    e->setw(0, p->w);
    e->attach(ja, 0, 0);
}

inline void doOther(wA_P *p, wA_B *b, wA_Nm *nm, char *str) {
    wA_J *jd;
    if (fn_800F6CD0(nm, &lbl_80366DD8) != 0) {
        jd = 0;
    } else {
        wA_find(p, nm, jd, str);
    }
    if (b != 0 && !(b->flags & 4) && jd != 0) {
        jd->play(-1);
        b->setw(0, p->w);
        b->attach(jd, 0, 0);
    }
}
inline void getJ(wA_P *p, wA_Nm *nm, wA_J *&jd, char *str) {
    if (fn_800F6CD0(nm, &lbl_80366DD8) != 0) {
        jd = 0;
    } else {
        wA_find(p, nm, jd, str);
    }
}
inline wA_J *getJr(wA_P *p, wA_Nm *nm, char *str) {
    wA_J *jd;
    if (fn_800F6CD0(nm, &lbl_80366DD8) != 0) {
        jd = 0;
    } else {
        wA_find(p, nm, jd, str);
    }
    return jd;
}
void fn_8026C530(wA_P *p, void *arg) {
    char *str = lbl_802AA558;
    wA_E *e;
    s32 k;
    wA_B *b2;
    u32 i;
    wA_J *ja;
    s32 j;
    wA_R *r;
    char c;
    s32 last;
    wA_B *b;
    wA_J *jb;
    wA_Nm nm;
    wA_Nm n10;
    wA_Nm n8;
    if (arg == 0 || p->l2 == 0 || p->l2->cnt == 0) {
        return;
    }
    r = (wA_R *)p->l2->first(0);
    p->n = r->n;
    if (p->n != 0) {
        if (p->ids == 0) {
            if (lbl_8035B7B8 == 0) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035B7B8);
            p->ids = new u32[p->n];
            fn_800F7E98();
            if (p->ids == 0) fn_800604C4(-4, 0, 0, 0);
            for (i = 0; i < p->n; i++) p->ids[i] = 0;
        }
        if (p->ids2 == 0) {
            if (lbl_8035B7B8 == 0) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035B7B8);
            p->ids2 = new u32[p->n];
            fn_800F7E98();
            if (p->ids2 == 0) fn_800604C4(-4, 0, 0, 0);
            for (i = 0; i < p->n; i++) p->ids2[i] = 0;
        }
    }
    for (i = 0; i < p->n; i++) {
        b = r->bone(i);
        fn_800F806C(r, b, &nm);
        if (((char *)&nm)[i] != 0) {
            last = -1;
            for (j = 0; j < 8; j++) {
                if (((char *)&nm)[j] == 0) {
                    last = j - 1;
                    break;
                }
            }
            if (last == -1) last = j - 1;
            c = ((char *)&nm)[last];
            if ((c == 'L' || c == 'R') && p->ids[i] == 0) {
                p->ids[i] = (*lbl_8035B7C8)->gen();
            }
        }
    }
    for (i = 0; i < p->n; i++) {
        b = r->bone(i);
        fn_800F806C(r, b, &nm);
        if (((char *)&nm)[i] != 0) {
            last = -1;
            for (j = 0; j < 8; j++) {
                if (((char *)&nm)[j] == 0) {
                    last = ((char *)&nm)[j - 1];
                    break;
                }
            }
            if (last == -1) last = j - 1;
            c = ((char *)&nm)[last];
            if (c == 'L') {
            } else if (c == 'R') {
                if (fn_800F6CD0(&nm, &lbl_80366DD8) != 0) {
                    ja = 0;
                } else {
                    wA_find(p, &nm, ja, str);
                }
                if (ja != 0 && b != 0) {
                    ja->play(-1);
                    ((char *)&nm)[last] = 'L';
                    if (fn_800F6CD0(&nm, &lbl_80366DD8) != 0) {
                        jb = 0;
                    } else {
                        wA_find(p, &nm, jb, str);
                    }
                    jb->play(-1);
                    k = -1;
                    b2 = 0;
                    for (j = 0; j < p->n; j++) {
                        b2 = r->bone(j);
                        fn_800F806C(r, b2, &n8);
                        if (fn_800F6CD0(&n8, &nm) != 0) {
                            k = j;
                            break;
                        }
                    }
                    if (k != -1) {
                        b->reset(0);
                        b2->reset(0);
                        b2->setw(0, p->w);
                        b->setw(0, p->w);
                        fn_801FEC18(b2, jb, p->ids[k], p->ids[i], 0);
                        fn_801FEC18(b, ja, p->ids[i], p->ids[k], 0);
                        b2->setr(lbl_80366DE4);
                        b->setr(lbl_80366DD0);
                    }
                }
            } else {
                wA_J *jd;
                jd = getJr(p, &nm, str);
                if (b != 0 && !(b->flags & 4) && jd != 0) {
                    jd->play(-1);
                    b->setw(0, p->w);
                    b->attach(jd, 0, 0);
                }
            }
        }
    }
    for (i = 0; i < r->n2; i++) {
        b2 = r->node(i);
        fn_800F806C(r, b2, &nm);
        if (fn_800F9398(*(u8 **)(lbl_8035B460 + 8) + 0x90, &nm) != 0) {
            wA_O *o = fn_801952A0();
            wA_J *jc;
            char s[0x10];
            fn_800F6E40(s, &nm);
            for (k = strlen(s) - 1; s[k] >= '0' && s[k] <= '9'; k--) s[k] = 0;
            fn_800F6FBC(s, &n10);
            jc = getJr(p, &n10, str);
            if (b2 != 0 && (b2->flags & 4) && jc != 0) {
                V3 pos;
                V3 rot;
                e = (wA_E *)b2;
                jc->play(-1);
                b2->enable(1);
                o->f6c = b2;
                if (o->f30 != 0) {
                    fn_80107244(o->f30, &pos);
                } else {
                    f32 z = lbl_80366DD4; pos.x = z; pos.y = z; pos.z = z;
                }
                { f32 z = lbl_80366DD4; rot.x = z; rot.y = z; rot.z = z; }
                fin(p, e, jc, &pos, &rot);
            } else {
                Msg m = *(Msg *)(str + 0x70);
                fn_800F6F68(&m, &nm);
            }
        } else {
            Msg m = *(Msg *)(str + 0xf0);
            fn_800F6F68(&m, &nm);
        }
    }
}

} /* extern "C" */
