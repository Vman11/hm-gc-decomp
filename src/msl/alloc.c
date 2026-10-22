/* MSL_C alloc.c */
#include "common.h"
void __sys_free(void *ptr);
void __begin_critical_region(int region);
void __end_critical_region(int region);
void fn_800E43C8(void *pool, void *ptr);
void fn_800E4420(void *pool, void *ptr, u32 size);
void fn_800E4578(void *pool, void *ptr);
void *memset(void *, int, u32);
static u8 lbl_803280A8[0x34];
static u8 lbl_8035A970;
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
static const u32 lbl_8029C048[6] = {4, 12, 20, 36, 52, 68};
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

typedef struct Block {
    struct Block *prev;
    struct Block *next;
    unsigned long max_size;
    unsigned long size;
} Block;

typedef struct SubBlock {
    unsigned long size;
    Block *bp;
    struct SubBlock *prev;
    struct SubBlock *next;
} SubBlock;

#define SubBlock_size(ths) ((ths)->size & 0xFFFFFFF8)
#define SubBlock_block(ths) ((Block *)((unsigned long)((ths)->bp) & ~0x01))
#define SubBlock_is_free(ths) !((ths)->size & 2)
#define SubBlock_set_size(ths, sz)                                                \
    {                                                                             \
        (ths)->size &= ~0xFFFFFFF8;                                               \
        (ths)->size |= (sz) & 0xFFFFFFF8;                                         \
        if (SubBlock_is_free((ths)))                                              \
            *(unsigned long *)((char *)(ths) + (sz) - sizeof(unsigned long)) = (sz); \
    }
#define SubBlock_set_free(ths)                                                         \
    {                                                                                  \
        unsigned long this_size = SubBlock_size((ths));                                \
        (ths)->size &= ~0x02;                                                          \
        *(unsigned long *)((char *)(ths) + this_size) &= ~0x04;                         \
        *(unsigned long *)((char *)(ths) + this_size - sizeof(unsigned long)) = this_size; \
    }
#define SubBlock_from_pointer(ptr) ((SubBlock *)((char *)(ptr) - 8))
#define Block_size(ths) ((ths)->size & 0xFFFFFFF8)
#define Block_start(ths) (*(SubBlock **)((char *)(ths) + Block_size((ths)) - sizeof(unsigned long)))
#define Block_empty(ths) \
    (_sb = (SubBlock *)((char *)(ths) + 16), SubBlock_is_free(_sb) && SubBlock_size(_sb) == Block_size((ths)) - 24)

typedef struct __mem_pool_obj_al {
    Block *start_;
} __mem_pool_obj_al;

static SubBlock *SubBlock_merge_prev(SubBlock *ths, SubBlock **start) {
    unsigned long prevsz;
    SubBlock *p;

    if (!(ths->size & 0x04)) {
        prevsz = *(unsigned long *)((char *)ths - sizeof(unsigned long));
        if (prevsz & 0x2)
            return ths;
        p = (SubBlock *)((char *)ths - prevsz);
        SubBlock_set_size(p, prevsz + SubBlock_size(ths));
        if (*start == ths)
            *start = (*start)->next;
        ths->next->prev = ths->prev;
        ths->next->prev->next = ths->next;
        return p;
    }
    return ths;
}

static void SubBlock_merge_next(SubBlock *pBlock, SubBlock **pStart) {
    SubBlock *next_sub_block;
    unsigned long this_cur_size;

    next_sub_block = (SubBlock *)((char *)pBlock + (pBlock->size & 0xFFFFFFF8));
    if (!(next_sub_block->size & 2)) {
        this_cur_size = (pBlock->size & 0xFFFFFFF8) + (next_sub_block->size & 0xFFFFFFF8);
        pBlock->size &= ~0xFFFFFFF8;
        pBlock->size |= this_cur_size & 0xFFFFFFF8;
        if (!(pBlock->size & 2))
            *(unsigned long *)((char *)(pBlock) + (this_cur_size)-4) = (this_cur_size);
        if (!(pBlock->size & 2))
            *(unsigned long *)((char *)pBlock + this_cur_size) &= ~4;
        else
            *(unsigned long *)((char *)pBlock + this_cur_size) |= 4;
        if (*pStart == next_sub_block)
            *pStart = (*pStart)->next;
        if (*pStart == next_sub_block)
            *pStart = 0;
        next_sub_block->next->prev = next_sub_block->prev;
        next_sub_block->prev->next = next_sub_block->next;
    }
}

static void Block_link(Block *ths, SubBlock *sb) {
    SubBlock **st;

    SubBlock_set_free(sb);
    st = &Block_start(ths);
    if (*st != 0) {
        sb->prev = (*st)->prev;
        sb->prev->next = sb;
        sb->next = *st;
        (*st)->prev = sb;
        *st = sb;
        *st = SubBlock_merge_prev(*st, st);
        SubBlock_merge_next(*st, st);
    } else {
        *st = sb;
        sb->prev = sb;
        sb->next = sb;
    }
    if (ths->max_size < SubBlock_size(*st))
        ths->max_size = SubBlock_size(*st);
}

static Block *__unlink(__mem_pool_obj_al *pool_obj, Block *bp) {
    Block *result = bp->next;

    if (result == bp)
        result = 0;
    if (pool_obj->start_ == bp)
        pool_obj->start_ = result;
    if (result != 0) {
        result->prev = bp->prev;
        result->prev->next = result;
    }
    bp->next = 0;
    bp->prev = 0;
    return result;
}

void fn_800E4578(void *pool, void *ptr) {
    __mem_pool_obj_al *pool_obj = pool;
    SubBlock *sb = SubBlock_from_pointer(ptr);
    SubBlock *_sb;
    Block *bp = SubBlock_block(sb);

    Block_link(bp, sb);
    if (Block_empty(bp)) {
        __unlink(pool_obj, bp);
        __sys_free(bp);
    }
}
