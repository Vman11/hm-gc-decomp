// fn_801C6674: NonMatching draft (DIFF 8, SDIFF 0): only the case-130 loop counter lands in r30 (target r26, reuses the new[] temp reg).
// Unit Matching would also need extab_padding for the DELETEPOINTERCOND entry.
#include "common.h"

extern "C" {

#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct C80112AAC { u8 d[20]; C80112AAC(); ~C80112AAC(); };
struct Rd { u8 pad_[292]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual int next(); };
struct Res { u8 pad_[16]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual u8 *get(int); };
extern u32 lbl_8035AAB4;
extern u32 lbl_8035AFCC;
void fn_800FB064(Rd *, u8 *);
Res *fn_8010B990(u32, u8 *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(u32);
void fn_800F7E98(void);
u32 fn_8010CF00(u8 *, u32);
void fn_80112A1C(C80112AAC *, u32);
void fn_8010ED74(void *);
void fn_8010EBE0(void *, Res *);
void fn_8010EF84(void *);
void fn_8010EF50(void *, Res *, void *, int);
void fn_801C068C(u8 *, u32, void *, u8 *);
int fn_800FADA8(Rd *);
f32 fn_800FB2E0(Rd *);
u32 fn_800FB33C(Rd *);
void fn_801DCA84(u8 *, int, u32, Rd *);
void fn_801C6674(u8 *o, int id, u32 ctx, Rd *rd) {
    u8 b16[8];
    u8 b8[8];
    u32 n;
    switch (id) {
    case 130: {
        u32 i;
        fn_800FB064(rd, b16);
        fn_800FB064(rd, b8);
        F(o,0x164,Res*) = fn_8010B990(lbl_8035AAB4, b16);
        n = F(F(F(o,0x164,Res*)->get(0),4,u8*),32,u32);
        if (!lbl_8035AFCC) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AFCC);
        F(o,0x1a4,u32*) = new u32[n];
        fn_800F7E98();
        if (!F(o,0x1a4,u32*)) fn_800604C4(-4, 0, 0, 0);
        if (!lbl_8035AFCC) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AFCC);
        F(o,0x1a8,C80112AAC*) = new C80112AAC[(int)n];
        fn_800F7E98();
        if (!F(o,0x1a8,C80112AAC*)) fn_800604C4(-4, 0, 0, 0);
        for (i = 0; i < n; i++) fn_80112A1C(&F(o,0x1a8,C80112AAC*)[i], fn_8010CF00(F(o,0x164,Res*)->get(0), i));
        fn_8010ED74(o + 408);
        fn_8010EBE0(o + 408, F(o,0x164,Res*));
        fn_8010EF84(o + 384);
        fn_8010EF50(o + 384, F(o,0x164,Res*), o + 408, 0);
        F(o,0x1b4,u32) = F(F(o,0x164,u8*),32,u32);
        break;
    }
    case 129:
        fn_800FB064(rd, b16);
        fn_801C068C(o, ctx, o + 360, b16);
        break;
    case 138:
        fn_800FB064(rd, b16);
        fn_801C068C(o, ctx, o + 364, b16);
        break;
    case 127:
        fn_800FB064(rd, b16);
        fn_801C068C(o, ctx, o + 376, b16);
        break;
    case 131: {
        u32 i;
        F(o,0x1ac,int) = fn_800FADA8(rd);
        if (!lbl_8035AFCC) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AFCC);
        F(o,0x1c8,f32*) = new f32[F(o,0x1ac,int)];
        fn_800F7E98();
        if (!F(o,0x1c8,f32*)) fn_800604C4(-4, 0, 0, 0);
        for (i = 0; i < F(o,0x1ac,u32); i++) {
            rd->next();
            F(o,0x1c8,f32*)[i] = fn_800FB2E0(rd);
        }
        rd->next();
        break;
    }
    case 132:
        F(o,0x1cc,f32) = fn_800FB2E0(rd);
        break;
    case 88: {
        int n = fn_800FADA8(rd);
        int i;
        for (i = 0; i < n; i++) {
            int k = rd->next();
            fn_800FB064(rd, b16);
            switch (k) {
            case 63:
                fn_801C068C(o, ctx, o + 368, b16);
                F(o,0x234,u8) |= 1;
                break;
            case 64:
                fn_801C068C(o, ctx, o + 368, b16);
                F(o,0x234,u8) |= 2;
                break;
            case 65:
                fn_801C068C(o, ctx, o + 372, b16);
                F(o,0x234,u8) |= 4;
                break;
            case 66:
                fn_801C068C(o, ctx, o + 372, b16);
                F(o,0x234,u8) |= 8;
                break;
            }
        }
        rd->next();
        break;
    }
    case 133:
        F(o,0x1e8,u32) = fn_800FB33C(rd);
        break;
    case 134: {
        u32 i;
        F(o,0x1f0,int) = fn_800FADA8(rd);
        if (!lbl_8035AFCC) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AFCC);
        F(o,0x17c,u32*) = new u32[F(o,0x1f0,int)];
        fn_800F7E98();
        if (!F(o,0x17c,u32*)) fn_800604C4(-4, 0, 0, 0);
        for (i = 0; i < F(o,0x1f0,u32); i++) {
            rd->next();
            fn_800FB064(rd, b16);
            fn_801C068C(o, ctx, &F(o,0x17c,u32*)[i], b16);
        }
        rd->next();
        break;
    }
    case 135:
        F(o,0x238,int) = 1;
    default:
        fn_801DCA84(o, id, ctx, rd);
        break;
    }
}

}
