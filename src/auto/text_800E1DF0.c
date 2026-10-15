/* Functions from 0x800E1DF0 to 0x800E1E08, found by decomp-toolkit. */
#include "common.h"

typedef void (*DestructorFunc)(void*, s32);

typedef struct DestructorChain {
    struct DestructorChain* next;
    DestructorFunc destructor;
    void* object;
} DestructorChain;

DestructorChain* __global_destructor_chain;
