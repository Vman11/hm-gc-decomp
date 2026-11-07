#include "common.h"
extern "C" {

#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct A;
struct N { virtual int is(int); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual int cur(A *, u32); };
struct Node { N *obj; int on; Node *next; };
struct Arr { int a; u32 b; u32 c; };
struct V2 { f32 x, y; };
struct R { f32 x0, y0, x1, y1; };
struct Car { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void setRect(R *); };
extern f32 lbl_803596E0[];
extern f32 lbl_8035AF50;
extern f32 lbl_8035AF54;
extern f32 lbl_80364EE8;
extern char lbl_80364EEC[2];
int fn_801CCC7C(void *, int *, u8 **, u32, int);
void fn_8012CD20(void *, f32 *, Arr *, u32, V2 *, int, int, f32, f32, f32);
void fn_8012CB40(void *, R *, char *, int, V2 *, int, int, f32, f32, f32);
void fn_8012D0A4(f32, f32, f32, void *, R *, Arr *, V2 *, int, int);
void fn_801A4F5C(void *, R *, R *, R *, u32, u32);
u32 fn_800FA8F4(Arr *);
static inline u32 slen(Arr *s) { return s->c - s->b; }
static inline bool inRect(f32 x, f32 y, f32 *r) { bool b = false; if (x >= r[0] && x <= r[2] && y >= r[1] && y <= r[3]) b = true; return b; }
static inline u32 hitIdx(A *p, f32 x) {
    u8 *b2;
    int a2;
    u32 idx;
    u32 i;
    void *o;
    f32 py;
    f32 lx;
    f32 px;
    a2 = 0;
    if (!fn_801CCC7C(F(p,0x70,void*), &a2, &b2, F(p,0x144,u32), F(p,0x68,int))) idx = 0;
    else {
        o = F(b2,0x24,void*);
        if (!o) idx = 0;
        else {
            f32 *q = (f32 *)(F(F(p,0x70,u8*),0xc,u8*) + F(p,0x178,u32) * 16);
            V2 pos;
            px = F(p,0x48,f32) + q[0];
            pos.x = px;
            py = F(p,0x4c,f32) + q[1];
            pos.y = py;
            x -= F(p,0x1a0,f32);
            if (x < px) idx = 0;
            else {
                F(p,0x18c,Arr*)->b = F(p,0x180,u32);
                for (i = 0; i < F(p,0x18c,Arr*)->c - F(p,0x18c,Arr*)->b; i++) {
                    f32 r[4];
                    fn_8012CD20(o, r, F(p,0x18c,Arr*), i, &pos, 0, 17, lbl_803596E0[0], lbl_8035AF50, lbl_8035AF54);
                    if (inRect(x, py, r)) break;
                }
                {
                    Arr *v = F(p,0x18c,Arr*);
                    v->b = 0;
                    v->c = fn_800FA8F4(v);
                }
                idx = i + F(p,0x180,u32);
            }
        }
    }
    return idx;
}
void fn_801B1D54(A *p, u32 pos) {
    R c;
    R r128;
    R r112;
    R r96;
    V2 pos56;
    V2 v48;
    u8 *b;
    int a;
    void *f;
    f32 *e;
    {
        Node *n = F(p,0x88,Node*);
        int h = 0;
        for (; n; n = n->next) if (n->obj->is(5) && !n->obj->cur(p, pos)) h = 1;
        if (h) return;
    }
    if (F(F(p,0x7c,u8*),0x6c,u8*) && F(F(F(p,0x7c,u8*),0x6c,u8*),0x24,void*)) {
        f32 *q = (f32 *)(F(F(p,0x70,u8*),0xc,u8*) + F(p,0x178,u32) * 16);
        r128 = *(R *)((u8 *)p + 0x48);
        *(volatile f32 *)&r128.y1 = r128.y1 + q[3];
        *(volatile f32 *)&r128.y0 = r128.y0 + q[1];
        *(volatile f32 *)&r128.x1 = r128.x1 + q[2];
        *(volatile f32 *)&r128.x0 = r128.x0 + q[0];
        *(volatile f32 *)&v48.x = F(p,0x48,f32) + q[0];
        *(volatile f32 *)&v48.y = F(p,0x4c,f32) + q[1];
        Arr *aa = *(Arr *volatile *)((u8 *)p + 0x18c);
        fn_8012D0A4(lbl_803596E0[0], *(volatile f32 *)&lbl_8035AF50, *(volatile f32 *)&lbl_8035AF54, F(F(F(p,0x7c,u8*),0x6c,u8*),0x24,void*), &r96, aa, &v48, 0, 17);
        {
            u8 *s = F(F(p,0x70,u8*),4,u8*) + F(p,0x178,u32) * 28;
            fn_801A4F5C(F(p,0x188,void*), &r128, &r96, &r112, F(s,8,u32), F(s,4,u32));
        }
        F(p,0x1a0,f32) = r112.x0 - r96.x0;
    }
    {
        a = 0;
        if (!F(p,0x18c,Arr*)) return;
        F(p,0x170,u32) = pos;
        if (!fn_801CCC7C(F(p,0x70,void*), &a, &b, F(p,0x144,u32), F(p,0x68,int))) return;
        f = F(b,0x24,void*);
        if (!f) return;
        e = (f32 *)(F(F(p,0x70,u8*),0xc,u8*) + F(p,0x178,u32) * 16);
        pos56.x = e[0] + F(p,0x48,f32);
        pos56.y = e[1] + F(p,0x4c,f32);
        if (F(p,0x170,u32) < F(p,0x180,u32)) {
            F(p,0x180,u32) = F(p,0x170,u32);
            f32 xx = e[2]; xx += F(p,0x50,f32);
            F(p,0x184,u32) = hitIdx(p, xx);
        } else if (F(p,0x170,u32) > F(p,0x184,u32) && F(p,0x184,u32) < F(p,0x18c,Arr*)->c - F(p,0x18c,Arr*)->b - 1) {
            f32 left, cx, right, d;
            F(p,0x184,u32) = F(p,0x170,u32);
            if (F(p,0x184,u32) == F(p,0x18c,Arr*)->c - F(p,0x18c,Arr*)->b) F(p,0x184,u32) = F(p,0x184,u32) - 1;
            F(p,0x180,u32) = 0;
            fn_8012CD20(f, (f32 *)&c, F(p,0x18c,Arr*), F(p,0x184,u32), &pos56, 0, 17, lbl_803596E0[0], lbl_8035AF50, lbl_8035AF54);
            right = e[2]; right += F(p,0x50,f32);
            cx = c.x1;
            left = e[0]; left += F(p,0x48,f32);
            if (cx - right <= lbl_80364EE8) {
                F(p,0x180,u32) = 0;
            } else {
                F(p,0x180,u32) = hitIdx(p, (left + cx) - right) + 1;
                if (F(p,0x180,u32) > F(p,0x184,u32)) F(p,0x180,u32) = F(p,0x184,u32);
            }
        }
        if (F(p,0x194,Car*)) {
            f32 w;
            c = *(R *)((u8 *)F(p,0x194,Car*) + 0x58);
            w = c.x1 - c.x0;
            Arr *s = F(p,0x18c,Arr*);
            if ((int)s->c - (int)s->b == 0) {
                fn_8012CB40(f, &c, lbl_80364EEC, 0, &pos56, 0, 17, lbl_803596E0[0], lbl_8035AF50, lbl_8035AF54);
                c.x1 = c.x0 + w;
            } else if (F(p,0x170,u32) == slen(s)) {
                F(p,0x18c,Arr*)->b = F(p,0x180,u32);
                fn_8012CD20(f, (f32 *)&c, F(p,0x18c,Arr*), F(p,0x170,u32) - 1 - F(p,0x180,u32), &pos56, 0, 17, lbl_803596E0[0], lbl_8035AF50, lbl_8035AF54);
                {
                    Arr *v = F(p,0x18c,Arr*);
                    v->b = 0;
                    v->c = fn_800FA8F4(v);
                }
                c.x0 = c.x1;
                c.x1 = c.x1 + w;
            } else {
                F(p,0x18c,Arr*)->b = F(p,0x180,u32);
                fn_8012CD20(f, (f32 *)&c, F(p,0x18c,Arr*), F(p,0x170,u32) - F(p,0x180,u32), &pos56, 0, 17, lbl_803596E0[0], lbl_8035AF50, lbl_8035AF54);
                {
                    Arr *v = F(p,0x18c,Arr*);
                    v->b = 0;
                    v->c = fn_800FA8F4(v);
                }
                c.x1 = c.x0 + w;
            }
            c.x0 += F(p,0x1a0,f32);
            c.x1 += F(p,0x1a0,f32);
            F(p,0x194,Car*)->setRect(&c);
        }
    }
}
}
