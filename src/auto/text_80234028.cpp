// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V3 { f32 x, y, z; };
struct VB { u8 pad[0x68]; };
struct VK : VB { virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5(); virtual void k6(); virtual void k7(); virtual void k8(); virtual void k9(); virtual void k10(); virtual void k11(f32); };
struct O;
struct QE { virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4(); virtual void e5(); virtual void e6(); virtual void e7(); virtual void e8(); virtual void e9(O *); virtual void e10(); virtual void e11(); virtual void e12(); virtual void e13(V3 *, V3 *); };
struct Q { u8 pad[128]; s32 n128; u8 pad132[60]; QE **f192; u8 pad196[20]; s32 f216; };
struct O {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18();
    virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40();
};
struct OB { virtual void v0(); virtual void v1(); virtual void a16(); virtual void v3(); virtual void a24(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void a64(V3 *, V3 *, V3 *, V3 *, int); virtual void v15(); virtual void v16(); virtual void a76(); virtual void v18(); virtual void a84(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void a140(char *, void *, int, void *, int);
    u8 pad4[8]; u8 *f12; void *f16; u8 pad20[120]; char f140[8]; u8 pad148[8]; VK *f156; u8 pad160[120]; f32 f280, f284, f288; u8 pad292[24]; f32 f316, f320, f324; u8 pad328[12]; f32 f340; u8 pad344[64]; char f408[8]; u8 pad416[108]; Q *f524; u8 pad528[8]; void *f536; };
struct S {
    void **vt; u8 pad4[16]; V3 f20; V3 g32; V3 f44; u8 pad56[12]; V3 f68; u8 pad80[516];
    OB *arr[100];
    s32 *f996; s32 *f1000; u32 f1004; s32 *f1008; s32 *f1012; u32 f1016; s32 *f1020; u32 f1024; u32 f1028; s32 *f1032;
    char f1036[8];
    char f1044[8];
    s32 f1052;
    s32 f1056;
    f32 f1060;
    s32 f1064;
    u32 f1068;
    s32 f1072;
    u32 f1076;
    OB *f1080;
    void *f1084;
    f32 f1088, f1092, f1096;
    s32 f1100;
};
struct CM { virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5(); virtual void c6(); virtual void c7(); virtual void c8(); virtual void c9(); virtual void c10(); virtual void c11(); virtual void c12(); virtual void c13(V3 *, int, int, int, int); };
struct GM { u8 pad[72]; CM *f72; };
extern GM *lbl_8035B308;
extern void *lbl_8035B7F4;
extern volatile f32 lbl_80365E88;
extern f32 lbl_80365E94;
extern char lbl_80365E8C[4];
extern char lbl_802A889C[];
extern char lbl_802A88A8[];
void fn_800F6E88(char *, const char *);
void fn_800F6E40(char *, const char *);
void fn_800F6FBC(const char *, char *);
OB *fn_8026F698(void *, char *, char *);
void *fn_801104C0(void *, char *, void *, int);
void fn_80100F24(V3 *, V3 *);
void fn_80101820(V3 *);
int fn_800E8F6C(char *, const char *, ...);
static inline void kadd(S *s, OB *o) { s32 k; for (k = 0; k < *s->f996; k++) { if (s->arr[k] == 0) { s->arr[k] = o; break; } } }
void fn_80234028(S *s, char *p4, char *p5, char *p6) {
    char buf[108];
    char d[12];
    V3 pos;
    V3 t;
    V3 dir;
    V3 cr;
    char e1[12];
    char e2[12];
    char a[8];
    char b[8];
    char c[8];
    char e[8];
    s32 n;
    OB *o;
    s32 i;
    s->f1056--;
    if (s->f1056 < 0) s->f1056 = 0;
    n = *s->f1000;
    if (s->f1008 && *s->f1008 == 0 && s->f1072 == 1) {
        s->f1056 = *s->f1012;
        s->f1072 = 0;
        return;
    }
    for (i = 0; i < n; i++) {
        if (s->f1052 == *s->f996) { s->f1056 = 0; return; }
        if (*s->f1020 != -1 && s->f1064 >= *s->f1020) { s->f1056 = 0; return; }
        if (p5) fn_800F6E88(a, p5); else fn_800F6E88(a, s->f1036);
        if (p6) fn_800F6E88(b, p6); else fn_800F6E88(b, s->f1044);
        o = fn_8026F698(lbl_8035B7F4, a, b);
        if (o) {
            o->f536 = s;
            fn_800F6E88(c, o->f140);
            fn_800F6E88(o->f408, c);
            if (p4) {
                s32 off; Q *q;
                fn_800F6E88(o->f408, p4);
                fn_800F6E88(d, p4);
                d[8] = 0;
                o->f16 = fn_801104C0(o->f12, d, o->f12 + 8, 0);
                q = o->f524;
                if (q) {
                    s32 j;
for (j = 0, off = 0; j < q->n128; j++, off += 4) (*(QE **)((u8 *)q->f192 + off))->e9((O *)o);
                }
                o->a16();
            }
            o->a24();
            kadd(s, o);
            if (s->f1100) { pos.x = s->f1088; pos.y = s->f1092; pos.z = s->f1096; }
            else { pos.x = s->f68.x; pos.y = s->f68.y; pos.z = s->f68.z; }
            if (s->f1032 && *s->f1032 != 0) {
                lbl_8035B308->f72->c13(&t, 0, 0, 0, 0);
                dir.x = t.x - pos.x;
                dir.y = t.y - pos.y;
                dir.z = t.z - pos.z;
                fn_80100F24(&dir, &s->f44);
                fn_80101820(&dir);
                cr.x = dir.y * s->f44.z - dir.z * s->f44.y;
                cr.y = dir.z * s->f44.x - dir.x * s->f44.z;
                cr.z = dir.x * s->f44.y - dir.y * s->f44.x;
                fn_80101820(&cr);
                o->a64(&pos, &dir, &s->f44, &cr, 0);
            } else {
                o->a64(&pos, &s->f20, &s->f44, &s->g32, 0);
            }
            if (o->f524) {
                Q *q = o->f524;
                q->f192[q->f216]->e13(&pos, &pos);
            }
            o->f280 = lbl_80365E88;
            o->f284 = lbl_80365E88;
            o->f288 = lbl_80365E88;
            o->f340 = lbl_80365E88;
            o->f316 = lbl_80365E88;
            o->f320 = lbl_80365E88;
            o->f324 = lbl_80365E88;
            o->a76();
            o->a84();
            o->a140(lbl_80365E8C, s->f1080, 0, s->f1084, 0);
            if (s->f1080) {
                fn_800F6FBC(lbl_802A889C, e);
                s->f1080->a140(e, 0, 0, o, 0);
            }
            o->f156->k11(lbl_80365E94);
            s->f1064++;
            s->f1052++;
        } else {
            fn_800F6E40(e1, a);
            fn_800F6E40(e2, b);
            fn_800E8F6C(buf, lbl_802A88A8, e1, e2);
            s->f1056 = 0;
            return;
        }
    }
}

} /* extern "C" */
