// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct VP { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void play(char *, int, int, int, int); };
extern "C" {
typedef struct Q { u8 pad[12]; u32 x12; u8 pad16[372 - 16]; f32 f372; f32 f376; } Q;
typedef struct N { u32 fl; u8 pad4[144 - 4]; Q *x144; u8 pad148[4]; u32 x152; f32 f156; u8 pad160[172 - 160]; f32 f172; } N;
typedef struct T1720 { u8 pad[12]; f32 *x12; } T1720;
typedef struct O { u8 pad0[1076]; VP *x1076; u8 pad1080[1088 - 1080]; N *x1088; N *x1092; u8 pad1096[1292 - 1096]; u32 *x1292; u8 pad1296[1712 - 1296]; f32 f1712; u8 b1716; u8 b1717; u8 pad1718[2]; T1720 *x1720; } O;
extern char lbl_80298060[];
extern u8 *lbl_8035B460;
extern char lbl_8035F40C[8], lbl_8035F414[8], lbl_8035F41C[8], lbl_8035F424[8], lbl_8035F42C[8], lbl_8035F434[8];
extern u32 lbl_8035F400, lbl_8035F3E8, lbl_8035F404, lbl_8035F408;
extern f32 lbl_8035F3EC;
extern f64 lbl_8035F440;
N *fn_800F9398(u8 *, char *);
void fn_80196688(N *);
static inline N *Find(char *s) { return fn_800F9398(*(u8 **)(lbl_8035B460 + 8) + 144, s); }
static inline void Init(N *p) {
    p->f156 = lbl_8035F3EC;
    p->x152 &= ~6;
    p->f172 = lbl_8035F3EC;
    fn_80196688(p);
}
static inline void Scale(O *o, N *n) {
    Q *q = n->x144;
    q->f372 = lbl_8035F440 * (o->f1712 / o->x1720->x12[o->b1716]);
    q->f376 = q->f372;
    q->x12 |= lbl_8035F408;
}
void fn_800724AC(O *o) {
    char *pool = lbl_80298060;
    u32 bits;
    int ch = 0;
    u32 nx = o->b1717 + 1;
    if (nx < 3) {
        bits = *o->x1292;
        if (bits & 0x40) {
            o->b1716 = 6;
            ch = 1;
        } else if (bits & (1 << (nx + 3))) {
            ch = 1;
            o->f1712 -= o->x1720->x12[o->b1716];
            o->b1716 = nx + 3;
        } else if (bits & (1 << nx)) {
            ch = 1;
            o->f1712 -= o->x1720->x12[o->b1716];
            o->b1716 = nx;
        }
        if (ch) {
            N *a = 0, *b = 0;
            o->b1717++;
            switch (o->b1716) {
            case 6:
                o->x1076->play(pool + 36, 0, 0, 0, 0);
                a = Find(lbl_8035F40C);
                b = Find(pool + 48);
                break;
            case 5:
                o->x1076->play(pool + 36, 0, 0, 0, 0);
                a = Find(lbl_8035F414);
                b = Find(pool + 60);
                break;
            case 4:
                o->x1076->play(pool + 72, 0, 0, 0, 0);
                a = Find(lbl_8035F41C);
                b = Find(pool + 84);
                break;
            case 2:
                o->x1076->play(pool + 96, 0, 0, 0, 0);
                a = Find(lbl_8035F424);
                b = Find(pool + 108);
                break;
            case 1:
                o->x1076->play(lbl_8035F42C, 0, 0, 0, 0);
                a = Find(lbl_8035F434);
                b = Find(pool + 120);
                break;
            }
            if (a) {
                if (o->x1088) o->x1088->x152 |= lbl_8035F400;
                if (o->x1092) o->x1092->x152 |= lbl_8035F400;
                o->x1088 = a;
                o->x1092 = b;
                o->x1088->fl |= lbl_8035F3E8;
                o->x1092->fl |= lbl_8035F3E8;
                Init(o->x1088);
                Init(o->x1092);
                o->x1088->x152 |= lbl_8035F404;
                o->x1092->x152 |= lbl_8035F404;
                o->x1088->x152 &= ~8;
                o->x1092->x152 &= ~8;
            }
            if (o->x1088) Scale(o, o->x1088);
            if (o->x1092) Scale(o, o->x1092);
        }
    }
}

} /* extern "C" */
