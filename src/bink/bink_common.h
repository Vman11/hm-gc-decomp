#ifndef BINK_COMMON_H
#define BINK_COMMON_H
/* Functions from 0x80273E10 to 0x80293ED8, found by decomp-toolkit. */
#include "common.h"

s32 DVDGetDriveStatus(void);
void fn_800BFE7C(void *);
void fn_8027AFC0(void *);

typedef struct StreamState {
    u8 pad0[0x1C];
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    u8 pad30[4];
    s32 unk34;
    s32 unk38;
    u8 pad3C[4];
    u32 unk40;
    u8 pad44[4];
    u32 unk48;
    u8 pad4C[0x88 - 0x4C];
    s32 unk88;
    s32 unk8C;
    u8 pad90[8];
    s32 unk98;
    u32 unk9C;
    u32 unkA0;
    u32 unkA4;
    u8 padA8[8];
    s32 unkB0;
    s32 unkB4;
    u8 padB8[4];
    s32 unkBC;
    s32 unkC0;
    s32 unkC4;
} StreamState;

void fn_8028ED28(f32 *, f32 *);
void fn_8028F484(f32 *, f32 *);

void fn_80275C64(void);
u32 fn_80274D04(u32 arg0);

typedef struct BitStream {
    u32 *ptr;
    u32 unk4;
    u32 bits;
    s32 count;
} BitStream;

typedef struct BitBuf {
    u32 *ptr;
    u32 unk4;
    u32 buf;
    u32 bits;
} BitBuf;

extern u32 lbl_802AB0C0[];

static inline u32 BitBuf_Read(BitBuf *bs, u32 n) {
    u32 bits = bs->bits;
    u32 v;
    if (bits >= n) {
        u32 buf = bs->buf;
        bs->bits = bits - n;
        v = buf & (0xFFFFFFFF >> (32 - n));
        bs->buf = buf >> n;
    } else {
        u32 *p = bs->ptr;
        u32 buf = bs->buf;
        u32 w = *p;
        bs->bits = bits - (n - 32);
        bs->ptr = p + 1;
        bs->buf = w >> (n - bits);
        v = (buf | (w << bits)) & (0xFFFFFFFF >> (32 - n));
    }
    return v;
}

static inline void BitBuf_Write(BitBuf *bs, u32 v, u32 n) {
    u32 bits = bs->bits;
    u32 buf;
    v &= lbl_802AB0C0[n];
    buf = bs->buf | (v << bits);
    bits += n;
    bs->buf = buf;
    bs->bits = bits;
    if (bits > 31) {
        *bs->ptr = buf;
        bs->ptr++;
        bs->bits -= 32;
        if (bs->bits != 0) {
            bs->buf = v >> (n - bs->bits);
        } else {
            bs->buf = 0;
        }
    }
}

typedef struct {
    s32 unk0;
    f32 unk4;
    u32 unk8;
    u32 unkC;
    s32 unk10;
    s16 *unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s16 *unk2C;
    s32 unk30;
} Fn80283750Struct;

void fn_8028C7F0(f32 *a);
void fn_8028C998(f32 *a);
void fn_8028F720(f32 *a);
s32 fn_8027AA78(u8 *b, s32 on);
void fn_80278F54(u8 *b);
void *memcpy_np() asm("memcpy");
static inline u32 cntlzw_inline(u32 x) {
    u32 r;
    asm("cntlzw %0,%1" : "=r"(r) : "r"(x));
    return r;
}

void fn_80275F98();
void fn_80276058(void *);
void fn_8027564C(void *, int);
void fn_802756B8(void *, int, int, int);
void fn_80275FC0(void *);
void fn_800C9A0C(s32, int);
s64 OSGetTime(void);
extern s64 lbl_802F3840;
extern u8 lbl_802FFC60[];
extern u8 *lbl_80300860[6];
void* OSGetArenaLo(void);
void OSSetArenaLo(void*);
void fn_800B48F4(void *, u32);
void fn_80274970(s32);
void fn_80274990(s32 arg0, u32 arg1);
void fn_802749AC(s32 arg0, s32 arg1);
u32 fn_80274D04(u32 arg0);

static inline void convert_ia8_pairs(s32 n, u32 *dst, u32 *src) {
    s32 i = n - 1;
    if (n) do {
        u32 v = *src++;
        *dst++ = (v & 0xFF000000) + ((v >> 8) & 0xFF00) + 0x800080;
        *dst++ = ((v << 16) & 0xFF000000) + ((v & 0xFF) << 8) + 0x800080;
    } while (i-- != 0);
}

