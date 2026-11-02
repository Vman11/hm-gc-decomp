// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct VO { u8 pad[128];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void v18(); virtual u32 Type();
};
struct Ent { u32 res; char a[8]; char b[8]; };
struct P {
    u8 pad[116]; u32 f116; u8 pad2[24];
    Ent e144, e164, e184, e204, e224, e244, e264;
    u32 f284; u32 f288; char nm[8]; char ty[8]; P *next; P *head;
    u8 pad3[36]; u8 *f352;
};
extern char lbl_8036525C[4];
extern char lbl_802A3694[];
void fn_800F6E88(char *, u32);
int strcmp(const char *, const char *);
u32 fn_801AA960(u32, char *, char *);
int fn_800F6CD0(char *, char *);
void fn_801AA8AC(u32, P *, char *, char *);
void fn_800E8F6C(char *, char *, ...);
#define RES(e) if (p->e.a[0]) { if (strcmp(p->e.b, lbl_8036525C) == 0) p->e.res = fn_801AA960(p->f116, p->e.a, buf16); else p->e.res = fn_801AA960(p->f116, p->e.a, p->e.b); }
static inline void Look(P *p, char *nm, char *ty) { if (nm) p->f284 = fn_801AA960(p->f116, nm, ty); }
int fn_801DBACC(P *p) {
    char buf16[8];
    char buf8[8];
    char msg[256];
    fn_800F6E88(buf16, *(u32 *)(p->f352 + 12));
    RES(e224)
    RES(e244)
    RES(e264)
    RES(e184)
    RES(e204)
    RES(e144)
    RES(e164)
    if (fn_800F6CD0(p->ty, buf16) == 0 || p->f288 == p->f284) {
        P *o;
        Look(p, p->nm, p->ty);
        o = (P *)p->f284;
        if (o) {
            P *q;
            p->f284 = (u32)o;
            q = o->head;
            if (q == 0) {
                o->head = p;
            } else {
                for (; q->next; q = q->next)
                    if (((VO *)q->next)->Type() == 95) break;
                p->next = q->next;
                q->next = p;
            }
        }
    }
    if (p->f288 && p->f288 == p->f284) {
        fn_801AA8AC(p->f116, p, buf8, buf16);
        fn_800E8F6C(msg, lbl_802A3694, buf8, p->nm, buf16);
    }
    return 0;
}

} /* extern "C" */
