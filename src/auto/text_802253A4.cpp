#include "common.h"
extern "C" {


typedef struct { s32 a, b, c; } T_802253A4;
extern u8 lbl_802F06C0[];
extern char lbl_802A8228[];
extern void * volatile lbl_8035B65C;
extern char lbl_80365AF0[8];
extern char lbl_80365B14[8];
extern char lbl_80365B1C[8];
extern char lbl_80365B24[8];
extern char lbl_80365B2C[8];
extern char lbl_80365B34[8];
extern char lbl_80365B3C[8];
extern char lbl_80365B44[8];
extern char lbl_80365B4C[8];
extern char lbl_80365B54[8];
extern char lbl_80365B5C[8];
extern char lbl_80365B64[8];
extern char lbl_80365B6C[8];
extern char lbl_80365B74[8];
extern char lbl_80365B7C[8];
extern char lbl_80365B84[8];
extern char lbl_80365B8C[8];
extern char lbl_80365B94[8];
extern char lbl_80365B9C[8];
extern char lbl_80365BA4[8];
extern char lbl_80365BAC[8];
extern char lbl_80365BB4[8];
extern char lbl_80365BBC[8];
extern char lbl_80365BC4[8];
extern char lbl_80365BCC[8];
extern char lbl_80365BD4[8];
extern char lbl_80365BDC[8];
extern char lbl_80365BE4[8];
extern char lbl_80365BEC[8];
extern char lbl_80365BF4[8];
extern char lbl_80365BFC[8];
void fn_80253AD8(void *, void *, void *, void *);
void fn_80225264(void *);
void fn_80238BF4(void *);

#pragma opt_propagation off
void fn_802253A4(void *pp) {
    u8 *p = (u8 *)pp;
    volatile T_802253A4 *tbl = (volatile T_802253A4 *)lbl_802F06C0;
    char *str = lbl_802A8228;
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[22].a; y = tbl[22].b; z = tbl[22].c; t.a = x; t.b = y; t.c = z; } char *s0 = str + 0x7c;
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, s0);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[23].a; y = tbl[23].b; z = tbl[23].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, str + 0x88);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[24].a; y = tbl[24].b; z = tbl[24].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, lbl_80365B1C);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[25].a; y = tbl[25].b; z = tbl[25].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, lbl_80365B14);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[26].a; y = tbl[26].b; z = tbl[26].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, str + 0x94);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[27].a; y = tbl[27].b; z = tbl[27].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, str + 0x4c);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[28].a; y = tbl[28].b; z = tbl[28].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, lbl_80365AF0);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[29].a; y = tbl[29].b; z = tbl[29].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, str + 0x58);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[30].a; y = tbl[30].b; z = tbl[30].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, str + 0x64);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[31].a; y = tbl[31].b; z = tbl[31].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, str + 0x70);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[32].a; y = tbl[32].b; z = tbl[32].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, lbl_80365B24);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[33].a; y = tbl[33].b; z = tbl[33].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, str + 0xa0);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[34].a; y = tbl[34].b; z = tbl[34].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, str + 0xac);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[35].a; y = tbl[35].b; z = tbl[35].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, str + 0xb8);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[36].a; y = tbl[36].b; z = tbl[36].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, lbl_80365B2C);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[37].a; y = tbl[37].b; z = tbl[37].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, str + 0xc4);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[38].a; y = tbl[38].b; z = tbl[38].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, lbl_80365B34);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[39].a; y = tbl[39].b; z = tbl[39].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, lbl_80365B3C);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[40].a; y = tbl[40].b; z = tbl[40].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, lbl_80365B44);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[41].a; y = tbl[41].b; z = tbl[41].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, lbl_80365B4C);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[42].a; y = tbl[42].b; z = tbl[42].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, lbl_80365B54);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[43].a; y = tbl[43].b; z = tbl[43].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, lbl_80365B5C);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[44].a; y = tbl[44].b; z = tbl[44].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, lbl_80365B64);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[45].a; y = tbl[45].b; z = tbl[45].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, lbl_80365B6C);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[46].a; y = tbl[46].b; z = tbl[46].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, lbl_80365B74);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[47].a; y = tbl[47].b; z = tbl[47].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, lbl_80365B7C);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[48].a; y = tbl[48].b; z = tbl[48].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, lbl_80365B84);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[49].a; y = tbl[49].b; z = tbl[49].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, lbl_80365B8C);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[50].a; y = tbl[50].b; z = tbl[50].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, lbl_80365B94);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[51].a; y = tbl[51].b; z = tbl[51].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, lbl_80365B9C);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[52].a; y = tbl[52].b; z = tbl[52].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, lbl_80365BA4);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[53].a; y = tbl[53].b; z = tbl[53].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, lbl_80365BAC);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[54].a; y = tbl[54].b; z = tbl[54].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, lbl_80365BB4);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[55].a; y = tbl[55].b; z = tbl[55].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, lbl_80365BBC);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[56].a; y = tbl[56].b; z = tbl[56].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, lbl_80365BC4);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[57].a; y = tbl[57].b; z = tbl[57].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, lbl_80365BCC);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[58].a; y = tbl[58].b; z = tbl[58].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, lbl_80365BD4);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[59].a; y = tbl[59].b; z = tbl[59].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, lbl_80365BDC);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[60].a; y = tbl[60].b; z = tbl[60].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, lbl_80365BE4);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[61].a; y = tbl[61].b; z = tbl[61].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, lbl_80365BEC);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[62].a; y = tbl[62].b; z = tbl[62].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, lbl_80365BF4);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[63].a; y = tbl[63].b; z = tbl[63].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, lbl_80365BFC);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[64].a; y = tbl[64].b; z = tbl[64].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, str + 0xd0);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[65].a; y = tbl[65].b; z = tbl[65].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, str + 0xdc);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[66].a; y = tbl[66].b; z = tbl[66].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, str + 0xe8);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[67].a; y = tbl[67].b; z = tbl[67].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, str + 0xf4);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[68].a; y = tbl[68].b; z = tbl[68].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, str + 0x100);
    }
    {
        volatile T_802253A4 t; { s32 z, y, x; x = tbl[69].a; y = tbl[69].b; z = tbl[69].c; t.a = x; t.b = y; t.c = z; }
        fn_80253AD8(lbl_8035B65C, *(void **)(p + 0x20c), (void *)&t, str + 0x10c);
    }
    fn_80225264(p);
    fn_80238BF4(p);
}

}
