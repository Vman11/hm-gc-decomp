// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct V224_8023F5FC {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12();
    virtual void v13(void *buf, s32 a, s32 b, s32 c, s32 d);
};
extern "C" {

extern void *lbl_8035B39C;
extern u8 lbl_803286D0[];
extern f32 lbl_8036613C;
extern u32 lbl_80366140;
extern u32 lbl_80366144;
void *fn_80235ADC(void *);
void fn_80190C98(void *);

typedef struct F4_8023F5FC { u32 f0; f32 f4; } F4_8023F5FC;
typedef struct M132_8023F5FC { u32 f0; u32 f4; F4_8023F5FC *f8; } M132_8023F5FC;
typedef struct R48_8023F5FC { u8 pad0[16]; void *f16; u8 pad14[12]; u32 f32; } R48_8023F5FC;
typedef struct Q_8023F5FC {
    u32 f0; u8 pad4[44]; R48_8023F5FC *f48; u8 pad52[80]; M132_8023F5FC *f132; u8 pad136[36]; u32 f172; F4_8023F5FC *f176;
} Q_8023F5FC;
typedef struct S276_8023F5FC { Q_8023F5FC *f0; s32 f4; f32 f8; } S276_8023F5FC;
typedef struct Self_8023F5FC { u8 pad0[224]; V224_8023F5FC *f224; u8 pad228[48]; S276_8023F5FC *f276; } Self_8023F5FC;

static inline u32 get4_8023F5FC(Q_8023F5FC *q) {
    if (q->f132 == 0) return 0;
    return q->f132->f4;
}
static inline F4_8023F5FC *get8_8023F5FC(Q_8023F5FC *q) {
    if (q->f132 == 0) return 0;
    return q->f132->f8;
}

void fn_8023F5FC(Self_8023F5FC *self, f32 t) {
    u8 buf[16];
    Q_8023F5FC *q;
    R48_8023F5FC *r;
    self->f276 = (S276_8023F5FC *)fn_80235ADC(lbl_8035B39C);
    if (self->f276 != 0) {
        self->f224->v13(buf, 0, 0, 0, 0);
        q = self->f276->f0;
        r = q->f48;
        if (r != 0) {
            (*(void (**)(void *, void *))(lbl_803286D0 + 12))(r->f16, buf);
            r->f32 |= lbl_80366140;
            fn_80190C98(q);
        }
        if (self->f276->f0->f172 != 0) {
            self->f276->f0->f176->f4 = lbl_8036613C;
        }
        if (get4_8023F5FC(self->f276->f0) != 0) {
            get8_8023F5FC(self->f276->f0)->f4 = lbl_8036613C;
        }
        self->f276->f4 = 1;
        self->f276->f8 = t;
        self->f276->f0->f0 |= lbl_80366144;
    }
}

} /* extern "C" */