extern s32 lbl_8035B85C;
extern s32 lbl_8035B848;
extern s32 lbl_8035B854;
extern s32 lbl_8035B850;
extern s32 lbl_80359F08;
void fn_80273EF4(u32);
void fn_80274704();
void fn_802745BC(void);
void fn_80274664(void);
void fn_80273EC4(void);
int OSDisableInterrupts();
int OSRestoreInterrupts();

typedef struct OSContext {
    u8 data[0x2C8];
} OSContext;

typedef struct StreamARQReq {
    void *next;
    void *owner;
    u8 pad[0x18];
} StreamARQReq;

typedef struct StreamBuf {
    u8 pad0[0x84];
    StreamARQReq req;
    StreamARQReq req2;
    u8 pad1[0xCC - 0xC4];
    s32 unkCC;
    u32 unkD0;
    u32 unkD4;
    u32 unkD8;
    u32 unkDC;
    u32 unkE0;
    u32 unkE4;
    u32 unkE8;
    u32 unkEC;
    u32 unkF0;
    u32 unkF4;
} StreamBuf;

void DCFlushRangeNoSync(void *, u32);
void fn_800B2EA8(void);
void fn_800C6D6C(void *req, u32 owner, u32 type, u32 prio, u32 src, u32 dst, u32 len, void *cb);

#include "musyx_priv.h"
extern s32 lbl_8035B854;

#define BINK_MUL(hi, lo, a, b) __asm__("mulhwu %1,%2,%3\n\tmullw %0,%2,%3" : "=&r"(lo), "=&r"(hi) : "r"(a), "r"(b))
#define BINK_SUB(hi, lo, th, tl) __asm__("subfc %1,%3,%1\n\tsubfe %0,%2,%0" : "+r"(hi), "+r"(lo) : "r"(th), "r"(tl))


typedef struct wCN { s32 a; struct wCN *next; u32 key; } wCN;

s32 OSEnableInterrupts(void);
s32 wC_OSRestoreInterrupts(s32) asm("OSRestoreInterrupts");

extern s32 wCa_802F3894[] asm("lbl_802F3894");

extern s32 wCa_802F386C[] asm("lbl_802F386C");

extern void *wCa_802F385C[];

extern s32 wCa_802F7298[] asm("lbl_802F7298");
extern s32 wCa_802F729C[] asm("lbl_802F729C");

extern s32 wCa_80301D20[] asm("lbl_80301D20");

extern u8 lbl_802AB2C0[];

void fn_8028FDB4(void *, void *, void *, void *);

extern void *wCa_802F385C[] asm("lbl_802F385C");

s32 wC_OSRestoreInterrupts_80283B8C(s32) asm("OSRestoreInterrupts");

void *wC_memcpy_8027AC20() asm("memcpy");

typedef struct { u16 a; u16 b; } wCPair_8027F794;

typedef struct { u16 a; u16 b; } wCPair_8027F894;

typedef struct { u16 a; u16 b; } wCPair_80280484;

typedef struct { u16 a; u16 b; } wCPair_802808BC;

typedef struct { u16 a; u16 b; } wCPair_80280A50;

typedef struct { u16 a; u16 b; } wCPair_80280BD8;

typedef struct { u16 a; u16 b; } wCPair_8027F988;

s32 wC_OSRestoreInterrupts_80283F38(s32) asm("OSRestoreInterrupts");

s32 wC_OSRestoreInterrupts_80283C94(s32) asm("OSRestoreInterrupts");

f32 powf(f32, f32);

typedef struct { u16 a; u16 b; } wCPair_8027F8F8;

void wC_80284194_846E4(void *, void *, void *, void *) asm("fn_80284194");

typedef struct { u16 a; u16 b; } wCPair_802818C4;

s32 wC_OSRestoreInterrupts_80283DFC(s32) asm("OSRestoreInterrupts");

extern void *wCa_802F384C_75C64[] asm("lbl_802F384C");
void fn_800C7240(void *);
void *wC_memset_75C64() asm("memset");

void wC_fn_80275C64(u8 *p) asm("fn_80275C64");

typedef struct { u8 pad[0xF8]; u32 bus; } wCOSG;
s32 wC_OSRestoreInterrupts_80283D44(s32) asm("OSRestoreInterrupts");
void fn_800B3E7C(void *, s64, s64, void *);

extern u32 wCa_80301D20_87810[] asm("lbl_80301D20");
extern u32 wCa_80301D24_87810[] asm("lbl_80301D24");
extern u8 ***wCa_80301D28_87810[] asm("lbl_80301D28");
extern u32 *wCa_80301D2C_87810[] asm("lbl_80301D2C");

