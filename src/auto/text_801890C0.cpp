/* Functions from 0x801890C0 to 0x801891E4, found by decomp-toolkit. */
#include "common.h"

extern "C" {

typedef struct SortNode {
    f32 min;
    f32 max;
    void* owner;
    u8 pad0C[0x14 - 0x0C];
    struct SortNode* self;
    struct SortNode* next;
    struct SortNode* prev;
} SortNode;

typedef struct SortList {
    u8 pad00[0x10];
    s32 axis;
    SortNode* heads[1];
} SortList;

typedef struct SortType {
    u8 pad00[0x4C];
    u32 kind;
} SortType;

typedef struct SortObj {
    SortType* type;
    f32 x;
    f32 y;
    f32 z;
} SortObj;

void fn_801890C0(u8 *g, u8 *k, u8 *e, f32 r) {
    u32 t = *(u32 *)(*(u8 **)k + 76);
    u8 **slot = (u8 **)(g + t * 4);
    u8 *head = slot[5];
    u8 *prev;
    u8 *n;
    *(u8 **)(e + 8) = g;
    if (*(u8 **)(e + 20) == 0) {
        *(u8 **)(e + 20) = e;
    }
    if (t >= 2) {
        slot[5] = e;
        *(u8 **)(e + 28) = 0;
        *(u8 **)(e + 24) = head;
        if (head != 0) {
            *(u8 **)(head + 28) = e;
        }
        return;
    }
    switch (*(s32 *)(g + 16)) {
    case 0:
        *(f32 *)(e + 0) = *(f32 *)(k + 4) - r;
        *(f32 *)(e + 4) = r + *(f32 *)(k + 4);
        break;
    case 1:
        *(f32 *)(e + 0) = *(f32 *)(k + 8) - r;
        *(f32 *)(e + 4) = r + *(f32 *)(k + 8);
        break;
    case 2:
        *(f32 *)(e + 0) = *(f32 *)(k + 12) - r;
        *(f32 *)(e + 4) = r + *(f32 *)(k + 12);
        break;
    }
    prev = 0;
    for (n = head; n != 0; n = *(u8 **)(n + 24)) {
        if (*(f32 *)(n + 0) >= *(f32 *)(e + 0)) {
            break;
        }
        prev = n;
    }
    *(u8 **)(e + 28) = prev;
    *(u8 **)(e + 24) = n;
    if (prev == 0) {
        slot[5] = e;
    } else {
        *(u8 **)(prev + 24) = e;
    }
    if (n != 0) {
        *(u8 **)(n + 28) = e;
    }
}

} /* extern "C" */
