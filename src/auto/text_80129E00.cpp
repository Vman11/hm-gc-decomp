// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 **lbl_8035AB80;
extern u8 **lbl_8035AB84;
extern u8 **lbl_8035AB88;
extern u8 **lbl_8035AB8C;
extern u8 **lbl_8035AB90;
extern u8 **lbl_8035AB94;
extern u8 **lbl_8035AB98;
extern u8 **lbl_8035AB9C;
extern u8 **lbl_8035ABA0;
extern u8 **lbl_8035ABA4;
extern u8 **lbl_8035ABA8;
extern u8 **lbl_8035ABAC;
extern u8 **lbl_8035ABB0;
extern u8 **lbl_8035ABB4;
extern u8 **lbl_8035ABB8;
extern u8 **lbl_8035ABBC;

inline void wA_free(u8 **&g, u16 *np) {
    u8 **a = g;
    if (a != 0) {
        u32 n = *np;
        u32 i;
        for (i = 0; i < n; i++) {
            if (a[i] != 0) {
                delete[] a[i];
            }
        }
        delete[] a;
        g = 0;
    }
}

void fn_80129E00(u8 *p) {
    wA_free(lbl_8035ABBC, (u16 *)(p + 0x98));
    wA_free(lbl_8035ABB8, (u16 *)(p + 0x96));
    wA_free(lbl_8035ABB4, (u16 *)(p + 0x94));
    wA_free(lbl_8035ABB0, (u16 *)(p + 0x92));
    wA_free(lbl_8035ABA8, (u16 *)(p + 0x8c));
    wA_free(lbl_8035ABAC, (u16 *)(p + 0x8e));
    wA_free(lbl_8035ABA4, (u16 *)(p + 0x8a));
    wA_free(lbl_8035ABA0, (u16 *)(p + 0x88));
    wA_free(lbl_8035AB9C, (u16 *)(p + 0x86));
    wA_free(lbl_8035AB94, (u16 *)(p + 0x82));
    wA_free(lbl_8035AB98, (u16 *)(p + 0x84));
    wA_free(lbl_8035AB90, (u16 *)(p + 0x80));
    wA_free(lbl_8035AB8C, (u16 *)(p + 0x7e));
    wA_free(lbl_8035AB84, (u16 *)(p + 0x7c));
    wA_free(lbl_8035AB88, (u16 *)(p + 0x7a));
    wA_free(lbl_8035AB80, (u16 *)(p + 0x78));
}

} /* extern "C" */
