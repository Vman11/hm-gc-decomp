// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
template <int N> struct VA {
    u8 pad_[N];
    virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3();
};
struct V0 { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); };
struct VD { u8 pad_[4]; virtual ~VD(); };
struct K16 { K16(); u8 b[4]; };
struct A6448 {
    u8 pad_[6448];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void s3(void *, int, int);
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
    virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44();
    virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
    virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54();
    virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
    virtual void v60(); virtual void v61(); virtual void s62();
};
struct B48 { u8 pad_[48]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void s3(int); };
struct V136 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void s32(void *);
};
struct Base752 { u8 pad_[752]; virtual void s0(); virtual void s1(); };
extern "C" {
struct O4 { u8 pad[16]; V136 *v16; };
struct O36 { u8 pad[14008]; s32 i14008; };
struct G5C4 { u8 pad[4]; VA<16> *o4; };
struct G1DC { u8 pad[13264]; void *a13264; u8 pad13268[4]; void *a13272; };
struct P : Base752 {
    u8 pad756[2240];
    VA<32> *o2996;
    u8 pad3000[4];
    u32 n3004;
    VD *arr[21];
    K16 *k3092;
    void *o3096;
};
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
extern void *lbl_8035B478;
extern void *lbl_8035B7F4;
extern G1DC *lbl_8035A1DC;
extern VA<16> *lbl_8035B308;
extern G5C4 *lbl_8035B5C4;
extern u8 lbl_803575DC[36];
extern f32 lbl_8035BD7C;
void fn_8023B324(void *);
void __dt__9C8023B4DCFv(void *, int);
void fn_8026B5FC(void *);
void fn_8023E138(void *, void *);
void fn_80270320(void *);
void fn_801808D0(void *, void *);
void fn_802481A4(void *);
void fn_8010B5E8(void *);
void fn_80110E5C(void *);
void fn_80037D60(void *);
void fn_80038B90(void *);
void fn_80038FA4(void *);
void fn_80037870(void *);
void fn_8023DD14(void *, void *);
void fn_801AD0A8(void *);
void fn_8026B560(void *, f32);
void fn_80254DB4(P *);
void fn_80033824(P *);

void fn_800338E8(P *p) {
    u32 i;
    if (F(p, 28, A6448 *) && F(p, 40, void *)) {
        F(p, 28, A6448 *)->s3(F(p, 40, void *), 0, 0);
        (*F(p, 28, B48 **))->s3(128);
        F(p, 28, A6448 *)->s62();
    }
    if (p->k3092) delete[] p->k3092;
    if (p->o3096) {
        fn_8023B324(p->o3096);
        __dt__9C8023B4DCFv(p->o3096, 1);
    }
    if (F(p, 36, O36 *) && F(p, 36, O36 *)->i14008 == 0) fn_8026B5FC(F(p, 128, void *));
    if (lbl_8035B478 && F(p, 632, s32)) fn_8023E138(lbl_8035B478, (u8 *)p + 144);
    fn_80270320(lbl_8035B7F4);
    if (F(p, 12, void *)) {
        fn_801808D0(lbl_8035A1DC->a13272, F(p, 12, void *));
        fn_801808D0(lbl_8035A1DC->a13264, F(p, 12, void *));
    }
    if (p->o2996) {
        p->o2996->s1();
        F(p, 4, O4 *)->v16->s32(p->o2996);
        p->o2996 = 0;
    }
    lbl_8035B308->s1();
    fn_802481A4(lbl_803575DC);
    fn_8010B5E8((u8 *)p + 1764);
    fn_80110E5C((u8 *)p + 772);
    fn_80110E5C((u8 *)p + 1268);
    fn_80110E5C((u8 *)p + 144);
    fn_80037D60((u8 *)p + 1904);
    fn_80038B90(F(p, 1992, void *));
    fn_80038FA4((u8 *)p + 1996);
    fn_80037870((u8 *)p + 2052);
    if (lbl_8035B478 && F(p, 648, void *)) fn_8023DD14(lbl_8035B478, F(p, 648, void *));
    fn_801AD0A8((u8 *)p + 1784);
    if (F(p, 132, V0 *)) F(p, 132, V0 *)->s3();
    if (F(p, 128, V0 *)) {
        fn_8026B560(F(p, 128, void *), lbl_8035BD7C);
        F(p, 128, V0 *)->s3();
    }
    lbl_8035B5C4->o4->s1();
    ((V0 *)((u8 *)p + 2072))->s1();
    ((VA<16> *)((u8 *)p + 56))->s1();
    for (i = 0; i < p->n3004; i++) {
        delete p->arr[i];
    }
    p->s1();
    fn_80254DB4(p);
    fn_80033824(p);
}

} /* extern "C" */
