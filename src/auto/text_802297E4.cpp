// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct O_802297E4 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7(void *, void *, void *, void *);
};

typedef struct {
    u8 *f0;
} N_802297E4;

typedef struct {
    u8 pad[8];
    u8 *f8;
} M_802297E4;

extern char lbl_80365CEC[8];
extern char lbl_802A8524[];
extern M_802297E4 *lbl_8035B460;
N_802297E4 *fn_8010FEDC(void *, void *, char *, s32);
void fn_800F6FBC(u32, char *);
void *fn_800F9398(void *, char *);
void *fn_800F9788(void *, char *, char *);
void fn_800F6E88(char *, u8 *);
O_802297E4 *fn_8023CA4C(void *, char *);

static inline void *lookup_802297E4(u8 *m, char *ns, char *name) {
    if (ns == 0 || *ns == '\0') {
        return fn_800F9398(m + 144, name);
    }
    return fn_800F9788(m + 168, ns, name);
}

O_802297E4 *fn_802297E4(u8 *a, void *b, u8 *c, void *d) {
    N_802297E4 *n;
    N_802297E4 *ns;
    O_802297E4 *o;
    char buf16[8];
    char buf8[8];
    char buf24[16];

    n = fn_8010FEDC(b, c, lbl_80365CEC, 1);
    if (n != 0) {
        if (d == 0) {
            fn_800F6FBC(*(u32 *)(c + 4), buf24);
            ns = fn_8010FEDC(b, c, lbl_802A8524, 1);
            if (ns == 0) {
                d = fn_800F9398(lbl_8035B460->f8 + 144, buf24);
            } else {
                fn_800F6E88(buf16, ns->f0 + 12);
                d = lookup_802297E4(lbl_8035B460->f8, buf16, buf24);
            }
        }
        fn_800F6E88(buf8, n->f0 + 12);
        o = fn_8023CA4C(a, buf8);
        o->v7(b, a, d, c);
        (*(s32 *)(a + 84))++;
        return o;
    }
    return 0;
}

} /* extern "C" */
