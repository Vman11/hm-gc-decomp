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

static inline u32 findKeyAC(void *arg0, s32 key) {
    u32 i;
    for (i = 0; i < M2C_FIELD(arg0, u32 *, 0xAC); i++) {
        if (key == M2C_FIELD(arg0, KeyEntry **, 0x50)[i].key) {
            return i;
        }
    }
    return -1;
}

static inline u32 findKey(KeyEntry **keys, u32 count, s32 key) {
    u32 i;
    for (i = 0; i < count; i++) {
        if (key == (*keys)[i].key) {
            return i;
        }
    }
    return -1;
}

static inline ListHead *getHeadAC(void *arg0, u32 i) {
    if (i < M2C_FIELD(arg0, u32 *, 0xAC)) {
        return &M2C_FIELD(arg0, ListHead **, 0x98)[i];
    }
    return NULL;
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

s32 fn_8011DD10(void *arg0, ListNode *node) {
    u32 i = findKeyAC(arg0, node->key);
    ListHead *head;
    if (i < M2C_FIELD(arg0, u32 *, 0xAC)) {
        head = getHead(M2C_FIELD(arg0, ListHead **, 0x98), M2C_FIELD(arg0, u32 *, 0xAC), i);
        if (node->prev != NULL) {
            if ((node->prev->next = node->next) != NULL) node->next->prev = node->prev;
            else head->last = node->prev;
        } else {
            if ((head->first = node->next) != NULL) head->first->prev = NULL;
            else head->last = NULL;
        }
        return 1;
    }
    return 0;
}

s32 fn_8011DDE0(void *arg0, ListNode *node) {
    u32 count = M2C_FIELD(arg0, u32 *, 0xAC);
    u32 i = findKey((KeyEntry **)((u8 *)arg0 + 0x50), count, node->key);
    ListHead *head;
    if (i < count) {
        head = getHead(M2C_FIELD(arg0, ListHead **, 0x98), count, i);
        if ((node->next = head->first) != NULL) {
            head->first->prev = node;
        } else {
            head->last = node;
        }
        head->first = node;
        node->prev = NULL;
        return 1;
    }
    return 0;
}

s32 fn_8011DE7C(void *arg0, ListNode *node) {
    u32 count = M2C_FIELD(arg0, u32 *, 0xA8);
    u32 i;
    ListHead *head;
    for(i=0; i<count; i++) {
        if(node->key == M2C_FIELD(arg0, KeyEntry **, 0x4C)[i].key) goto found;
    }
    i = -1;
found:
    if (i < count) {
        if(i < count) head = &M2C_FIELD(arg0, ListHead **, 0x94)[i];
        else head = NULL;
        if (node->prev != NULL) {
            if ((node->prev->next = node->next) != NULL) node->next->prev = node->prev;
            else head->last = node->prev;
        } else {
            if ((head->first = node->next) != NULL) head->first->prev = NULL;
            else head->last = NULL;
        }
        return 1;
    }
    return 0;
}

s32 fn_8011DF4C(void *arg0, ListNode *node) {
    u32 count = M2C_FIELD(arg0, u32 *, 0xA8);
    u32 i = findKey((KeyEntry **)((u8 *)arg0 + 0x4C), count, node->key);
    ListHead *head;
    if (i < count) {
        head = getHead(M2C_FIELD(arg0, ListHead **, 0x94), count, i);
        if ((node->next = head->first) != NULL) {
            head->first->prev = node;
        } else {
            head->last = node;
        }
        head->first = node;
        node->prev = NULL;
        return 1;
    }
    return 0;
}

