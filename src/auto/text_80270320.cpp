#include "common.h"

extern "C" {

struct wA_O {
    u32 flags; u8 pad4[0x64];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual ~wA_O(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void release();
};
struct C8023C7CC { u8 b[4]; ~C8023C7CC(); };
struct wA_M { u8 pad[0xc]; void *mgr; };
struct wA_P {
    s32 on; wA_O ***a; wA_O ***b; wA_O ***c; u32 na[20]; u32 nb[20]; u32 nc[20]; u32 n; C8023C7CC *x; void ***ids;
};
extern wA_M *lbl_8035B65C;
extern void *lbl_8035B308;
void fn_802289C8(void *a, void *id);
void fn_8019B380(void *m, wA_O *o);
void fn_8019B6B8(void *m, wA_O *o);
void fn_8019B048(void *m, wA_O *o);
void fn_8023C754(C8023C7CC *x);

inline void wA_rel(wA_P *p, void *m, wA_O ****pa, u32 *cnt) {
    if (*pa != 0) {
        u32 i;
        u32 j;
        for (i = 0; i < p->n; i++) {
            if ((*pa)[i] != 0) {
                for (j = 0; j < cnt[i]; j++) {
                    fn_802289C8(lbl_8035B308, p->ids[i][j]);
                    (*pa)[i][j]->flags &= ~0x800;
                    (*pa)[i][j]->flags &= ~2;
                    (*pa)[i][j]->flags &= ~0x200;
                    fn_8019B380(m, (*pa)[i][j]);
                    fn_8019B6B8(m, (*pa)[i][j]);
                    fn_8019B048(m, (*pa)[i][j]);
                    (*pa)[i][j]->release();
                    delete (*pa)[i][j];
                }
                delete[] (*pa)[i];
            }
        }
        delete[] *pa;
    }
}

void fn_80270320(wA_P *p) {
    void *m = 0;
    if (p->on != 0) {
        if (lbl_8035B65C != 0) {
            m = lbl_8035B65C->mgr;
        }
        if (m != 0) {
            u32 i, j;
            if (p->a != 0) {
                for (i = 0; i < p->n; i++) {
                    if (p->a[i] != 0) {
                        for (j = 0; j < p->na[i]; j++) {
                            fn_802289C8(lbl_8035B308, p->ids[i][j]);
                            p->a[i][j]->flags &= ~0x800;
                            p->a[i][j]->flags &= ~2;
                            p->a[i][j]->flags &= ~0x200;
                            fn_8019B380(m, p->a[i][j]);
                            fn_8019B6B8(m, p->a[i][j]);
                            fn_8019B048(m, p->a[i][j]);
                            p->a[i][j]->release();
                            delete p->a[i][j];
                        }
                        delete[] p->a[i];
                    }
                }
                delete[] p->a;
            }
            wA_rel(p, m, &p->b, p->nb);
            wA_rel(p, m, &p->c, p->nc);
            if (p->ids != 0) {
                for (i = 0; i < p->n; i++) {
                    delete[] p->ids[i];
                }
                delete[] p->ids;
            }
            if (p->x != 0) {
                fn_8023C754(p->x);
                delete p->x;
            }
            p->on = 0;
            p->a = 0;
            p->b = 0;
            p->c = 0;
            p->n = 0;
            p->x = 0;
            p->ids = 0;
        }
    }
}

} /* extern "C" */
