/* Functions from 0x801890C0 to 0x801891E4, found by decomp-toolkit. */
#include "common.h"

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