u8 *wC_fn_80287810(u32 size) asm("fn_80287810");

extern void *wCa_803590CC_8027B8B4[] asm("lbl_803590CC");

extern void *wCa_803590D0_8027B968[] asm("lbl_803590D0");

extern void *wCa_802F3850_769F0[] asm("lbl_802F3850");
extern s32 wCa_802F3854_769F0[] asm("lbl_802F3854");
extern s32 wCa_802F3858_769F0[] asm("lbl_802F3858");

extern void *wCa_802F7298_B6D4[] asm("lbl_802F7298");
extern u32 wCa_802F729C_B6D4[] asm("lbl_802F729C");
extern s32 wCa_80359530_B6D4[] asm("lbl_80359530");
u8 *fn_800B4340(s32, u32);


s32 wC_fn_80276488(u8 *p, u32 n) asm("fn_80276488");

typedef struct { u16 a; u16 b; } wCPair_8095C;

typedef struct { u16 a; u16 b; } wCPair_81958;

extern void *wCa_802F3848_758B4[] asm("lbl_802F3848");
extern void *wCa_802F384C_758B4[] asm("lbl_802F384C");
void *wC_memset_758B4() asm("memset");
void *fn_800C72C0(s32, void *, void *);
void wC_802756B8_758B4(void *, int, int) asm("fn_802756B8");
void fn_800C9948(void *, s32);
void fn_800C9D28(void *, void *);
void fn_800C9DC0(void *, f32);
void fn_800C9C84(void *, void *);

void fn_8028BA78(s32 nw, s32 *ip, f32 *w);

f32 wC_atanf_BA78(f32) asm("atanf");
f32 wC_cosf_BA78(f32) asm("cosf");
f32 wC_sinf_BA78(f32) asm("sinf");

f32 wC_atanf_BCC0(f32) asm("atanf");
f32 wC_cosf_BCC0(f32) asm("cosf");
f32 wC_sinf_BCC0(f32) asm("sinf");

extern s32 wCa_802F3860_7925C[] asm("lbl_802F3860");
s32 wC_fn_80278920_7925C(u8 *) asm("fn_80278920");

extern s32 wCa_802F385C_79498[] asm("lbl_802F385C");
extern s32 wCa_802F3860_79498[] asm("lbl_802F3860");
s32 wC_80283C38_79498(s32, u8 *, s32, u8 *, s32) asm("fn_80283C38");
void *wC_memset_79498() asm("memset");

extern s32 wCa_802F385C_796A8[] asm("lbl_802F385C");

typedef struct { u8 b[60]; } wCDVD_B58C;
extern char wCf_8027AD10_B58C[] asm("fn_8027AD10");
extern char wCf_8027B1BC_B58C[] asm("fn_8027B1BC");
extern char wCf_8027B4CC_B58C[] asm("fn_8027B4CC");
extern char wCf_8027B4D8_B58C[] asm("fn_8027B4D8");
extern char wCf_8027B0D4_B58C[] asm("fn_8027B0D4");
extern char wCf_8027B54C_B58C[] asm("fn_8027B54C");
void *wC_memset_B58C() asm("memset");
s32 fn_800BD044(void *);
s32 fn_800BD338(s32, void *);

extern s32 wCa_802F385C_78F54[] asm("lbl_802F385C");
extern s32 wCa_802F3860_78F54[] asm("lbl_802F3860");
s32 wC_8027AA78_78F54(u8 *, s32) asm("fn_8027AA78");
void wC_80283EFC_78F54(s32, void *, s32, void *) asm("fn_80283EFC");

void *wC_memset_83AA4() asm("memset");

void wC_8027964C_79AFC(u8 *, u32) asm("fn_8027964C");




s32 wC_fn_802760B4(u8 *p) asm("fn_802760B4");

