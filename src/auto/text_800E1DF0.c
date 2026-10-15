/* Functions from 0x800E1DF0 to 0x800E1E08, found by decomp-toolkit. */
#include "common.h"

typedef void (*DestructorFunc)(void*, s32);

typedef struct DestructorChain {
    struct DestructorChain* next;
    DestructorFunc destructor;
    void* object;
} DestructorChain;

extern DestructorChain* __global_destructor_chain;

void* __register_global_object(void* object, void* destructor, void* regmem) {
    ((DestructorChain*)regmem)->next = __global_destructor_chain;
    ((DestructorChain*)regmem)->destructor = (DestructorFunc)destructor;
    ((DestructorChain*)regmem)->object = object;
    __global_destructor_chain = (DestructorChain*)regmem;
    return object;
}
