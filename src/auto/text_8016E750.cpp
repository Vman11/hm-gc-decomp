// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
struct E { u8 pad[4]; u8 c[4]; u8 cop[4]; u8 a[4]; u8 aop[4]; u8 cx; u8 ax; u8 pad2[26]; };
struct Q { u16 h0; u16 h2; };
struct P { u8 pad[4]; u8 data[16]; s32 mode; s32 amode; };
extern E lbl_8032ED28[];
extern volatile s32 lbl_8035AD34;
void fn_801756D8(E *);
void fn_80175634(E *, s32);
void fn_801753B8(E *, u8 *, u32, u16);

static inline void cin(E *e, u8 a, u8 b, u8 c, u8 d) { e->c[0] = a; e->c[1] = b; e->c[2] = c; e->c[3] = d; }
static inline void ain(E *e, u8 a, u8 b, u8 c, u8 d) { e->a[0] = a; e->a[1] = b; e->a[2] = c; e->a[3] = d; }
static inline void cop(E *e, u8 a, u8 b, u8 c, u8 d, u8 x) { e->cop[0] = a; e->cop[1] = b; e->cop[2] = c; e->cop[3] = d; e->cx = x; }
static inline void aop(E *e, u8 a, u8 b, u8 c, u8 d, u8 x) { e->aop[0] = a; e->aop[1] = b; e->aop[2] = c; e->aop[3] = d; e->ax = x; }

void fn_8016E750(Q *q, P *p, u32 f) {
    E *e = &lbl_8032ED28[lbl_8035AD34];
    s32 am;
    fn_801756D8(e);
    fn_80175634(e, lbl_8035AD34);
    am = p->amode;
    switch (p->mode) {
    case 0:
        cin(e, 15, 15, 15, 8);
        if (am == 3) ain(e, 7, 7, 7, 4);
        break;
    case 1:
        cin(e, 15, 15, 15, 14);
        if (am == 3) ain(e, 7, 7, 7, 6);
        break;
    case 2:
        cin(e, 15, 15, 15, 10);
        if (am == 3) ain(e, 7, 7, 7, 5);
        break;
    case 3:
        cin(e, 15, 8, 14, 15);
        if (am == 3) ain(e, 7, 4, 6, 7);
        break;
    case 4:
        cin(e, 15, 8, 10, 15);
        if (am == 3) ain(e, 7, 4, 5, 7);
        break;
    case 5:
        cin(e, 15, 10, 14, 15);
        cop(e, 0, 0, 0, 1, 0);
        if (am == 3) ain(e, 7, 5, 6, 7);
        lbl_8035AD34++;
        e++;
        fn_80175634(e, lbl_8035AD34);
        cin(e, 15, 0, 8, 15);
        if (am == 3) ain(e, 7, 0, 4, 7);
        break;
    }
    switch (am) {
    case 0:
        ain(e, 7, 7, 7, 4);
        break;
    case 1:
        ain(e, 7, 7, 7, 6);
        break;
    case 2:
        ain(e, 7, 7, 7, 5);
        break;
    }
    cop(e, 0, 0, 0, 1, 0);
    aop(e, 0, 0, 0, 1, 0);
    fn_801753B8(e, p->data, f, q->h2);
    if (f) q->h2++;
    lbl_8035AD34++;
}
}

} /* extern "C" */
