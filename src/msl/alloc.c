/* MSL_C alloc.c */
#include "common.h"
void __begin_critical_region(int region);
void __end_critical_region(int region);
void fn_800E43C8(void *pool, void *ptr);
void fn_800E4420(void *pool, void *ptr, u32 size);
void fn_800E4578(void *pool, void *ptr);
void *memset(void *, int, u32);
extern u8 lbl_803280A8[];
extern u8 lbl_8035A970;
typedef struct FixBlock {
    struct FixBlock *prev_;
    struct FixBlock *next_;
    u32 client_size_;
    struct FixSubBlock *start_;
    u32 n_allocated_;
} FixBlock;
typedef struct FixSubBlock {
    FixBlock *block_;
    struct FixSubBlock *next_;
} FixSubBlock;
typedef struct FixStart {
    FixBlock *tail_;
    FixBlock *head_;
} FixStart;
typedef struct __mem_pool_obj {
    void *start_;
    FixStart fix_start[6];
} __mem_pool_obj;
extern u32 lbl_8029C048[];
extern u32 __fwrite(const void *ptr, u32 size, u32 count, void *file);
extern int _fseek(void *file, s32 offset, int mode);
void *memset(void *, int, unsigned long);
void free(void *ptr);

void free(void *ptr) {
    __begin_critical_region(1);
    if (!lbl_8035A970) {
        memset(lbl_803280A8, 0, 0x34);
        lbl_8035A970 = 1;
    }
    fn_800E43C8(lbl_803280A8, ptr);
    __end_critical_region(1);
}

void fn_800E43C8(void *pool, void *ptr) {
    u32 size;
    u32 *blk;

    if (ptr == NULL) {
        return;
    }
    blk = (u32 *)((u32 *)ptr)[-1];
    if (((u32)blk & 1) == 0) {
        size = blk[2];
    } else {
        size = (((u32 *)ptr)[-2] & ~7) - 8;
    }
    if (size <= 0x44) {
        fn_800E4420(pool, ptr, size);
    } else {
        fn_800E4578(pool, ptr);
    }
}

void fn_800E4420(void *pool, void *ptr, u32 size) {
    __mem_pool_obj *pool_obj = (__mem_pool_obj *)pool;
    u32 i = 0;
    FixSubBlock *p;
    FixBlock *b;
    FixStart *fs;

    while (size > lbl_8029C048[i])
        ++i;

    p = (FixSubBlock *)((char *)ptr - 4);
    b = p->block_;
    fs = &pool_obj->fix_start[i];

    if (b->start_ == 0 && fs->head_ != b) {
        if (fs->tail_ == b) {
            fs->head_ = fs->head_->prev_;
            fs->tail_ = fs->tail_->prev_;
        } else {
            b->prev_->next_ = b->next_;
            b->next_->prev_ = b->prev_;
            b->next_ = fs->head_;
            b->prev_ = b->next_->prev_;
            b->prev_->next_ = b;
            b->next_->prev_ = b;
            fs->head_ = b;
        }
    }

    p->next_ = b->start_;
    b->start_ = p;

    if (--b->n_allocated_ == 0) {
        if (fs->head_ == b)
            fs->head_ = b->next_;
        if (fs->tail_ == b)
            fs->tail_ = b->prev_;
        b->prev_->next_ = b->next_;
        b->next_->prev_ = b->prev_;
        if (fs->head_ == b)
            fs->head_ = 0;
        if (fs->tail_ == b)
            fs->tail_ = 0;
        fn_800E4578(pool_obj, b);
    }
}

#pragma push
#pragma inline_depth(0)
void fn_800E4578(void *pool, void *ptr) {
    u32 *prev;
    u32 oldsize;
    u32 *p;
    u32 *next;
    u32 size;
    u32 *b;
    u32 *arena;
    u32 **head;
    u32 total;
    int empty;
    u32 *link;
    b = (u32 *)((char *)ptr - 8);
    size = b[0] & ~7;
    arena = (u32 *)(b[1] & ~1);
    next = (u32 *)((char *)b + size);
    b[0] &= ~2;
    next[0] &= ~4;
    next[-1] = size;
    head = (u32 **)((char *)arena + (arena[3] & ~7) - 4);
    if (*head) {
        b[2] = (*head)[2];
        ((u32 *)b[2])[3] = (u32)b;
        b[3] = (u32)*head;
        (*head)[2] = (u32)b;
        *head = b;
        p = *head;
        if (!(p[0] & 4)) {
            oldsize = p[-1];
            if (oldsize & 2) {
                prev = p;
            } else {
                prev = (u32 *)((char *)p - oldsize);
                prev[0] &= 7;
                prev[0] |= (oldsize + (p[0] & ~7)) & ~7;
                if (!(prev[0] & 2)) {
                    total = oldsize + (p[0] & ~7);
                    *(u32 *)((char *)prev + total - 4) = total;
                }
                if (*head == p) *head = (u32 *)(*head)[3];
                ((u32 *)p[3])[2] = p[2];
                link = (u32 *)p[3];
                ((u32 *)link[2])[3] = (u32)link;
            }
        } else prev = p;
        *head = prev;
        p = *head;
        oldsize = p[0] & ~7;
        next = (u32 *)((char *)p + oldsize);
        total = next[0];
        if (!(total & 2)) {
            p[0] &= 7;
            total = oldsize + (total & ~7);
            p[0] |= total & ~7;
            if (!(p[0] & 2)) *(u32 *)((char *)p + total - 4) = total;
            if (!(p[0] & 2)) *(u32 *)((char *)p + total) &= ~4;
            else *(u32 *)((char *)p + total) |= 4;
            if (*head == next) *head = (u32 *)(*head)[3];
            if (*head == next) *head = 0;
            ((u32 *)next[3])[2] = next[2];
            ((u32 *)next[2])[3] = next[3];
        }
    } else {
        *head = b;
        b[2] = (u32)b;
        b[3] = (u32)b;
    }
    size = (*head)[0] & ~7;
    if (arena[2] < size) arena[2] = size;
    empty = 0;
    if (!(arena[4] & 2) && (arena[4] & ~7) == (arena[3] & ~7) - 0x18) empty = 1;
    if (empty) {
        link = (u32 *)arena[1];
        if (link == arena) link = 0;
        if (*(u32 **)pool == arena) *(u32 **)pool = link;
        if (link) {
            link[0] = arena[0];
            ((u32 *)link[0])[1] = (u32)link;
        }
        arena[1] = 0;
        arena[0] = 0;
        fn_800E4114((int)arena);
    }
}
#pragma pop
