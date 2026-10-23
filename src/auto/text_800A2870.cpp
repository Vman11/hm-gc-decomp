// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct V_800A2870 {
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
};
extern "C" {
typedef struct { u32 a, b, c, d, e; } S20_800A2870;

extern char lbl_80361BD4[4];
extern S20_800A2870 lbl_8029A8B8;
extern f32 lbl_80361BD0;
extern volatile f32 lbl_80361BD8;
s32 fn_800F6CD0(void *, char *);
void fn_8023FA2C(u8 *, u32 *, S20_800A2870);
int rand(void);
static inline S20_800A2870 MakeS(u32 a) { S20_800A2870 s = lbl_8029A8B8; s.a = a; return s; }
static inline s32 RandI(s32 n) { return (u32)rand() % n; }
static inline f32 RandF(void) { return lbl_80361BD8 * (f32)RandI(10000); }


void fn_800A2870(u8 *p) {
    (*(V_800A2870 **)(p + 224))->v23();
    if (fn_800F6CD0(*(void **)(p + 324), lbl_80361BD4) == 0) {
        *(u32 *)(p + 520) = 0;
        fn_8023FA2C(p, (u32 *)(p + 520), MakeS(*(u32 *)(p + 324)));
    }
    if (**(s32 **)(p + 364) != 0) {
        *(f32 *)(p + 524) = lbl_80361BD0;
    } else {
        *(f32 *)(p + 524) = **(f32 **)(p + 376) + (**(f32 **)(p + 380) - **(f32 **)(p + 376)) * RandF();
    }
    *(s32 *)(p + 440) = 1;
}

} /* extern "C" */
