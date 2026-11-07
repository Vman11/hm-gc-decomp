// NonMatching (DIFF 6, SDIFF 0): procA copy of inList uses explicit off counter + volatile l load inside; left: k gets r28 instead of r29.
#include "common.h"
extern "C" {
extern "C" {
struct Name { char s[8]; };
struct LH { u8 pad[16]; u32 n; };
struct L { LH *h; u8 pad[8]; Name *names; };
struct G { u8 pad[12]; u32 n; };
struct V1 { u8 pad[192]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void get(char *, s32); };
struct V2 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
  virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
  virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
  virtual void v30(); virtual void v31(); virtual void v32(); virtual void m(char *, s32, s32, s32, s32); };
struct O { u8 pad[236]; s32 f236; u8 pad2[56]; char *def; u8 pad3[20]; L *l320; u8 pad4[8]; L *l332; u8 pad5[60]; u32 f396; u32 *p400; u32 m404; };
extern char lbl_8035F920[8];
extern char lbl_8035F928[8];
extern char lbl_8035F930[7];
extern char lbl_8035F938[7];
extern char lbl_8035F940[4];
extern char lbl_802987A8[];
extern void *lbl_8035A0A4;
extern V1 *lbl_8035B684;
extern void *lbl_8035B65C;
extern void *lbl_8035B308;
G *fn_80240004(O *, s32);
s32 fn_8024548C(G *, u32, s32, s32, char *, s32, s32);
void fn_800F6E88(char *, char *);
s32 fn_800F6CD0(char *, char *);
s32 fn_80245F8C(G *, u32);
s32 fn_80245F48(G *, s32);
void fn_8003CAD8(void *, s32);
s32 fn_8003CDA4(void *);
void *fn_80242144(O *, s32);
void fn_80242BC0(void *, char *, s32, s32, s32, s32);
void __ct__9C80253F24Fiiii(void *, void *, s32, s32, s32);
V2 *fn_802288FC(void *, char *);

static inline BOOL inList(O *o, L *l, u32 idx) {
    char name[8];
    u32 j;
    if (fn_8024548C(fn_80240004(o, 0), idx, -1, 1, name, 0, 0) == 0) fn_800F6E88(name, o->def);
    for (j = 0; j < l->h->n; j++) {
        char tmp[8];
        fn_800F6E88(tmp, l->names[j].s);
        if (fn_800F6CD0(name, tmp)) return TRUE;
    }
    return FALSE;
}

static inline BOOL inList2(O *o, u32 idx) {
    L *l = *(L *volatile *)&o->l320;
    char name[8];
    u32 off;
    u32 j;
    if (fn_8024548C(fn_80240004(o, 0), idx, -1, 1, name, 0, 0) == 0) fn_800F6E88(name, o->def);
    for (j = 0, off = 0; j < l->h->n; off += 8, j++) {
        char tmp[8];
        fn_800F6E88(tmp, (char *)l->names + off);
        if (fn_800F6CD0(name, tmp)) return TRUE;
    }
    return FALSE;
}

static inline void procA(O *o, u32 i) {
        o->f236 = fn_80245F8C(fn_80240004(o, 0), i);
        {
            s32 k = fn_80245F48(fn_80240004(o, 0), o->f236);
            if (!(*o->p400 & (o->m404 & (1 << k)))) {
                *o->p400 |= 1 << k;
                if (inList2(o, k)) {
                    char b40[8];
                    char b48[8];
                    fn_8003CAD8(lbl_8035A0A4, 1);
                    o->f396--;
                    if (o->f396 == 0) fn_80242BC0(fn_80242144(o, 0), lbl_8035F920, 0, 0, 0, 0);
                    lbl_8035B684->get(b40, -1);
                    if (fn_800F6CD0(b40, lbl_8035F928)) {
                        switch (fn_8003CDA4(lbl_8035A0A4)) {
                        case 4:
                            fn_800F6E88(b48, lbl_8035F930);
                            break;
                        case 15:
                            fn_800F6E88(b48, lbl_8035F938);
                            break;
                        case 1:
                            break;
                        default:
                            fn_800F6E88(b48, lbl_8035F940);
                            break;
                        }
                        __ct__9C80253F24Fiiii(lbl_8035B65C, b48, 0, 0, 0);
                    }
                }
            }
        }
}
void fn_8007CA80(O *o) {
    u32 i;
    for (i = 0; i < fn_80240004(o, 0)->n; i++) {
        if (*o->p400 & (o->m404 & (1 << i))) continue;
        if (!inList(o, o->l320, i)) continue;
        procA(o, i);
        if (inList(o, o->l332, i)) {
            char b72[16];
            V2 *x;
            fn_800F6E88(b72, o->l332->names[0].s);
            x = fn_802288FC(lbl_8035B308, b72);
            if (x) x->m(lbl_802987A8, 0, 0, 0, 0);
        }
    }
}
}
}
