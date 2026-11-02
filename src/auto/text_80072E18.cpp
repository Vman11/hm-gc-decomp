// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct OV {
    u8 pad[108];
    u32 fl;
    u8 pad112[16];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void s20(int);
};
struct G684 { u8 pad[192]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void s3(char *, int); };
struct P {
    u8 pad0[524];
    void *a524;
    u8 pad528[764];
    s32 *s1292;
    u8 pad1296[372];
    s32 i1668;
    u8 pad1672[60];
    s32 i1732;
    s32 i1736;
};
extern s8 lbl_8035A2BC;
extern s32 lbl_8035A2B8, lbl_8035A254, lbl_8035A25C;
extern volatile s32 lbl_8035A258;
extern u8 *volatile lbl_8035A1DC;
extern G684 *lbl_8035B684;
extern void *lbl_8035B65C;
extern char lbl_8035F460[8], lbl_8035F468[8], lbl_8035F470[8], lbl_8035F478[8], lbl_8035F480[8];
extern char lbl_802980E4[], lbl_802980F0[];
OV *fn_801AA960(void *, char *, char *);
int fn_800F6CD0(char *, char *);
void __ct__9C80253F24Fiiii(void *, char *, int, int, int);
void fn_8024118C(void *, char *, int);

void fn_80072E18(P *p, s32 ev) {
    if (!lbl_8035A2BC) {
        lbl_8035A2B8 = 1;
        lbl_8035A2BC = 1;
    }
    switch (ev) {
    case 0x155F89F: {
        OV *o;
        lbl_8035A258 = 1;
        o = fn_801AA960(*(void **)(lbl_8035A1DC + 13232), lbl_8035F460, lbl_8035F468);
        if (o) {
            o->s20(1);
            o->fl |= 2;
        }
        break;
    }
    case 0x2A1195F: {
        s32 *x = p->s1292;
        switch (*x) {
        case 1: *x = 3; break;
        case 3: *x = 7; break;
        case 7: *x = 15; break;
        case 15: *x = 31; break;
        case 31: *x = 63; break;
        case 63: *x = 64; break;
        case 64:
        case 127:
        default: *x = 1; break;
        }
        break;
    }
    case 0x2844A55:
        p->i1668 = !p->i1668;
        lbl_8035A254 = !p->i1668;
        break;
    case 0x2A29C2B:
        lbl_8035A25C = !lbl_8035A25C;
        break;
    case 0x151D9EF: {
        char buf[16];
        lbl_8035B684->s3(buf, -1);
        if (fn_800F6CD0(buf, lbl_8035F470) == 0) {
            if (p->i1732) {
                if (p->i1736) {
                    p->i1736 = 0;
                    __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_802980E4, 0, 0, 0);
                    break;
                }
                return;
            }
            __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_8035F478, 0, 0, 0);
        }
        break;
    }
    case 0xD8E445:
        if (!p->i1732) return;
        __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_802980F0, 0, 0, 0);
        break;
    case 0:
        return;
    default:
        return;
    }
    fn_8024118C(p->a524, lbl_8035F480, 0);
}

} /* extern "C" */