typedef struct { u8 pad[184]; u32 x184; u32 a188[2]; u32 a196[2]; } wCB_78234;
extern s32 wCa_802F385C_78234[] asm("lbl_802F385C");
u32 wC_802752DC_78234(u32, u32, u32) asm("fn_802752DC");
void wC_8027D050_78234(u32) asm("fn_8027D050");
void wC_80276E38_78234(u8 *) asm("fn_80276E38");
s32 wC_802753F0_78234(void) asm("fn_802753F0");
u32 wC_80275394_78234(u32, u32, u32) asm("fn_80275394");
s32 wC_80283DFC_78234(s32, void *) asm("fn_80283DFC");
void wC_80283F38_78234(s32, void *) asm("fn_80283F38");
void wC_8028405C_78234(void) asm("fn_8028405C");
u32 wC_strlen_78234(const char *) asm("strlen");
void wC_8027F738_78234(u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32) asm("fn_8027F738");
void wC_8027E5FC_78234(u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32) asm("fn_8027E5FC");
void wC_80281DAC_78234(u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32) asm("fn_80281DAC");
void wC_80280860_78234(u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32) asm("fn_80280860");
void wC_8028290C_78234(u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32) asm("fn_8028290C");
void wC_80282A30_78234(u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32) asm("fn_80282A30");
void wC_802829C4_78234(u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32) asm("fn_802829C4");
void wC_80282B08_78234(u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32) asm("fn_80282B08");
void wC_80282A9C_78234(u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32) asm("fn_80282A9C");
void wC_80282B74_78234(u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32) asm("fn_80282B74");



extern u8 wCa_80301B20_8290C[] asm("lbl_80301B20");
void wC_8027BFB8_8290C(u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32, void *) asm("fn_8027BFB8");

u8 *wC_80285E24_87540(u8 *, u8 *, u32, u32, u32, u8 *, u32, u32, u32, u32, u32) asm("fn_80285E24");

extern s32 wCa_802F3860_7AA78[] asm("lbl_802F3860");
void wC_80283E90_7AA78(s32, void *) asm("fn_80283E90");
void wC_80283F38_7AA78(s32, void *) asm("fn_80283F38");
u32 wC_80276AB8_7AA78(u8 *) asm("fn_80276AB8");




typedef struct { u32 a, b; } P8_80276930;
extern P8_80276930 lbl_802F3848_p[] asm("lbl_802F3848");

extern f64 lbl_80301C18[];

s32 fn_80283B8C_wD(s32 a, s32 b, s32 c) asm("fn_80283B8C");

extern u32 lbl_802F3870_a[] asm("lbl_802F3870");
extern u32 lbl_802F3874[];

typedef struct { u16 a; u16 b; } wDPair_f7fc;

typedef struct { u16 a; u16 b; } wDPair_c90;

typedef struct { u16 a; u16 b; } wDPair_fa08;

typedef struct { u16 a; u16 b; } wDPair_e4e0;

typedef struct { u16 a; u16 b; } wDPair_aec;

typedef struct { u32 w[0x38c / 4]; } wDBink_77218;
typedef struct { u32 w[11]; } wDBinkHdr_77218;
typedef s32 (*wDIOFn_77218)();
typedef s32 (*wDOpen_77218)(u8 *, void *, u32);
typedef s32 (*wDRead_77218)(u8 *, s32, void *, u32);
typedef u32 (*wDSize_77218)(u8 *, u32);
typedef void (*wDSetBuf_77218)(u8 *, void *, u32, u32, s32);
typedef s32 (*wDReadAt_77218)(u8 *, u32, u32, void *, u32);
typedef s32 (*wDOne_77218)(u8 *);
typedef s32 (*wDSnd_77218)(u8 *, u32, u32, u32, u32, u8 *);

extern s32 wD7218_tracknum[] asm("lbl_802F3870");
extern s32 wD7218_tracks[] asm("lbl_802F3874");
extern wDOpen_77218 wD7218_openover[] asm("lbl_802F3894");
extern char wD7218_err[] asm("lbl_80357FC0");
extern s32 wD7218_fpsnum[] asm("lbl_802F3864");
extern s32 wD7218_fpsden[] asm("lbl_803580C0");
extern s32 wD7218_iosize[] asm("lbl_802F3868");
extern s32 wD7218_simulate[] asm("lbl_802F386C");
extern wDSnd_77218 wD7218_sndopen[] asm("lbl_802F3854");
extern s32 wD7218_sndcount[] asm("lbl_802F3858");
extern s32 wD7218_timer[] asm("lbl_802F3860");
extern char wD7218_s0[] asm("lbl_802AAAE0");
extern char wD7218_s1[] asm("lbl_802AAAF4");
extern char wD7218_s2[] asm("lbl_802AAB08");
extern char wD7218_s3[] asm("lbl_802AAB3C");

