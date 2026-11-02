// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct IT { u8 pad[76]; f32 a76; u8 pad80[4]; f32 a84; u8 pad88[4]; f32 a92; u8 pad96[4]; f32 a100; };
struct RC { f32 x0, y0, x1, y1; };
struct T12 { u8 pad[36]; void *font; f32 size; u8 pad44[4]; u8 b48[4]; };
struct O452 { u8 pad[104]; u32 a104; u8 pad108[4]; u32 a112; };
struct SB {
    u8 pad[128];
    virtual void v0();
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
    virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25();
    virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30();
    virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40();
    virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45();
    virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49(); virtual void v50();
    virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
    virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59(); virtual void v60();
    virtual void v61(); virtual void v62(); virtual void v63(); virtual void v64(); virtual void v65();
    virtual void v66(); virtual void v67(); virtual void v68(); virtual void v69(); virtual void v70();
    virtual void v71(); virtual void v72(); virtual void v73(); virtual void v74(); virtual void v75();
    virtual void v76(); virtual void v77(); virtual void v78(); virtual void v79(); virtual void v80();
    virtual void v81(); virtual void v82(); virtual void v83(); virtual void v84(); virtual void s85(f32);
};
struct P {
    u8 pad0[76];
    f32 a76;
    u8 pad80[4];
    f32 a84;
    f32 a88;
    u8 pad92[4];
    f32 a96;
    u8 pad100[280];
    s32 i380;
    u8 pad384[4];
    u32 sel;
    u32 n392;
    u8 pad396[12];
    f32 a408;
    u8 pad412[4];
    f32 a416;
    u8 pad420[8];
    f32 a428;
    u8 pad432[4];
    SB *sb;
    IT **items;
    char **strs;
    u8 pad448[4];
    O452 *o452;
    u32 top;
    u32 bot;
};
extern volatile f32 lbl_80364F40;
extern f32 lbl_803596E0[];
extern f32 lbl_8035AF84;
void fn_801CCDDC(u32, u32 *, T12 **, u32);
void fn_8012D0A4(void *, RC *, char *, f32 *, u8 *, int, f32, f32, f32);
void fn_801B79E4(P *);
static inline void calcRect(P *p, RC *r) {
    volatile u32 n;
    T12 *t;
    f32 sc[2];
    n = 0;
    { f32 z = lbl_80364F40; sc[0] = z; sc[1] = z; }
    fn_801CCDDC(p->o452->a112, (u32 *)&n, &t, p->o452->a104);
    if (t->font && *p->strs) fn_8012D0A4(t->font, r, *p->strs, sc, t->b48, 17, lbl_803596E0[0], t->size, lbl_8035AF84);
    if (p->i380) r->y1 = r->y0 + p->a428;
    r->x1 = r->x0 + (p->a96 - p->a88);
}
static inline f32 H1(IT *q) { return q->a84 - q->a76; }
static inline f32 H2(IT *q) { return q->a100 - q->a92; }

void fn_801B3EB0(P *p) {
    f32 rowH;
    f32 vis;
    f32 sum;
    u32 i;
    s32 j;
    sum = lbl_80364F40;
    vis = p->a84 - p->a76;
    rowH = sum;
    if (p->strs) {
        RC r;
        calcRect(p, &r);
        rowH = r.y1 - r.y0;
    }
    j = p->sel;
    if ((u32)j <= p->top) {
        p->a416 = lbl_80364F40;
        p->top = p->sel;
        if (p->n392 == 0) p->bot = 0;
        else if (p->bot >= p->n392) p->bot = p->n392 - 1;
        for (i = p->top; i <= p->bot; i++) {
            if (p->strs) sum += rowH;
            else if (p->items) sum += H1(p->items[i]);
            if (sum >= vis) { p->bot = i; break; }
        }
    } else if ((u32)j >= p->bot) {
        f32 s2 = lbl_80364F40;
        if (p->a408 - vis > s2) {
            for (; j >= 0; j--) {
                if (p->strs) s2 += rowH;
                else if (p->items) s2 += H2(p->items[j]);
                if (s2 >= vis) { p->top = j; p->a416 = s2 - vis; break; }
            }
        }
    }
    {
        f32 s3 = lbl_80364F40;
        for (i = 0; i < p->top; i++) {
            if (p->strs) s3 += rowH;
            else if (p->items) s3 += H2(p->items[i]);
        }
        if (p->sb) p->sb->s85(s3 + p->a416);
    }
    fn_801B79E4(p);
}

} /* extern "C" */
