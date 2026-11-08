// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

// fn_8003DE9C code matches 100%; unit stays NonMatching: string pool is .rodata lbl_80294E10, shared with 8003C8E4/8003D130/8003D518 (needs TU merge).

class Var { public: u8 p[8]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void *ptr(int); void *f12; };
struct Mgr3DE9C {
    u8 pad[192];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void m3(void *out, s32 v);
    virtual void v4();
    virtual s32 m5(void *key);
};
struct G65C { u8 p[36]; u8 *f36; };
struct En { u8 p[740]; void *f740; u32 f744; u8 p748[8]; };
extern "C" {
typedef struct { char d[8]; } Key3DE9C;
typedef struct { u8 *f0; } Buf3DE9C;
extern u8 *lbl_8035A1DC;
extern void *lbl_8035B594;
extern G65C *lbl_8035B65C;
extern Mgr3DE9C *lbl_8035B684;
struct Str { char s0[36]; char s36[12]; char s48[12]; char s60[12]; char s72[12]; char s84[12]; char s96[12]; char s108[12]; };
extern Str lbl_80294E10;
extern char lbl_8035C1D8[8];
extern char lbl_8035C1E4[8];
extern char lbl_8035C1EC[8];
extern char lbl_8035C1F4[8];
extern char lbl_8035C200[8];
extern char lbl_8035C20C[8];
extern char lbl_8035C214[8];
extern char lbl_8035C21C[8];
extern char lbl_8035C224[4];
void *memset(void *, int, u32);
void *memcpy(void *, const void *, unsigned long);
void fn_8024D7E4(void *);
Var *fn_80207198(u8 *, char *, int);
void fn_800F6E88(void *, char *);
s32 fn_8003DD00(u8 *o, Buf3DE9C *b);
u32 *fn_800F8274(void *, Key3DE9C *);
void fn_800F87F0(void *, Key3DE9C *, u32 *);
}
inline void SetI(char *n, s32 v) { *(s32 *)fn_80207198(lbl_8035A1DC + 992, n, 0)->ptr(0) = v; }
inline Var *Get(char *n) { return fn_80207198(lbl_8035B65C->f36 + 992, n, 0); }

const char *wG_strpool_8003DE9C[] = { "DIFFCLTY", "LvSprFnd", "LvSprTtl", "DETHCERT", "SOUNDVOL", "MUSICVOL", "mGemFlag", "NUMCARDS", "ZEKERSHP", "ZEKELIVE" };
static inline void ClrC(u8 *o, u32 s) {
    u8 *q; u8 *p; p = o; q = o;
    u32 i;
    for (i = s; i < 31; i++) {
        memset(*(void **)(p + 1360), 0, 200);
        memset(((En *)q)->f740, 0, ((En *)q)->f744 * 12);
        *(u32 *)(p + 1484) = s;
        p += 4;
        q += 20;
    }
}
extern "C" s32 fn_8003DE9C(u8 *o, Buf3DE9C *b, void *x) {
    s32 pos;
    u32 i;
    s32 type;
    u8 *p;
    u8 *q;
    fn_800F6E88(x, lbl_8035C224);
    if (b->f0[0] != 3) return 0;
    pos = 1;
    ClrC(o, 0);
    fn_8024D7E4(lbl_8035B594);
    SetI((char *)"DETHCERT", 0);
    SetI((char *)"mGemFlag", 1);
    SetI((char *)"NUMCARDS", 0);
    SetI(lbl_8035C21C, 0);
    SetI((char *)"ZEKERSHP", 0);
    SetI((char *)"ZEKELIVE", 0);
    if (!fn_8003DD00(o, b)) return 0;
    do {
        u8 *d = b->f0;
        type = d[pos++];
        switch (type) {
        case 0: {
            u32 cnt;
            u32 j;
            lbl_8035B684->m3(x, d[pos]);
            memcpy(&cnt, &b->f0[pos + 1], 4);
            pos += 5;
            for (j = 0; j < cnt; j++) {
                Key3DE9C key;
                Key3DE9C tmp;
                u32 val;
                s32 c;
                En *e;
                s32 k;
                u32 *slot;
                c = b->f0[pos];
                memcpy(&key, &b->f0[pos + 1], 8);
                memcpy(&val, &b->f0[pos + 9], 4);
                pos += 13;
                k = c;
                if (c == -1) {
                    lbl_8035B684->m3(&tmp, -1);
                    k = lbl_8035B684->m5(&tmp);
                }
                e = (En *)(o + k * 20 + 740);
                slot = fn_800F8274(e, &key);
                if (!slot) {
                    u8 *pk = o + k * 4;
                    slot = (u32 *)*(void **)(pk + 1360) + *(u32 *)(pk + 1484);
                    fn_800F87F0(e, &key, slot);
                    (*(u32 *)(pk + 1484))++;
                }
                *slot = val;
            }
            continue;
        }
        case 3:
            Get((char *)"DETHCERT")->f12 = b->f0 + pos;
            pos += 4;
            continue;
        case 1:
            memcpy(Get(lbl_8035C1D8)->ptr(0), d + pos, 4);
            memcpy(Get((char *)"SOUNDVOL")->ptr(0), &b->f0[pos + 4], 4);
            memcpy(Get((char *)"MUSICVOL")->ptr(0), &b->f0[pos + 8], 4);
            memcpy(Get(lbl_8035C1E4)->ptr(0), &b->f0[pos + 12], 4);
            memcpy(Get(lbl_8035C1EC)->ptr(0), &b->f0[pos + 16], 4);
            memcpy(Get((char *)"mGemFlag")->ptr(0), &b->f0[pos + 20], 4);
            memcpy(Get((char *)"NUMCARDS")->ptr(0), &b->f0[pos + 24], 4);
            memcpy(Get(lbl_8035C1F4)->ptr(0), &b->f0[pos + 28], 4);
            memcpy(Get(lbl_8035C200)->ptr(0), &b->f0[pos + 32], 4);
            memcpy(Get((char *)"DIFFCLTY")->ptr(0), &b->f0[pos + 36], 4);
            memcpy(Get(lbl_8035C20C)->ptr(0), &b->f0[pos + 40], 4);
            memcpy(Get(lbl_8035C214)->ptr(0), &b->f0[pos + 44], 4);
            memcpy(Get(lbl_8035C21C)->ptr(0), &b->f0[pos + 48], 4);
            memcpy(Get((char *)"ZEKERSHP")->ptr(0), &b->f0[pos + 52], 4);
            memcpy(Get((char *)"ZEKELIVE")->ptr(0), &b->f0[pos + 56], 4);
            pos += 60;
            continue;
        case 2:
            break;
        }
        if (type != 2) return 0;
    } while (type != 2);
    return 1;
}

