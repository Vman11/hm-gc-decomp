/* Functions from 0x8011DD04 to 0x8011DFE8, found by decomp-toolkit. */
#include "common.h"

typedef struct ListNode {
    struct ListNode *next;
    struct ListNode *prev;
    s32 key;
} ListNode;

typedef struct ListHead {
    ListNode *first;
    ListNode *last;
} ListHead;

typedef struct KeyEntry {
    s32 key;
    s32 unk4;
} KeyEntry;

static inline u32 findKey(KeyEntry *keys, u32 count, s32 key) {
    u32 i;
    for (i = 0; i < count; i++) {
        if (key == keys[i].key) {
            return i;
        }
    }
    return -1;
}

static inline ListHead *getHead(ListHead *heads, u32 count, u32 i) {
    if (i < count) {
        return &heads[i];
    }
    return NULL;
}

s32 fn_8011DD04(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    return arg1;
}
