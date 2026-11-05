// NonMatching draft (wA_8007BB14): DIFF 43 / SDIFF 11, see hm-work/wA_8007BB14/STATUS.txt
#include "common.h"
extern "C" {

struct E { u8 pad[148]; };
struct F { u8 pad[4]; u8 f4[28]; };
struct S { u32 f0; E *f4; u32 f8; F *f12; };
struct W { u8 pad[28]; };
struct T { u8 pad[20]; S *f20; u32 f24; void *f28; u8 pad32[16]; u8 f48; u8 pad49[3]; u8 f52; u8 f53; u8 pad54[18]; W f72[8]; u32 f296; };
void fn_8016E4D4(W *, void *, E *, u8, u32, u32);
u32 fn_8014A5DC(E *);
void fn_801365BC(S *);
void fn_80136560(S *);
int fn_8016E474(void *, void *, u8, u32 *);
void fn_8016F10C(W *, F *, u8, int);
int fn_8016EAAC(W *, F *, int);
void fn_8016F704(W *);
void fn_8015D724(T *t, void *x) {
    u32 i;
    u32 cnt;
    u32 ptr;
    E *e;
    W *w;
    S *s = t->f20;
    if (s && s->f0) {
        t->f296 = (u16)s->f0;
        if (t->f296 > 8) t->f296 = 8;
        ptr = 0;
        cnt = 0;
        if (t->f52 && t->f24) {
            ptr = t->f24;
            cnt = t->f52;
        }
        i = 0;
        w = t->f72;
        for (; i < t->f296; w++, i++) {
            e = &t->f20->f4[i];
            fn_8016E4D4(w, x, e, t->f53, ptr, cnt);
            if (ptr) {
                u32 n = fn_8014A5DC(e);
                if (cnt <= n) {
                    cnt = 0;
                    ptr = 0;
                } else {
                    cnt -= n;
                    ptr += n * 4;
                }
            }
        }
        fn_801365BC(t->f20);
    } else if (s) {
        if (s->f8 < 1) return;
        fn_80136560(s);
        F *f = t->f20->f12;
        u32 z = 0;
        int r = fn_8016E474(f->f4, t->f28, t->f48, &z);
        t->f296 = 1;
        w = t->f72;
        fn_8016F10C(w, f, t->f53, r);
        for (i = 1; i < t->f20->f8; i++) {
            f = &t->f20->f12[i];
            r = fn_8016E474(f->f4, t->f28, t->f48, &z);
            if (!fn_8016EAAC(w, f, r)) {
                if (t->f296 >= 8) break;
                fn_8016F704(w);
                w++;
                t->f296++;
                fn_8016F10C(w, f, 0, r);
            }
        }
        fn_8016F704(w);
    }
}

} /* extern "C" */
