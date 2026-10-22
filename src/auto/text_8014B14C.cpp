// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"

extern "C" {

struct R14B { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void setup(void *, s32, s32); virtual void p3(); virtual void err(s32); virtual u32 next(); };
struct Key14B { u8 d[8]; };
struct P14B { void *f0; u8 f4[4]; u32 f8; u16 fc; u16 fe; };
u32 fn_800FB33C(R14B *);
void fn_800FB064(R14B *, void *);
void fn_800FAEF8(R14B *);
void *fn_800F9398(void *, void *);
void *fn_800F9788(void *, char *, void *);
void fn_80060568(char *, s32, s32, s32);
void fn_80121670(void *, R14B *);
void *memcpy(void *, const void *, u32);
char *strcat(char *, const char *);
extern char lbl_802A0188[];
extern u32 lbl_80364480;
extern u32 lbl_80364484;
extern u32 lbl_80364488;
extern u32 lbl_8036448C;
extern u32 lbl_80364490;
extern u32 lbl_80364494;
extern u32 lbl_80364498;
extern u32 lbl_8036449C;
extern u32 lbl_803644A0;
extern u32 lbl_803644A4;
extern u32 lbl_803644A8;
extern u32 lbl_803644AC;
extern u32 lbl_803644B0;
extern u32 lbl_803644B4;
extern u32 lbl_803644B8;
extern u32 lbl_803644BC;
extern u32 lbl_803644C0;
extern u32 lbl_803644C4;
extern u32 lbl_803644C8;

void fn_8014B14C(P14B *p, u8 *q, R14B *r, char *grp) {
    Key14B key;
    char grp2[8];
    u32 k;
    void *v;

    fn_800FAEF8(r);
    p->f8 |= lbl_80364480;
    while ((k = r->next()) != 6) {
        switch (k) {
        case 0x40:
            if (p->f8 & 0x4000) r->err(0x27);
            fn_800FB064(r, &key);
            if (grp == 0 || grp[0] == 0) {
                v = fn_800F9398(q + 0x3c, &key);
            } else {
                v = fn_800F9788(q + 0x54, grp, &key);
            }
            p->f0 = v;
            if (!p->f0) {
                char buf[0x40];
                memcpy(buf, &key, 8);
                buf[8] = 0;
                strcat(buf, lbl_802A0188);
                fn_80060568(buf, 0, 0, 0);
            }
            break;
        case 0x41:
            if (p->f8 & 0x4000) r->err(0x27);
            fn_800FB064(r, &key);
            fn_800FB064(r, grp2);
            if ((char *)grp2 == 0 || grp2[0] == 0) {
                v = fn_800F9398(q + 0x3c, &key);
            } else {
                v = fn_800F9788(q + 0x54, grp2, &key);
            }
            p->f0 = v;
            if (!p->f0) {
                char buf2[0x40];
                memcpy(buf2, &key, 8);
                buf2[8] = 0;
                strcat(buf2, lbl_802A0188);
                fn_80060568(buf2, 0, 0, 0);
            }
            break;
        case 0x42:
            p->fc = fn_800FB33C(r);
            break;
        case 0x43:
            p->f8 &= ~0xf;
            break;
        case 0x44:
            p->f8 &= ~0xf;
            p->f8 |= lbl_80364484;
            break;
        case 0x45:
            p->f8 &= ~0xf;
            p->f8 |= lbl_80364488;
            break;
        case 0x46:
            p->f8 &= ~0xf;
            p->f8 |= lbl_8036448C;
            break;
        case 0x47:
            p->f8 &= ~0xf;
            p->f8 |= lbl_80364490;
            break;
        case 0x48:
            p->f8 &= ~0x10000;
            break;
        case 0x49:
            p->f8 &= ~0x10000;
            p->f8 |= lbl_80364480;
            break;
        case 0x4a:
            p->f8 &= ~0x30;
            break;
        case 0x4b:
            p->f8 &= ~0x20;
            p->f8 |= lbl_80364494;
            break;
        case 0x4c:
            p->f8 &= ~0x10;
            p->f8 |= lbl_80364498;
            fn_80121670(&p->f4, r);
            break;
        case 0x4d:
            p->f8 &= ~0x1c0;
            p->f8 |= lbl_8036449C;
            break;
        case 0x4e:
            p->f8 &= ~0x1c0;
            p->f8 |= lbl_803644A0;
            break;
        case 0x4f:
            p->f8 &= ~0x1c0;
            p->f8 |= lbl_803644A4;
            break;
        case 0x50:
            p->f8 &= ~0x1c0;
            p->f8 |= lbl_803644A8;
            break;
        case 0x51:
            p->f8 &= ~0x1c0;
            p->f8 |= lbl_803644AC;
            break;
        case 0x52:
            p->f8 |= lbl_803644B0;
            p->f8 &= ~0x1c00;
            break;
        case 0x53:
            p->f8 |= lbl_803644B4;
            p->f8 &= ~0x1800;
            p->fe = (u8)fn_800FB33C(r);
            break;
        case 0x54:
            p->f8 |= lbl_803644B8;
            p->f8 &= ~0x1400;
            p->fe = (u8)fn_800FB33C(r);
            break;
        case 0x55:
            p->f8 |= lbl_803644BC;
            p->f8 &= ~0xc00;
            p->fe = (u8)fn_800FB33C(r);
            break;
        case 0x56:
            p->f8 |= lbl_803644C0;
            break;
        case 0x71:
            if (p->f0) r->err(0x27);
            p->f8 |= lbl_803644C4;
            break;
        case 0x72:
            p->f8 |= lbl_803644C8;
            break;
        default:
            r->err(0x1e);
            break;
        }
    }
}

}

} /* extern "C" */
