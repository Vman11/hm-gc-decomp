/* Functions from 0x80156110 to 0x8015641C, found by decomp-toolkit. */
#include "common.h"

extern "C" {

typedef struct {
    u32 a;
    u32 b;
    u32 c;
    u32 d;
    u32 e;
} Unk80156110Out;

typedef struct {
    s32 result;
    u32 a;
    u32 b;
    u32 c;
    u32 d;
    u32 e;
    u32 f;
} Unk801562D8Entry;

typedef struct {
    u16 a;
    u16 b;
    u32 c;
    u32 d;
    u32 e;
    u32 f;
} Unk801562D8Key;

extern Unk801562D8Entry lbl_802A0338[12];
extern Unk801562D8Entry lbl_802A0488[3];

extern "C" {

}


extern "C" void fn_80156110(u32 mode, Unk80156110Out *out) {
    switch (mode) {
    case 1:
        out->a = 1;
        out->b = 1;
        out->c = 1;
        out->d = 1;
        out->e = 0;
        break;
    case 2:
        out->a = 1;
        out->b = 4;
        out->c = 5;
        out->d = 2;
        out->e = 0;
        break;
    case 3:
        out->a = 1;
        out->b = 6;
        out->c = 7;
        out->d = 2;
        out->e = 0;
        break;
    case 10:
        out->a = 1;
        out->b = 5;
        out->c = 4;
        out->d = 2;
        out->e = 0;
        break;
    case 4:
        out->a = 1;
        out->b = 0;
        out->c = 2;
        out->d = 4;
        out->e = 0;
        break;
    case 5:
        out->a = 1;
        out->b = 2;
        out->c = 2;
        out->d = 4;
        out->e = 0;
        break;
    case 6:
        out->a = 1;
        out->b = 0;
        out->c = 4;
        out->d = 4;
        out->e = 0;
        break;
    case 7:
        out->a = 1;
        out->b = 2;
        out->c = 4;
        out->d = 4;
        out->e = 1;
        break;
    case 8:
        out->a = 1;
        out->b = 1;
        out->c = 4;
        out->d = 1;
        out->e = 0;
        break;
    case 9:
        out->a = 3;
        out->b = 1;
        out->c = 1;
        out->d = 9;
        out->e = 0;
        break;
    case 0:
    default:
        out->a = 1;
        out->b = 1;
        out->c = 0;
        out->d = 0;
        out->e = 0;
        break;
    }
}

extern "C" {
}


extern "C" s32 fn_801562D8(Unk801562D8Key *key) {
    Unk801562D8Entry *p;
    Unk801562D8Entry *q;

    if (key->a & 0x20) {
        return 0xE;
    }
    for (p = lbl_802A0338; p < lbl_802A0338 + 12; p++) {
        if (p->a == key->a && p->b == key->b && p->c == key->c && p->d == key->d && p->e == key->e && p->f == key->f) {
            return p->result;
        }
    }
    for (q = lbl_802A0488; q < lbl_802A0488 + 3; q++) {
        if (q->a == key->a && q->b == key->b && q->c == key->c && q->d == key->d && q->e == key->e && q->f == key->f) {
            return q->result;
        }
    }
    return 5;
}

} /* extern "C" */
