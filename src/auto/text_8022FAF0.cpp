// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct B8022FAF0 {
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
};
struct T8022FAF0 : B8022FAF0 {
    u8 pad[592];
    u8 str[8];
    s32 *f604;
};
struct P8022FAF0 {
    u8 pad[752];
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
    virtual void v17(char *s, void *x, s32 z);
};
extern "C" {
extern P8022FAF0 *lbl_8035B65C;
extern u8 *lbl_8035B308;
extern char lbl_802A8730[];
void fn_802383AC(void *self, void *x);
u32 fn_800F6C28(void *s);
void fn_800F6E40(char *dst, void *s);
void fn_800F6E88(char *dst, void *s);
char *strcat(char *, const char *);
void __ct__9C80253F24Fiiii(void *, char *, void *, s32, s32);

void fn_8022FAF0(T8022FAF0 *self, void *x) {
    u32 n;
    fn_802383AC(self, x);
    if (x == *(void **)(lbl_8035B308 + 72)) {
        if (*self->f604 != 0) self->v18();
        n = fn_800F6C28(self->str);
        if (n + 1 > 8) {
            char big[256];
            fn_800F6E40(big, self->str);
            strcat(big, lbl_802A8730);
        } else {
            char buf[8];
            fn_800F6E88(buf, self->str);
            buf[n] = 'E';
            if (n + 1 < 8) buf[n + 1] = 0;
            lbl_8035B65C->v17(buf, x, 0);
            __ct__9C80253F24Fiiii(lbl_8035B65C, buf, x, 0, 0);
        }
    }
}

} /* extern "C" */