void *wD7218_memset() asm("memset");
void *wD7218_memcpy() asm("memcpy");
s32 wD7218_now(void) asm("fn_802753F0");
void wD7218_seterr(char *) asm("fn_802769B8");
void wD7218_plan(void *slot, u32 size) asm("fn_802876F8");
u8 *wD7218_alloc(u8 *b, u32 size) asm("fn_80276970");
void wD7218_free(void *p) asm("fn_8027B790");
void wD7218_plan2(void *slot, u32 n) asm("fn_80285D24");
s32 wD7218_frames(u32 n, u32 idx, u32 x, u8 *a, s32 *b) asm("fn_80277020");
u32 wD7218_muldiv(u32 a, u32 b, u32 c) asm("fn_802752DC");
void wD7218_goto(u8 *b, s32 f) asm("fn_80276E80");
s32 wD7218_sndfmt(u32 rate, u32 chans, u32 flag) asm("fn_802833CC");
s32 wD7218_timeropen(s32 n) asm("fn_80283AA4");
void wD7218_timerinit(s32 t) asm("fn_80283D44");
void wD7218_timeradd(s32 t, void *p, void *a, void *c) asm("fn_80283B20");
s32 wD7218_defopen(u8 *io, void *src, u32 flags) asm("fn_8027B58C");
void wD7218_802771B8(void) asm("fn_802771B8");
void wD7218_802771D4(void) asm("fn_802771D4");
void wD7218_8027716C(void) asm("fn_8027716C");
void wD7218_80277114(void) asm("fn_80277114");
void wD7218_80277140(void) asm("fn_80277140");
void wD7218_80277198(void) asm("fn_80277198");


