// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* lbl_802C9AA0 (0x4F4 bytes, in jt_802C9AA0): fn_8009145C addresses the three trailing tables through the
   section base. The first 0x41C bytes (a descriptor table with 85 pointers) are not reconstructed yet. */
static u8 tab_000[1052] = { 1 };
static s32 tabA[18] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17 };
static s32 tabB[18] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
static s32 tabC[18] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 1, 14, 15, 16 };
extern void *lbl_8035B308;
extern f32 lbl_80360B2C;
extern f32 lbl_80360B30;
extern char lbl_80360B34[5];
extern char lbl_80360B3C[7];
extern char lbl_80360B44[5];
extern char lbl_80360A9C[4];
extern f32 lbl_80360B4C;
extern f32 lbl_80360B50;
void fn_80241628(void *p, s32 a, s32 b);
void fn_80240274(void *p, s32 a);
void fn_80241588(void *p, s32 a, s32 b, f32 f);
void fn_80242168(void *p, f32 f);
void fn_8023F9C8(void *p, s32 a);
void fn_802402E0(void *p);
void fn_8022BCD8(void *p, char *a, char *b);
void fn_8022BF30(void *p, s32 a, s32 b, f32 f);
void fn_802490E0(void *p, s32 a, f32 f);
} /* extern "C" */
struct V8009145C {
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
    virtual void m(char *, void *, s32, f32 *, s32);
};
extern "C" {

void fn_8009145C(u8 *p, s32 n) {
    s32 *q;
    s32 i;
    s32 t;
    V8009145C *obj;
    f32 f;
    i = tabA[n];
    t = *(s32 *)(p + 0x60);
    q = &tabB[i];
    while (t > 0) {
        if (*q > t) break;
        t -= tabB[i++];
        q++;
    }
    switch (tabC[i]) {
    case 0:
        fn_80241628(p, 0, 0);
        *(void **)(p + 0x118) = *(void **)((u8 *)lbl_8035B308 + 0x48);
        break;
    case 1:
        return;
    case 2:
        fn_80240274(p, 0);
        break;
    case 3:
        fn_80241588(p, 0, 0, lbl_80360B2C);
        break;
    case 4:
        fn_80241588(p, 1, 0, lbl_80360B2C);
        break;
    case 5:
        fn_80241588(p, 2, 0, lbl_80360B2C);
        break;
    case 6:
        fn_80241588(p, 3, 0, lbl_80360B2C);
        fn_80242168(p, lbl_80360B30);
        break;
    case 7:
        fn_80241588(p, 4, 0, lbl_80360B2C);
        break;
    case 8:
        fn_80241588(p, 5, 0, lbl_80360B2C);
        break;
    case 9:
        fn_80241588(p, 6, 0, lbl_80360B2C);
        break;
    case 10:
        fn_80241588(p, 7, 0, lbl_80360B2C);
        break;
    case 11:
        *(s32 *)(p + 0x120) = 1;
        obj = *(V8009145C **)(p + 0x124);
        if (obj != 0) {
            obj->m(lbl_80360B34, 0, 0, 0, 0);
        }
        break;
    case 12:
        *(s32 *)(p + 0x120) = 0;
        fn_8023F9C8(p, 0);
        break;
    case 13:
        if (*(s32 *)(p + 0x120) != 0) {
            f = -**(f32 **)(p + 0x11c);
            obj = *(V8009145C **)(p + 0x118);
            obj->m(lbl_80360B3C, *(void **)(p + 0xe0), 0, &f, 0);
        }
        break;
    case 14:
        fn_802402E0(p);
        *(void **)(p + 0x124) = 0;
        break;
    case 15:
        *(void **)(p + 0x124) = *(void **)(p + 0xe4);
        break;
    case 16:
        fn_8022BCD8(*(void **)(p + 0xe0), lbl_80360B44, lbl_80360A9C);
        fn_8022BF30(*(void **)(p + 0xe0), 255, 1, lbl_80360B4C);
        fn_8022BF30(*(void **)(p + 0xe0), 0, 1, lbl_80360B50);
        fn_802490E0(p, 0, lbl_80360B50);
        break;
    case 17:
        break;
    }
}

} /* extern "C" */
