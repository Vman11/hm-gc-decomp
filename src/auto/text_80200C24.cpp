#include "common.h"

// NonMatching draft (wA_80200C24): SMF track parser. SDIFF 13: case 0xE0 dead VLQ length counter is DCEd
// here but kept in the target; node d[] load order; one mr placement.

extern "C" {

struct Node { u8 b0, b1, b2; u32 v; Node *next; Node() { next = 0; b0 = 0; b1 = 0; b2 = 0; v = 0; } };
struct Heap;
struct Obj { u8 pad[8]; u16 mask; u8 pad2[2]; s32 cnt; u32 f10; u32 tempo; Node *head; };
extern Heap *lbl_8035B170;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(Heap *);
void fn_800F7E98(void);

static inline s32 readVLQ(s8 *p, s32 *len) {
    *len = 1;
    s32 v = *p;
    if (v & 0x80) {
        v &= 0x7f;
        p++;
        s8 c;
        do {
            c = *p;
            v = (v << 7) + (c & 0x7f);
            (*len)++;
            p++;
        } while (c & 0x80);
    }
    return v;
}
s32 fn_80200C24(Obj *o, s8 *__restrict data, u32 len) {
    u8 status;
    u32 pos = 0;
    u32 time = 0;
    u8 running;
    s8 d[2];
    while (pos < len) {
        s32 emit = 0;
        s32 n;
        time += readVLQ(data + pos, &n);
        pos += n;
        u8 b = data[pos];
        s8 type = b;
        s8 c = b;
        if ((u8)c != 0xff) type = c & 0xf0;
        if (!(type & 0x100)) {
            status = running;
            pos--;
        } else {
            status = b;
            running = b;
        }
        switch (status) {
        case 0x80:
        case 0x90:
        case 0xb0:
            emit = 1;
            {
            u8 a0 = data[pos + 1];
            u8 a1 = data[pos + 2];
            pos += 3;
            d[0] = a0; d[1] = a1;
            }
            break;
        case 0xe0:
            status = b;
            d[0] = data[pos + 1];
            d[1] = data[pos + 2];
            pos += 3;
            readVLQ(d, &n);
            emit = 1;
            break;
        case 0xa0:
            emit = 0;
            pos += 3;
            break;
        case 0xc0:
        case 0xd0:
            emit = 0;
            pos += 2;
            break;
        case 0xf0:
            pos++;
            { s8 ch = data[pos]; while (ch != 0xf7) { ch = data[++pos]; } }
            emit = 0;
            pos++;
            break;
        case 0xff: {
            pos++;
            s8 *p = data + pos;
            switch ((u8)*p) {
            case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9:
            case 0x7f: {
                pos++;
                s32 v = readVLQ(data + pos, &n);
                pos += n;
                emit = 0;
                pos += v;
                break;
            }
            case 0: case 0x54: case 0x58: case 0x59:
                pos += 2;
                emit = 0;
                pos += (s8)p[1];
                break;
            case 0x2f:
                pos += 2;
                emit = 0;
                pos += (s8)p[1];
                break;
            case 0x51:
                o->tempo = 0;
                pos += 5;
                o->tempo += (u8)p[2] << 16;
                o->tempo += (u8)p[3] << 8;
                o->tempo = (u8)p[4] + o->tempo;
                o->tempo /= 1000;
                break;
            }
            break;
        }
        }
        if (emit) {
            if (!lbl_8035B170) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035B170);
            Node *node = new Node;
            fn_800F7E98();
            if (!node) fn_800604C4(-4, 0, 0, 0);
            node->b0 = status;
            node->b1 = d[0];
            node->b2 = d[1];
            node->v = time;
            Node *prev = 0;
            Node *cur = o->head;
            if (!cur) {
                o->head = node;
            } else {
                do {
                    if (node->v < cur->v) {
                        node->next = cur;
                        if (prev) prev->next = node;
                        else o->head = node;
                        goto done;
                    }
                    prev = cur;
                    cur = cur->next;
                } while (cur);
                prev->next = node;
            }
        done:
            o->cnt++;
            o->mask |= 1 << (status & 0xf);
        }
        if (pos > len) return -1;
    }
    return 0;
}

}
