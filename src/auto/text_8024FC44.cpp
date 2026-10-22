// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct Ent8024FC44 {
    u32 unk0;
    u32 unk4;
    u8 name[8];
    u8 name2[8];
    void *unk18;
    s32 unk1C;
    u32 unk20;
    s32 chance;
} Ent8024FC44;

typedef struct Tbl8024FC44 {
    u32 unk0;
    u32 unk4;
    u32 count;
    u32 unkC;
    Ent8024FC44 *ents;
} Tbl8024FC44;

extern void *lbl_8035B594;
extern u8 lbl_80366498[8];
s32 fn_800F6CD0(void *a, void *b);
void fn_800F6E88(void *s, void *name);
u32 rand(void);
void fn_8024E004(void *mgr, Ent8024FC44 *e, void *x, void *n1, void *n2);
void fn_8024DD94(void *mgr, Ent8024FC44 *e, void *x, s32 y);

void fn_8024FC44(Tbl8024FC44 *t, u8 *q) {
    u8 buf[16];
    void *mgr = lbl_8035B594;
    u32 off;
    u32 i;
    for (i = 0, off = 0; i < t->count; off += 40, i++) {
        if (fn_800F6CD0((*(Ent8024FC44 *)((u8 *)t->ents + off)).name, q + 12)) {
            if (!fn_800F6CD0((*(Ent8024FC44 *)((u8 *)t->ents + off)).name2, lbl_80366498)) {
                if (*(u8 **)(q + 20) == 0) return;
                fn_800F6E88(buf, *(u8 **)(q + 20) + 140);
                if (!fn_800F6CD0((*(Ent8024FC44 *)((u8 *)t->ents + off)).name2, buf)) return;
            }
            if ((*(Ent8024FC44 *)((u8 *)t->ents + off)).unk1C == 0) {
                if ((s32)(rand() % 100) < (*(Ent8024FC44 *)((u8 *)t->ents + off)).chance) {
                    Ent8024FC44 *e = &(*(Ent8024FC44 *)((u8 *)t->ents + off));
                    fn_8024E004(mgr, e, e->unk18, e->name, e->name2);
                }
            } else {
                Ent8024FC44 *e = &(*(Ent8024FC44 *)((u8 *)t->ents + off));
                fn_8024DD94(mgr, e, e->unk18, 1);
            }
        }
    }
}

} /* extern "C" */
