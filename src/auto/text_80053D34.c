// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { unsigned int v[3]; } V3;
struct PB { unsigned char pad[288]; int f120; unsigned char pad2[348-292]; void *f15c; };
void fn_80107244(void *, void *);
void fn_80053D9C(struct PB *, V3 *, float);
extern volatile float lbl_8035E000;
void fn_80053D34(struct PB *p) { if (p->f120) { volatile V3 t; volatile V3 c; unsigned int d,b,a; fn_80107244(p->f15c, (void*)&t); a=t.v[0]; b=t.v[1]; d=t.v[2]; c.v[0]=a; c.v[1]=b; c.v[2]=d; fn_80053D9C(p, (V3*)&c, lbl_8035E000); } }
