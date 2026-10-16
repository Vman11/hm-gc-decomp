/* Functions from 0x8017EE1C to 0x8017EEFC, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    u32 a;
    u32 b;
} EdgePair;

typedef struct {
    EdgePair *pair;
    u32 stamp;
} EdgeSlot;

typedef struct {
    u32 max;
    u32 count;
    EdgePair *pairs;
    EdgeSlot *slots;
    u32 stamp;
} EdgeSet;

void fn_8017EE1C(EdgeSet *set, u32 a, u32 b) {
    EdgeSlot *slot;
    EdgeSlot *end;
    EdgePair *pair;

    if (set->count >= set->max) {
        return;
    }
    pair = &set->pairs[set->count];
    if (a > b) {
        pair->a = a;
        pair->b = b;
    } else {
        pair->a = b;
        pair->b = a;
    }
    slot = &set->slots[(pair->a + (pair->b << 16)) % set->max];
    end = &set->slots[set->max];
    while (slot->stamp == set->stamp) {
        if (slot->pair->a == pair->a && slot->pair->b == pair->b) {
            return;
        }
        slot++;
        if (slot >= end) {
            slot = set->slots;
        }
    }
    slot->pair = pair;
    slot->stamp = set->stamp;
    set->count++;
}

void fn_8017EEE4(s32 *arg0) {
    arg0[4]++;
    arg0[1] = 0;
}
