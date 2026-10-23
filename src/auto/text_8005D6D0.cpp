// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void v13(void*,void*,int,int,int); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct Vec { f32 x, y, z; };
extern u8 lbl_803286D0[];
extern u8 lbl_80357E84[];
extern void *lbl_8035B65C;
extern const u32 lbl_8035E498, lbl_8035E49C, lbl_8035E4A0, lbl_8035E4A4;
extern f32 lbl_8035E4A8;
extern char lbl_8035E4AC[8];
extern char lbl_8035E4B4[7];
void fn_80231408(void);
void fn_801075B8(void *, void *);
void fn_80107244(void *, void *);
void fn_801079E8(void *, void *, void *, int);
void fn_80190C98(void *);
void fn_80196688(void *);
void __ct__9C80253F24Fiiii(void *, char *, void *, int, int);
void fn_802494A4(void *, int);
void fn_80241DD0(void *, char *, void *, int, int, int);
static inline void h0(u8 *e, void *m, void *v) { if (F(e,0x30,void*)) { fn_801079E8(F(e,0x30,void*), m, v, 0); fn_80190C98(e); } }
struct P { u8 pad[0x2f8]; u8 *arr[6]; };
void fn_8005D6D0(V *p, int a, void *b) {
    f32 b48[4];
    Vec b36;
    Vec v;
    f32 m[4];
    u32 i;
    u8 *g;
    u8 *e;
    if (!(F(p,0x374,u8) & 1)) {
        fn_80231408();
        p->v13(&b36, b48, 0, 0, 0);
        if (F(p,0x2e4,u32*)) *F(p,0x2e4,u32*) &= ~0x800;
        if (F(p,0x2e8,u32*)) *F(p,0x2e8,u32*) &= ~0x800;
        if (F(p,0x2f0,u8*)) { F(F(p,0x2f0,u8*),0x98,u32) |= lbl_8035E498; *F(p,0x2f0,u32*) &= ~0x800; }
        if (F(p,0x2f4,u8*)) { F(F(p,0x2f4,u8*),0x98,u32) |= lbl_8035E498; *F(p,0x2f4,u32*) &= ~0x800; }
        if (a == 0) {
            for (i = 0; i < 6; i++) {
                if (((P *)p)->arr[i]) {
                    if (F(p,0x2c0,u8*)) {
                        if (F(F(p,0x2c0,u8*),0x30,void*)) fn_801075B8(F(F(p,0x2c0,u8*),0x30,void*), m);
                        if (F(F(p,0x2c0,u8*),0x30,void*)) fn_80107244(F(F(p,0x2c0,u8*),0x30,void*), &v);
                        else { v.x = lbl_8035E4A8; v.y = lbl_8035E4A8; v.z = lbl_8035E4A8; }
                    } else if (F(p,0x2e8,u8*)) {
                        if (F(F(p,0x2e8,u8*),0x30,void*)) fn_801075B8(F(F(p,0x2e8,u8*),0x30,void*), m);
                        if (F(F(p,0x2e8,u8*),0x30,void*)) fn_80107244(F(F(p,0x2e8,u8*),0x30,void*), &v);
                        else { v.x = lbl_8035E4A8; v.y = lbl_8035E4A8; v.z = lbl_8035E4A8; }
                    }
                    if (b == 0) {
                        h0(((P *)p)->arr[i], m, &v);
                    } else {
                        e = ((P *)p)->arr[i]; g = F(e,0x30,u8*);
                        if (g) { (*(void (**)(void *, void *))(lbl_803286D0 + 0xC))(F(g,0x10,void*), &v); F(g,0x20,u32) |= lbl_8035E49C; fn_80190C98(e); }
                        e = ((P *)p)->arr[i]; g = F(e,0x30,u8*);
                        if (g) { (*(void (**)(void *, void *, void *))(lbl_803286D0 + 0x30))(F(g,0x10,void*), b, lbl_80357E84); F(g,0x20,u32) |= lbl_8035E49C; fn_80190C98(e); }
                    }
                    *(u32 *)((P *)p)->arr[i] |= lbl_8035E4A0;
                    e = ((P *)p)->arr[i];
                    F(e,0x9c,f32) = lbl_8035E4A8;
                    F(e,0x98,u32) &= ~6;
                    F(e,0xac,f32) = lbl_8035E4A8;
                    fn_80196688(e);
                    F(((P *)p)->arr[i],0x98,u32) |= lbl_8035E4A4;
                    F(((P *)p)->arr[i],0x98,u32) &= ~8;
                }
            }
            __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_8035E4AC, p, 0, 0);
            fn_802494A4(F(p,0x20c,void*), 0);
            fn_80241DD0(F(p,0x20c,void*), lbl_8035E4B4, p, 0, 0, 0);
        }
        F(p,0x374,u8) |= 1;
    }
}

} /* extern "C" */
