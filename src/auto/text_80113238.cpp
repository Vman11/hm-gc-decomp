// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct { u8 d[20]; } E80113238;
typedef struct { u8 pad[16]; u32 count; } H80113238;
typedef struct {
    H80113238 *f0;
    u32 f4;
    void *vt;
    u16 **strs;
    E80113238 *elems;
} O80113238;
extern u32 lbl_8035AAB8;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7E98(void);
void fn_800F7EC0(u32);
void fn_8010C3BC(O80113238 *, void *, void *);
char *fn_800FB284(void *);
void fn_8010C4B8(H80113238 *, u32 *, u32 *);
unsigned long strlen(const char *);
void fn_800FB700(E80113238 *, u16 *, u32);
void fn_800FA5D8(E80113238 *, char *);
} /* extern "C" */
struct V80113238 { u8 pad[8]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void setCount(u32); };
extern "C" {
static inline u32 cnt80113238(O80113238 *o) { return o->f0->count; }
static inline u32 len80113238(O80113238 *o, char *s) {
    u32 x;
    u32 y;
    u32 sz;
    fn_8010C4B8(o->f0, &x, &y);
    sz = strlen(s) + 1;
    if (y != 0x7FFFFFFF && y > sz) sz = y;
    return sz;
}
s32 fn_80113238(O80113238 *o, void *a, void *b) {
    u32 n;
    u32 i;
    char *s;
    u32 sz;
    fn_8010C3BC(o, a, b);
    n = cnt80113238(o);
    ((V80113238 *)o)->setCount(n);
    for (i = 0; i < n; i++) {
        s = fn_800FB284(b);
        sz = len80113238(o, s);
        if (lbl_8035AAB8 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035AAB8);
        o->strs[i] = new u16[sz];
        fn_800F7E98();
        if (o->strs[i] == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
        fn_800FB700(&o->elems[i], o->strs[i], sz);
        fn_800FA5D8(&o->elems[i], s);
    }
    return 0;
}

} /* extern "C" */
