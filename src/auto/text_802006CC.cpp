#include "common.h"

extern "C" {
struct R { u32 *b; u32 *e; };
extern R lbl_8035B160;
extern u32 lbl_8034E8E4[8];
struct P { s32 f0; u8 s4[4]; s32 f8; u8 pad[0xc8 - 0xc]; s32 fc8; };
void fn_801FE890(void *s);
void fn_801FE894(void *s);
static inline void Init(R *r, u32 *buf, s32 n) {
    r->b = buf;
    u32 *e = buf + n;
    r->e = e;
    for (u32 *q = buf; q != e; q++) *q = 0;
}
void fn_802006CC(P *p) {
    if (p->f8 != 0) {
        p->fc8 = 0;
        fn_801FE890(p->s4);
    }
    Init(&lbl_8035B160, lbl_8034E8E4, 8);
    fn_801FE894(p->s4);
    p->fc8 = 0;
}
}
