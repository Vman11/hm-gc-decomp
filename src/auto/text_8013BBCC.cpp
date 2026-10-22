// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual s32 next(); };
struct P { u8 pad0[6]; u8 flag; u8 pad7; void *h; u8 padC[8]; char *name; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void clr(); };
extern "C" { void fn_800FAEF8(R *); char *fn_800FB284(R *); u32 strlen(const char *); void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); void strcpy(char *, char *); void fn_8013B200(P *, R *); void fn_8013B978(P *, R *); void fn_8013AC80(P *, R *); extern void *lbl_8035AC60; }
void *__nwa__FUl(u32);

extern "C" void fn_8013BBCC(P *p, u32 unused, R *r) {
    s32 k;
    if (p->h != 0) {
        p->clr();
    }
    fn_800FAEF8(r);
    while ((u32)(k = r->next()) != 6) {
        switch (k) {
        case 90:
            fn_8013B200(p, r);
            break;
        case 89:
            fn_8013B978(p, r);
            break;
        case 93: {
            char *s = fn_800FB284(r);
            u32 len = strlen(s);
            if (len < 1) {
                r->err(35);
            }
            if (!lbl_8035AC60) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035AC60);
            p->name = (char *)__nwa__FUl(len + 1);
            fn_800F7E98();
            if (!p->name) fn_800604C4(-4, 0, 0, 0);
            strcpy(p->name, s);
            fn_800FAEF8(r);
            while ((u32)(k = r->next()) != 6) {
                switch (k) {
                case 94:
                    p->flag = 1;
                    break;
                case 95:
                    p->flag = 0;
                    break;
                }
            }
            break;
        }
        case 96:
            fn_8013AC80(p, r);
            break;
        default:
            r->err(30);
            break;
        }
    }
}

} /* extern "C" */
