// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035A9F4;
extern void *lbl_8035AAB8;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
struct Str { void *f0; u8 pad[16]; };
struct T { u8 pad[12]; Str s12; Str s32; int f52; void *f56; };
void fn_800FA3DC(Str *, u16 *, u32);
void fn_800FB700(Str *, u16 *, u32);
void fn_800FA4FC(Str *, u16 *);
void fn_800FA474(Str *, char *, u32);
void fn_800FB9D4(Str *, char *, u32);
void fn_800FA5D8(Str *, char *);
void fn_8010A244(T *t, u32 n, int wide) {
    u16 *tmpW; u16 *bufW; char *bufC; char *tmpC;
    if (wide) {
        if (lbl_8035A9F4 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035A9F4);
        tmpW = new u16[n];
        fn_800F7E98();
        if (tmpW == 0) fn_800604C4(-4, 0, 0, 0);
        if (lbl_8035AAB8 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AAB8);
        bufW = new u16[n];
        fn_800F7E98();
        if (bufW == 0) fn_800604C4(-4, 0, 0, 0);
        fn_800FA3DC(&t->s32, tmpW, n);
        if (t->f56) delete[] (u8 *)t->f56;
        t->f56 = bufW;
        fn_800FB700(&t->s32, bufW, n);
        fn_800FA4FC(&t->s32, tmpW);
        t->f52 = 1;
        delete[] tmpW;
    } else {
        if (lbl_8035A9F4 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035A9F4);
        tmpC = new char[n];
        fn_800F7E98();
        if (tmpC == 0) fn_800604C4(-4, 0, 0, 0);
        if (lbl_8035AAB8 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AAB8);
        bufC = new char[n];
        fn_800F7E98();
        if (bufC == 0) fn_800604C4(-4, 0, 0, 0);
        fn_800FA474(&t->s12, tmpC, n);
        if (t->f56) delete[] (u8 *)t->f56;
        t->f56 = bufC;
        fn_800FB9D4(&t->s12, bufC, n);
        fn_800FA5D8(&t->s12, tmpC);
        t->f52 = 0;
        delete[] tmpC;
    }
}

} /* extern "C" */
