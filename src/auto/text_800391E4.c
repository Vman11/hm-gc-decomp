// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { u8 pad[0x1c4]; void *o; } G800391E4;
extern G800391E4 *lbl_8035B684;
extern void *lbl_8035A1DC;
extern char lbl_80294D60[];
void fn_80060664(void *a);
void fn_80060748(void *a);
void fn_800F6FBC(char *s, u8 *buf);
void fn_80249A18(void *o, u8 *buf);
typedef struct { u8 pad[0x14]; s32 v; } S800391E4;
void fn_800391E4(S800391E4 *p, s32 v) { u8 buf[16]; G800391E4 *g = lbl_8035B684; void *o; if (g->o == 0) return; o = g->o; p->v = v; if (v == 0) { fn_80060664(lbl_8035A1DC); return; } fn_800F6FBC(lbl_80294D60, buf); fn_80249A18(o, buf); fn_80060748(lbl_8035A1DC); }
