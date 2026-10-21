// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

class C800FB754 { public: u8 d[20]; C800FB754(); };
struct H { u8 pad[0x10]; u32 n; };
struct P { H *hdr; u8 pad4[8]; u32 *a; C800FB754 *b; };
extern "C" { void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); void *memcpy(void *, const void *, u32); extern void *lbl_8035AAB8; }
void *__nwa__FUl(u32);

extern "C" s32 fn_80113380(P *p, u32 n) {
    C800FB754 *b;
    u32 *a;
    u32 i;
    if (!lbl_8035AAB8) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AAB8);
    b = new C800FB754[n];
    fn_800F7E98();
    if (!b) fn_800604C4(-4, 0, 0, 0);
    if (!b) {
        return -4;
    }
    if (!lbl_8035AAB8) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AAB8);
    a = (u32 *)__nwa__FUl(n * 4);
    fn_800F7E98();
    if (!a) fn_800604C4(-4, 0, 0, 0);
    if (!a) {
        return -4;
    }
    for (i = 0; i < n; i++) {
        a[i] = 0;
    }
    if (p->b) {
        if (n > p->hdr->n) {
            memcpy(b, p->b, p->hdr->n * sizeof(C800FB754));
            memcpy(a, p->a, p->hdr->n * 4);
        } else {
            memcpy(b, p->b, n * sizeof(C800FB754));
            memcpy(a, p->a, n * 4);
        }
        delete[] p->a;
        delete[] p->b;
    }
    p->b = b;
    p->a = a;
    p->hdr->n = n;
    return 0;
}

} /* extern "C" */
