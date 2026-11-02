// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern "C" {
struct Rect { f32 x0, y0, x1, y1; };
struct Item { u8 pad[92]; f32 a; u8 pad2[4]; f32 b; };
struct Bar { u8 pad[128]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
  virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
  virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
  virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
  virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
  virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
  virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63(); virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67(); virtual void v68(); virtual void v69();
  virtual void v70(); virtual void v71(); virtual void v72(); virtual void v73(); virtual void v74(); virtual void v75(); virtual void v76(); virtual void v77(); virtual void v78(); virtual void v79();
  virtual void v80(); virtual void v81(); virtual void getRange(f32 *lo, f32 *hi); virtual void v83(); virtual f32 getVal(); };
struct Font { u8 pad[104]; s32 a; u8 pad2[4]; s32 b; };
struct Glyph { u8 pad[36]; void *tex; f32 size; u8 pad2[4]; u8 data[1]; };
struct W {
  u8 pad0[72]; f32 f72; u8 pad1[4]; f32 f80; u8 pad2[4]; f32 f88; f32 f92; f32 f96; f32 f100; u8 pad4[4]; u32 flags;
  u8 pad5[380 - 112]; s32 i380; u8 pad6[8]; u32 n392; u8 pad7[8]; f32 f404; f32 f408; f32 f412; f32 f416; u8 pad8[8];
  f32 f428; Bar *b432; Bar *b436; Item **items; s8 **text; u8 pad9[4]; Font *font; s32 i456;
};
extern f32 lbl_80364F40;
extern const f64 lbl_80364F48;
extern f32 lbl_803596E0[];
extern f32 lbl_8035AF84;
void fn_801CCDDC(s32 a, s32 *b, Glyph **c, s32 d);
void fn_8012D0A4(void *tex, Rect *r, s8 *s, f32 *v, u8 *data, s32 n, f32 a, f32 b, f32 c);

#pragma opt_common_subs off
s32 fn_801B4DDC(W *p, Bar *b) {
    Glyph *g;
    s32 z;
    f32 v[2];
    f32 lh[2];
    Rect r;
    u32 i;
    f32 h = lbl_80364F40;
    f32 sum = h;
    if (!(p->flags & 2)) return 0;
    if (b == p->b432) {
        p->f412 = p->f404 - (p->f80 - p->f72);
        if (p->f412 > lbl_80364F40) {
            p->b432->getRange(&lh[0], &lh[1]);
            f32 range;
            if (lbl_80364F48 != (range = lh[1] - lh[0])) {
                p->f412 = p->f412 * p->b432->getVal() / range;
            } else {
                p->f412 = lbl_80364F40;
            }
        } else {
            p->f412 = lbl_80364F40;
        }
    } else if (b == p->b436) {
        p->f416 = p->f408 - (p->f100 - p->f92);
        if (p->f416 > lbl_80364F40) {
            p->b436->getRange(&lh[0], &lh[1]);
            f32 range;
            if (lbl_80364F48 != (range = lh[1] - lh[0])) {
                p->f416 = p->f416 * p->b436->getVal() / range;
                if (p->text) {
                    *(volatile u32 *)&z = 0;
                    { f32 q = *(volatile f32 *)&lbl_80364F40; v[0] = q; v[1] = q; }
                    fn_801CCDDC(p->font->b, &z, &g, p->font->a);
                    if (g->tex && *p->text) {
                        fn_8012D0A4(g->tex, &r, *p->text, v, g->data, 17, lbl_803596E0[0], g->size, lbl_8035AF84);
                    }
                    if (p->i380) r.y1 = r.y0 + p->f428;
                    r.x1 = r.x0 + (p->f96 - p->f88);
                    h = r.y1 - r.y0;
                }
                for (i = 0; i < p->n392; i++) {
                    if (p->text) sum += h;
                    else if (p->items) sum += p->items[i]->b - p->items[i]->a;
                    if (sum >= p->f416) {
                        p->i456 = i;
                        if (p->text) p->f416 = p->f416 - (sum - h);
                        else if (p->items) p->f416 = p->f416 - (sum - (p->items[i]->b - p->items[i]->a));
                        break;
                    }
                }
            } else {
                p->f416 = lbl_80364F40;
            }
        } else {
            p->f416 = lbl_80364F40;
        }
    }
    return 0;
}
}

} /* extern "C" */
