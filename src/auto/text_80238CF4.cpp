#include "common.h"

extern "C" {

struct VP {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
};
struct VQ {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(u8 *); virtual void v14();
};
struct VX { u32 a, b; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual u32 v5(int); };
struct H { VX *x; };
struct E60 { u8 pad[12]; u8 *f12; u8 pad2[44]; };
struct L { u8 pad[172]; u32 n; E60 *arr; };
struct G { u8 pad[152]; u32 n; u32 *arr; };
extern char lbl_802A8A48[];
extern u8 *lbl_8035B65C;
extern u8 *lbl_8035B460;
extern const char lbl_80365F88[7];
extern const char lbl_80365F90[1];
void fn_800F6E40(char *, u8 *);
u32 fn_801104C0(u8 *, char *, u8 *, int);
L *fn_8019556C(u32);
void fn_8022DAC0(u8 *);
H *fn_8010FEDC(u8 *, u32, const char *, int);
void fn_800F6FBC(u32, char *);
u32 fn_8023BC90(char *);
VQ *fn_8023B8FC(u32, char *, int);
void fn_800E8F6C(char *, char *, ...);
void fn_802495F0(VQ *, int);
u32 fn_800F9788(u8 *, const char *, char *);
u32 fn_800F9398(u8 *, char *);
static inline void Set3(f32 *d, f32 x, f32 y, f32 z) { d[0] = x; d[1] = y; d[2] = z; }
#define U32(o) (*(u32 *)(p + (o)))
static inline void inner(u8 *p, u32 i, u32 j) {
    for (; j < fn_8019556C((*(G **)(U32(160) + 136))->arr[i])->n; j++)
        fn_8019556C((*(G **)(U32(160) + 136))->arr[i])->arr[j].f12 = p + 376;
}
static inline void inner2(u8 *p, u32 j) {
    for (; j < ((L *)U32(160))->n; j++) ((L *)U32(160))->arr[j].f12 = p + 376;
}
static inline void outer(u8 *p, u32 i) {
    for (; i < (*(G **)(U32(160) + 136))->n; i++) inner(p, i, 0);
}
void fn_80238CF4(u8 *p) {
    char *pool = lbl_802A8A48;
    u32 i;
    u32 j;
    char name[8];
    char buf[16];
    char msg[100];
    if (*(s32 *)(p + 276) != 0 || U32(536) != 0) {
        if (U32(536)) fn_800F6E40(buf, p + 408);
        else fn_800F6E40(buf, p + 140);
        *(u8 **)(p + 12) = lbl_8035B65C + 144;
        U32(16) = fn_801104C0(*(u8 **)(p + 12), buf, *(u8 **)(p + 12) + 8, 0);
        if (U32(160)) {
            *(u8 **)(p + 384) = p;
            if (*(G **)(U32(160) + 136)) {
                outer(p, 0);
            } else {
                inner2(p, 0);
            }
        }
    }
    fn_8022DAC0(p);
    {
        H *h;
        U32(148) = 1;
        h = 0;
        if (*(u8 **)(p + 12) && U32(16)) h = fn_8010FEDC(*(u8 **)(p + 12), U32(16), lbl_80365F88, 1);
        if (h) {
            fn_800F6FBC(h->x->v5(0), name);
            *(VQ **)(p + 524) = fn_8023B8FC(fn_8023BC90(pool + 100), name, -1);
            if (*(VQ **)(p + 524) == 0) fn_800E8F6C(msg, pool + 112, name);
            (*(VQ **)(p + 524))->v13(p);
            (*(VQ **)(p + 524))->v14();
        } else {
            ((VP *)p)->v32();
        }
    }
    if (*(VQ **)(p + 524)) {
        H *h;
        if (*(u8 **)(p + 12) && U32(16) && (h = fn_8010FEDC(*(u8 **)(p + 12), U32(16), pool + 148, 1)) != 0) {
            VX *x = h->x;
            u32 k;
            for (k = 0; k < 3; k++) ((u32 *)p)[82 + k] = x->v5(k);
            Set3((f32 *)(p + 316), **(f32 **)(p + 328), **(f32 **)(p + 332), **(f32 **)(p + 336));
        }
        fn_802495F0(*(VQ **)(p + 524), 0);
    }
    {
        u8 *base = *(u8 **)(lbl_8035B460 + 8);
        u32 r;
        if (lbl_80365F90 == 0 || *lbl_80365F90 == 0) r = fn_800F9398(base + 204, pool + 164);
        else r = fn_800F9788(base + 228, lbl_80365F90, pool + 164);
        U32(520) = r;
    }
}

} /* extern "C" */
