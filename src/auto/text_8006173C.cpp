// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct VB8006173C {
    u32 x0;
};
struct D8006173C : virtual VB8006173C {
};
struct V8006173C {
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
    virtual D8006173C *v23(void *);
};
extern "C" {
typedef struct G8006173C {
    u8 pad[24];
    V8006173C *f24;
    u8 pad2[76];
    void *f104;
} G8006173C;
extern G8006173C *lbl_8035B5E4;
extern void *lbl_8035A00C;
extern u8 lbl_802AFC88[];
extern u8 lbl_802F21C0[];
extern char lbl_802975AC[];
extern u32 lbl_80359200;
extern u32 lbl_80359B88;
extern char lbl_8035E5A8[5];
extern char lbl_8035E620[6];
extern char lbl_8035E628[8];
extern char lbl_8035E5C0[5];
extern char lbl_8035E630[6];
extern char lbl_8035E638[6];
extern char lbl_8035E640[7];
extern char lbl_8035E5C8[8];
extern char lbl_8035E5B8[7];
extern char lbl_8035E648[8];
void fn_800391E4(void *, s32);
void fn_800391A8(void *, s32);
void fn_8025180C(G8006173C *, VB8006173C *, char *, char *, char *, u8 *, u32);

static inline void top(G8006173C *g) {
    D8006173C *r = g->f24->v23(g->f104);
    fn_800391E4(lbl_8035A00C, 0);
    fn_800391A8(lbl_8035A00C, 0);
    fn_8025180C(g, r, lbl_8035E5A8, lbl_8035E620, lbl_8035E628, lbl_802AFC88, lbl_80359200);
    fn_8025180C(g, r, lbl_8035E5C0, lbl_8035E630, lbl_8035E628, lbl_802AFC88, lbl_80359200);
    fn_8025180C(g, r, lbl_8035E638, lbl_8035E640, lbl_8035E628, lbl_802F21C0, lbl_80359B88);
    fn_8025180C(g, r, lbl_8035E5C8, lbl_802975AC, lbl_8035E628, lbl_802F21C0, lbl_80359B88);
    fn_8025180C(g, r, lbl_8035E5B8, lbl_8035E648, lbl_8035E628, lbl_802F21C0, lbl_80359B88);
}
void fn_8006173C(void) {
    top(lbl_8035B5E4);
}

} /* extern "C" */
