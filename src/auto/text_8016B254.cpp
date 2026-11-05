#include "common.h"
extern "C" {
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
}
struct C80152B64 { char pad[0x40]; C80152B64(); };
extern "C" {
extern u8 lbl_803286D0[];
extern const u32 lbl_802A0C60[20];
void fn_800D9E98(u32);
void fn_800D9DF8(C80152B64 *, u32);
static inline void setMode(u8 *p, u32 m) { if (F(p,10076,u32) != m) { F(p,10076,u32) = m; fn_800D9E98(F(p,10076,u32)); } }
static inline void bind(u8 *p, void *obj, u32 slot) {
    C80152B64 c;
    (*(void (**)(C80152B64 *, void *))(lbl_803286D0 + 372))(&c, obj);
    fn_800D9DF8(&c, slot);
    ((void **)(p + 8112))[slot] = obj;
}
static inline void bind2(u8 *p, void *obj, u32 slot) {
    C80152B64 c;
    (*(void (**)(C80152B64 *, void *))(lbl_803286D0 + 372))(&c, obj);
    fn_800D9DF8(&c, slot);
    *(void **)(p + 8112 + slot * 4) = obj;
}
static inline void bind3(u8 *p, u32 slot, void *obj) {
    C80152B64 c;
    (*(void (**)(C80152B64 *, void *))(lbl_803286D0 + 372))(&c, obj);
    fn_800D9DF8(&c, slot);
    *(void **)(p + 8112 + slot * 4) = obj;
}
void fn_8016B254(u8 *p, int on, int n, u8 *str) {
    u32 i;
    if (n < 0) { setMode(p, 3); return; }
    if (n == 0) { bind(p, F(p,10884,void*), 0); setMode(p, 0); return; }
    if (on) {
        setMode(p, 27);
        if ((u32)n > 9) {
            for (i = 0; i < (u32)n; i++) bind2(p, F(p,10872,void*), lbl_802A0C60[i]);
        } else {
            for (i = 0; i < (u32)n; i++) bind3(p, lbl_802A0C60[i], F(p,10912,void**)[str[i]]);
        }
    } else if (n == 1) {
        bind(p, F(p,10912,void**)[str[0]], 6); setMode(p, 6);
    } else if (n == 2) {
        bind(p, F(p,10912,void**)[str[0]], lbl_802A0C60[0]);
        bind(p, F(p,10912,void**)[str[1]], lbl_802A0C60[1]);
        setMode(p, 27);
    } else setMode(p, 3);
}
}
