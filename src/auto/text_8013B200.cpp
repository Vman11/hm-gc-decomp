// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 next(); };
struct E { u32 op; s32 a; s32 b; s32 c; };
struct P { u16 pad0; u16 n; u32 pad4[2]; E *arr; };
extern "C" { u16 fn_800FADA8(R *); s32 fn_800FB33C(R *); void fn_800FAEA0(R *); void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); extern void *lbl_8035AC60; }
void *__nwa__FUl(u32);

void fn_8013BB48(void);
void __dt__9C8013BDBCFv(void);
void fn_8013BBCC(void);
void fn_8013ABEC(void);

/* vtable */
void *lbl_802E58B0[7] = {
    0, 0, 0, (void *)fn_8013BB48, (void *)__dt__9C8013BDBCFv, (void *)fn_8013BBCC, (void *)fn_8013ABEC
};

extern "C" void fn_8013B200(P *p, R *r) {
    E *e;
    E *end;
    if (p->n != 0) {
        r->err(39);
    }
    p->n = fn_800FADA8(r);
    if (p->n < 1) {
        r->err(35);
    }
    if (!lbl_8035AC60) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AC60);
    p->arr = (E *)__nwa__FUl(p->n * sizeof(E));
    fn_800F7E98();
    if (!p->arr) fn_800604C4(-4, 0, 0, 0);
    e = p->arr;
    end = e + p->n;
    for (; e < end; e++) {
        switch (r->next()) {
        case 114:
            e->op = 0;
            break;
        case 115:
            e->op = 1;
            break;
        case 116:
            e->op = 2;
            break;
        case 117:
            e->op = 3;
            break;
        case 118:
            e->op = 4;
            break;
        case 119:
            e->op = 45;
            e->a = fn_800FB33C(r);
            if (e->a < 0 || (u32)e->a >= 256) {
                r->err(35);
            }
            e->b = fn_800FB33C(r);
            break;
        case 120:
            e->op = 5;
            break;
        case 121:
            e->op = 6;
            break;
        case 123:
            e->op = 8;
            break;
        case 124:
            e->op = 9;
            e->b = fn_800FB33C(r);
            break;
        case 125:
            e->op = 10;
            e->b = fn_800FB33C(r);
            break;
        case 126:
            e->op = 11;
            e->b = fn_800FB33C(r);
            break;
        case 127:
            e->op = 12;
            e->b = fn_800FB33C(r);
            break;
        case 128:
            e->op = 13;
            e->b = fn_800FB33C(r);
            break;
        case 129:
            e->op = 14;
            e->b = fn_800FB33C(r);
            break;
        case 122:
            e->op = 7;
            break;
        case 130:
            e->op = 15;
            e->a = fn_800FB33C(r);
            if ((u32)e->a >= 4) {
                r->err(35);
            }
            break;
        case 131:
            e->op = 16;
            e->a = fn_800FB33C(r);
            if ((u32)e->a >= 4) {
                r->err(35);
            }
            break;
        case 132:
            e->op = 17;
            break;
        case 133:
            e->op = 18;
            break;
        case 134:
            e->op = 19;
            e->a = fn_800FB33C(r);
            if ((u32)e->a >= 4) {
                r->err(35);
            }
            break;
        case 135:
            e->op = 20;
            e->a = fn_800FB33C(r);
            if ((u32)e->a >= 4) {
                r->err(35);
            }
            break;
        case 136:
            e->op = 21;
            break;
        case 137:
            e->op = 22;
            break;
        case 138:
            e->op = 23;
            e->a = fn_800FB33C(r);
            if ((u32)e->a >= 4) {
                r->err(35);
            }
            break;
        case 139:
            e->op = 24;
            break;
        case 140:
            e->op = 25;
            e->a = fn_800FB33C(r);
            break;
        case 141:
            e->op = 26;
            e->a = fn_800FB33C(r);
            break;
        case 142:
            e->op = 27;
            break;
        case 143:
            e->op = 28;
            break;
        case 144:
            e->op = 29;
            break;
        case 145:
            e->op = 30;
            break;
        case 146:
            e->op = 31;
            break;
        case 147:
            e->op = 32;
            break;
        case 148:
            e->op = 33;
            break;
        case 149:
            e->op = 34;
            e->a = fn_800FB33C(r);
            e->b = fn_800FB33C(r);
            break;
        case 150:
            e->op = 35;
            e->a = fn_800FB33C(r);
            break;
        case 151:
            e->op = 36;
            e->a = fn_800FB33C(r);
            break;
        case 152:
            e->op = 37;
            e->a = fn_800FB33C(r);
            break;
        case 153:
            e->op = 38;
            e->a = fn_800FB33C(r);
            break;
        case 154:
            e->op = 39;
            e->a = fn_800FB33C(r);
            break;
        case 155:
            e->op = 40;
            e->a = fn_800FB33C(r);
            e->b = fn_800FB33C(r);
            break;
        case 156:
            e->op = 41;
            e->a = fn_800FB33C(r);
            break;
        case 157:
            e->op = 42;
            e->a = fn_800FB33C(r);
            break;
        case 158:
            e->op = 43;
            e->a = fn_800FB33C(r);
            break;
        case 159:
            e->op = 44;
            break;
        case 160:
            e->op = 46;
            e->a = fn_800FB33C(r);
            break;
        case 161:
            e->op = 47;
            e->a = fn_800FB33C(r);
            break;
        case 162:
            e->op = 48;
            e->a = fn_800FB33C(r);
            break;
        case 163:
            e->op = 49;
            e->a = fn_800FB33C(r);
            break;
        case 164:
            e->op = 50;
            e->a = fn_800FB33C(r);
            break;
        case 165:
            e->op = 51;
            e->a = fn_800FB33C(r);
            break;
        case 167:
            e->op = 52;
            break;
        case 168:
            e->op = 53;
            break;
        case 169:
            e->op = 54;
            break;
        case 170:
            e->op = 55;
            break;
        case 171:
            e->op = 56;
            break;
        case 172:
            e->op = 57;
            e->a = fn_800FB33C(r);
            if ((u32)e->a >= 4) {
                r->err(35);
            }
            break;
        case 173:
            e->op = 58;
            e->a = fn_800FB33C(r);
            if ((u32)e->a >= 4) {
                r->err(35);
            }
            break;
        case 174:
            e->op = 59;
            e->a = fn_800FB33C(r);
            if ((u32)e->a >= 4) {
                r->err(35);
            }
            break;
        case 175:
            e->op = 60;
            e->a = fn_800FB33C(r);
            break;
        case 176:
            e->op = 61;
            e->a = fn_800FB33C(r);
            break;
        case 177:
            e->op = 62;
            break;
        default:
            r->err(30);
            break;
        }
        e->c = fn_800FB33C(r);
    }
    fn_800FAEA0(r);
}

} /* extern "C" */