/* prototypes of all Bink functions */
u32 fn_802752DC(u32 a, u32 b, u32 d);
u32 fn_80275394(u32 a, u32 b, u32 s);
void fn_802753B4(u32 *dst, u16 val, u32 count);
s32 fn_802753F0(void);
void fn_80275498(u32 *out);
u32 fn_802754CC(u32 *out);
void fn_8027550C(u32 *dst);
void fn_8027552C(u64 *p);
u32 fn_80275578(u32 hi, u32 lo, u32 d);
void fn_8027562C(u32 *dst);
void fn_8027564C(void *arg0, int arg1);
s32 fn_8027569C(void *arg0);
void fn_802756B8(void *arg0, int arg1, int arg2, int arg3);
void fn_802757D0(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80275844(void *arg0);
s32 fn_802758B4(void *arg0, s32 a, s32 b, s32 c);
void fn_80275D00(u32 *src, u16 *left, u16 *right, u32 count);
void fn_80275D6C(s16 *src, u8 *left, u8 *right, u32 count);
s32 fn_80275DD8(void *arg0, u32 size, void *cb);
void fn_80275F08(void *arg0);
void fn_80275F18(void *arg0);
void fn_80275F98();
void fn_80275FC0(void *arg0);
void fn_80276058(void *arg0);
s32 fn_802762D8(u8 *arg0, s32 *arg1, s32 *arg2);
s32 fn_802762FC(u8 *arg0, u32 arg1);
s32 fn_802763BC(u8 *arg0, u32 arg1);
void fn_80276554(u8 *p, s32 v);
void fn_802765E8(u8 *p, s32 pan);
s32 fn_802766C8(u8 *arg0, s32 arg1);
s32 fn_80276758(u8 *arg0, s32 arg1);
void fn_802767C0(void);
s32 fn_802767E0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5);
void *fn_80276930(u32 *arg0);
u8 *fn_80276970(u8 *s, u32 size);
void fn_802769B8(s32 arg0);
u8 *fn_802769E4(void);
s32 fn_802769F0(void *fn, void *arg);
void fn_80276A90(s8 *dst, s16 *src, u32 len);
u32 fn_80276AB8(u8 *p);
void fn_80276E38(u8* arg0);
void fn_80276E80(u8 *arg0, s32 arg1);
void fn_80276FA0(s32 arg0, s32 arg1);
void fn_80276FB4(s32 arg0);
void fn_80276FC0(s32 v);
void fn_80276FCC(s32 v);
void fn_80276FD8(u32 count, u32 *src);
u32 fn_80277020(s32 n, u32 *arr, s32 k, s32 *outIdx, s32 *outFlag);
void fn_80277114(u8 *p);
void fn_80277140(u8 *p);
void fn_8027716C(u8 *p);
void fn_80277198(void);
s32 fn_802771B8(s32 *p, s32 b);
void fn_802771D4(u8* arg0, s32 arg1);
u8 *fn_80277218(void *name, u32 flags);
s32 fn_802781F4(u8 *b, u8 *dest, s32 pitch, u32 height, u32 a7, u32 a8, u32 flags);
s32 fn_80278234(u8 *b, u8 *dest, s32 pitch, u32 height, u32 a7, u32 a8, u32 sx, u32 sy, u32 w, u32 h, u32 flags);
void fn_80278F28(void *arg0, s32 arg1);
void fn_80278F54(u8 *b);
u32 fn_80279100(u8 *p, u32 pos, u32 flags);
void fn_8027925C(u8 *b, u32 frame, u32 flags);
void fn_80279498(u8 *b);
void fn_8027964C(u8 *arg0, u32 arg1);
s32 fn_802796A8(u8 *b);
s32 fn_80279868(u8 *p, s32 v);
void fn_80279948(u8 *arg0, s32 *arg1);
void fn_80279AFC(u8 *b, u32 *o, u32 frames);
void fn_8027A4BC(u8 *p);
s32 fn_8027A4E8(u8 *arg0, s32 arg1);
void fn_8027A538(u8 *b, s32 id, s32 a0);
void fn_8027A5A8(u8 *b, s32 id, s32 a0, s32 a1);
void fn_8027A620(u8 *b, s32 id, s32 a0, s32 a1, s32 a2);
void fn_8027A6A0(u8 *b, s32 id, s32 a0);
u8 *fn_8027A710(void);
s32 fn_8027A71C(u8 *p, s32 i);
s32 fn_8027A73C(u8 *p, s32 i);
u32 fn_8027A75C(u8 *p, s32 i);
void fn_8027A8BC(u8 *p);
s32 fn_8027A908(void *arg0, s8 *arg1);
s32 fn_8027AA64(u8 *p, s32 v);
s32 fn_8027AA78(u8 *b, s32 on);
void fn_8027ABEC(s32 *p, s32 n);
s32 fn_8027AC20(void *arg0, u32 arg1, u8 *arg2, u32 arg3);
void fn_8027ADB0(u8 *p, s32 a, s32 b);
void fn_8027AE40(s32 arg0, void *arg1);
void fn_8027AFC0(void *arg0);
s32 fn_8027B0D4(void *arg0);
void fn_8027B168(void *arg0);
u32 fn_8027B4CC(void *arg0, void *arg1);
void fn_8027B54C(void *arg0);
s32 fn_8027B58C(u8 *io, void *src, u32 flags);
void fn_8027B6C0(s32 a, s32 b);
u8 *fn_8027B6D4(u32 size);
void fn_8027B790(void *arg0);
void fn_8027B7EC(u32 size);
void fn_8027B86C(void);
void fn_8027B8B4(void *arg0);
void fn_8027B968(void *arg0);
void fn_8027D75C(s32 unused, s32 n);
s32 fn_8027D7BC(s32 count,s32 offset);
void fn_8027D844(s32 unused,s32 count);
s32 fn_8027D8A8(s32 count,s32 offset);
void fn_8027D938(s32 unused,s32 count);
s32 fn_8027D9B4(s32 count,s32 offset);
void fn_8027DA74(s32 x, s32 count);
s32 fn_8027DB94(s32 count, s32 x);
void fn_8027DD10(s32 x, s32 count);
s32 fn_8027DE34(s32 count, s32 x);
void fn_8027DFB8(s32 x, s32 count);
s32 fn_8027E0F4(s32 count, s32 x);
void fn_8027E2A8(s32 unused,s32 count);
s32 fn_8027E300(s32 count, s32 offset);
void fn_8027E378(s32 x, s32 count);
s32 fn_8027E490(s32 count, s32 x);
void fn_8027E5FC(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6,s32 a7,s32 a8,s32 a9,s32 a10,s32 a11);
void fn_8027E658(s32 arg0, s32 n);
s32 fn_8027E6D0(s32 n, s32 arg1);
void fn_8027E788(s32 arg0, s32 n);
s32 fn_8027E804(s32 n, s32 arg1);
void fn_8027E8C4(s32 arg0, s32 n);
s32 fn_8027E958(s32 n, s32 m);
void fn_8027EA48(s32 x, s32 count);
s32 fn_8027EB80(s32 n, s32 x);
void fn_8027ED2C(s32 x, s32 count);
s32 fn_8027EE68(s32 n, s32 x);
void fn_8027F01C(s32 x, s32 count);
s32 fn_8027F170(s32 n, s32 x);
void fn_8027F354(s32 unused, s32 count);
s32 fn_8027F3C4(s32 n, s32 m);
void fn_8027F46C(s32 x, s32 count);
s32 fn_8027F59C(s32 count, s32 x);
void fn_8027F738(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6,s32 a7,s32 a8,s32 a9,s32 a10,s32 a11,s32 a12);
void fn_8027F794(s32 arg0, s32 n);
s32 fn_8027F7FC(s32 n, s32 m);
void fn_8027F894(s32 arg0, s32 n);
s32 fn_8027F8F8(s32 n, s32 m);
void fn_8027F988(s32 arg0, s32 n);
s32 fn_8027FA08(s32 n, s32 m);
void fn_8027FAD0(s32 x, s32 count);
s32 fn_8027FC28(s32 count, s32 x);
void fn_8027FDF8(s32 x, s32 count);
s32 fn_8027FF4C(s32 count, s32 x);
void fn_80280114(s32 x, s32 count);
s32 fn_80280284(s32 count, s32 x);
void fn_80280484(s32 unused, s32 count);
s32 fn_802804E0(s32 n, s32 m);
void fn_80280560(s32 x, s32 count);
s32 fn_802806A8(s32 count, s32 x);
void fn_80280860(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6,s32 a7,s32 a8,s32 a9,s32 a10,s32 a11);
void fn_802808BC(s32 unused, s32 count);
s32 fn_8028095C(s32 n, s32 m);
void fn_80280A50(s32 unused, s32 count);
s32 fn_80280AEC(s32 n, s32 m);
void fn_80280BD8(s32 unused, s32 count);
s32 fn_80280C90(s32 n, s32 m);
void fn_80280DB4(s32 x, s32 count);
s32 fn_80280F34(s32 count, s32 x);
void fn_80281150(s32 x, s32 count);
s32 fn_802812CC(s32 count, s32 x);
void fn_802814E0(s32 x, s32 count);
s32 fn_80281678(s32 count, s32 x);
void fn_802818C4(s32 unused, s32 count);
s32 fn_80281958(s32 n, s32 m);
void fn_80281A34(s32 x, s32 count);
s32 fn_80281BA8(s32 count, s32 x);
void fn_80281DAC(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6,s32 a7,s32 a8,s32 a9,s32 a10,s32 a11,s32 a12);
void fn_80281E08(s32 arg0, s32 count);
void fn_80281F90(s32 arg0, s32 count);
s32 fn_80282000(s32 count, s32 base);
void fn_802820C4(s32 arg0, s32 n);
s32 fn_80282124(s32 count, s32 base);
void fn_802821C8(s32 unused, s32 n);
s32 fn_80282284(s32 count, s32 arg1);
void fn_802823C4(s32 unused, s32 n);
s32 fn_80282464(register s32 count, s32 base);
void fn_8028256C(s32 arg0, s32 count);
s32 fn_802825F4(s32 count, s32 base);
void fn_802826DC(s32 arg0, s32 n);
s32 fn_80282730(s32 arg0, s32 arg1);
void fn_802827BC(s32 arg0, s32 count);
s32 fn_80282838(s32 count, s32 base);
void fn_8028290C(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7, u32 a8, u32 a9, u32 a10, u32 a11);
void fn_802829C4(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6,s32 a7,s32 a8,s32 a9,s32 a10,s32 a11,s32 a12,s32 a13);
void fn_80282A30(s32 a,s32 b,s32 c,s32 d,s32 e,s32 f,s32 g,s32 h,s32 i,s32 j,s32 k,s32 l,s32 m,s32 n,s32 o);
void fn_80282A9C(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6,s32 a7,s32 a8,s32 a9,s32 a10,s32 a11,s32 a12,s32 a13);
void fn_80282B08(s32 a,s32 b,s32 c,s32 d,s32 e,s32 f,s32 g,s32 h,s32 i,s32 j,s32 k,s32 l,s32 m,s32 n,s32 o);
void fn_80282B74(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,s32 a6,s32 a7,s32 a8,s32 a9,s32 a10,s32 a11,s32 a12,s32 a13);
f32 fn_80282BE0(s32 arg0);
void fn_80282C34(s16 *dst, f32 *src, f32 scale, s32 count);
void fn_80282C94(s16 *dst, f32 *src, f32 scale, s32 count);
void fn_80283750(Fn80283750Struct *arg0, s16 **arg1, s32 *arg2, s32 arg3, s32 *arg4);
void fn_8028389C(void *p);
s32 fn_802838BC(s32 arg0, s32 arg1);
void fn_8028391C(wCN **head, wCN *n);
void fn_80283984(void *arg0);
void fn_80283A54(u8 *a);
void *fn_80283AA4(s32 n);
void fn_80283B20(s32 *arg0, s32 *arg1, s32 arg2, s32 arg3);
s32 fn_80283B8C(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80283C38(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 fn_80283C8C(void *arg0);
s32 fn_80283C94(void *q);
void fn_80283D04(void *arg0);
void fn_80283D44(void *q);
s32 fn_80283DFC(s32 a, void *q);
void fn_80283E90(s32 a, void *b);
void fn_80283EFC(void *a, void *b, void *c, void *d);
void fn_80283F38(s32 a, void *q);
void fn_80283FB0(void *a, void *b);
void fn_80283FE4(u8 *arg0);
void fn_80284028(void *a, void *b);
void fn_8028405C(void);
s32 fn_80284060(void);
void fn_80284068(int a, int *p, int c, unsigned int d, int e, int f, int g);
void fn_802840C0(BitStream *bs, u8 *dst, u8 *a, u8 *b, s32 n);
void fn_802846B0(s32 arg0, s32 arg1);
void fn_802846E4(u8 *a, void *b, u8 *c);
u32 fn_80285CE0(u32 arg0, u32 arg1, u32 arg2, u32 arg3);
void fn_80285D24(u32 *arg0, u32 arg1);
void fn_80287540(u8 *y0, u8 *y1, u8 *a0, u8 *a1, u32 p7, u32 w, u32 h, u32 pitch, u32 ph, u8 *data, u32 a11, u32 a12, u32 flags, u32 flags0);
void fn_802876F8(u8 *arg0, u32 size);
s32 fn_80287804(void);
void fn_80287EC0(s32 count);
void fn_80288990(s32 count);
void fn_8028A7A0(void);
void fn_8028A7A4(void);
void fn_8028A7A8(void);
void fn_8028A7AC(void);
void fn_8028A7B0(void);
void fn_8028A7B4(void);
void fn_8028A7B8(void);
void fn_8028A7BC(void);
u8 *fn_8028A7C0(u8 *addr, s32 pitch);
void fn_8028AEAC(s32 n);
void fn_8028AFB8(s32 n);
void fn_8028B134(s32 count, u32 *dst, u32 *src, u32 *p3, u32 *p4);
void fn_8028B264(s32 n, u32* dst, u32* y, u32* u, u32* v);
void fn_8028B428(s32 n, u32 *dst, u32 *src);
void fn_8028B480(s32 n, u32 *dst, u32 *src);
void fn_8028B510(BitBuf *dst, BitBuf *src, u32 n);
void fn_8028B6F4(s32 n, s32 isgn, f32 *a, s32 *ip, f32 *w);
void fn_8028BA78(s32 nw, s32 *ip, f32 *w);
void fn_8028BCC0(s32 nc, void *ip_, f32 *c);
void fn_8028BDF4(s32 n, f32 *a, s32 *ip, s32 nw, f32 *w);
void fn_8028BF5C(s32 n, f32 *a, s32 *ip, s32 nw, f32 *w);
void fn_8028C0C4(s32 n, s32 *ip, f32 *a);
void fn_8028C390(int n, int *ip, float *a);
void fn_8028C71C(float *a);
void fn_8028C7F0(f32 *a);
void fn_8028C954(f32 *m);
void fn_8028C998(f32 *a);
void fn_8028CA0C(s32 n, f32 *a, f32 *w);
void fn_8028D164(s32 n, f32 *a, f32 *w);
void fn_8028D8C8(s32 n, f32 *a, s32 nw, f32 *w);
void fn_8028D990(s32 n, f32 *a, s32 nw, f32 *w);
void fn_8028DA54(s32 n, f32 *a, s32 nw, f32 *w);
void fn_8028DC94(s32 n, f32 *a, s32 nw, f32 *w);
void fn_8028DEFC(s32 n, f32 *a, f32 *w);
void fn_8028E290(s32 n, f32 *a, f32 *w);
void fn_8028E6FC(s32 n, f32 *a, s32 nw, f32 *w);
void fn_8028E7B0(s32 n, f32 *a, s32 nw, f32 *w);
void fn_8028E868(f32 *a, f32 *w);
void fn_8028ED28(f32 *a, f32 *w);
void fn_8028F2AC(f32 *a, f32 *w);
void fn_8028F484(f32 *a, f32 *w);
void fn_8028F69C(f32 *a);
void fn_8028F720(f32 *a);
void fn_8028F7A4(f32 *a);
void fn_8028F7D8(s32 n, f32 *a, s32 nc, f32 *c);
void fn_8028F890(s32 n, f32 *a, s32 nc, f32 *c);
void fn_8028F948(s32 n, f32 *a, s32 nc, f32 *c);
void fn_80290190(s32 n, f32 *a, s32 nc, s32 idx);
void fn_802901C0(void *a, void *b, void *c, s32 d);
void fn_802901F0(void *a, void *b, void *c, s32 d);
void fn_8029086C(s32* data, s8* in);
void fn_80293964(u16 *dst);

#endif
