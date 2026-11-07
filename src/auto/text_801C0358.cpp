#include "common.h"
extern "C" {
struct E1C { u32 id; u8 pad[0x18]; };
struct L70 { u32 pad; E1C *ent; s32 count; };
struct K8 { u32 a, b; };
struct O1C {
    u8 pad[0x68];
    u32 *map;
    u32 pad6c;
    L70 *list;
    void *f74;
};
void fn_800FB064(void *, K8 *);
u32 fn_801AAA08(void *, s32, K8 *, K8 *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
extern void *lbl_8035AFCC;

static inline void copyIds(O1C *o, s32 n) {
    for (s32 i = 0; i < n; i++) o->map[i] = o->list->ent[(u32)i].id;
}
void fn_801C0358(O1C *o, void *s, s32 b) {
    K8 k0, k2, k1, k3;
    u32 from, to;
    s32 n, i, j;
    fn_800FB064(s, &k0);
    fn_800FB064(s, &k1);
    fn_800FB064(s, &k2);
    fn_800FB064(s, &k3);
    from = fn_801AAA08(o->f74, b, &k0, &k1);
    to = fn_801AAA08(o->f74, b, &k2, &k3);
    if (o->list) {
        n = o->list->count;
        if (!o->map) {
            if (!lbl_8035AFCC) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035AFCC);
            o->map = new u32[n];
            fn_800F7E98();
            if (!o->map) fn_800604C4(-4, 0, 0, 0);
            copyIds(o, n);
        }
        for (j = 0; j < n; j++)
            if (from == o->list->ent[(u32)j].id) o->map[j] = to;
    }
}
}
