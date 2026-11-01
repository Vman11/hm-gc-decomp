// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

static char d0[540] = {1};
static char d540[20] = {1};
static char d560[96] = {1};
static char d656[36] = {1};
static char d692[144] = {1};
static char d836[128] = {1};
static char d964[120] = {1};
static char d1084[52] = {1};
static char d1136[156] = {1};
static char d1292[456] = {1};
static char d1748[52] = {1};
void *keep[]={d0};
extern f32 lbl_80360904;
typedef struct T {
    char p0[40]; void *f28; int f2C; void *f30; char p34[84-52]; int f54; void *f58; int f5C; char p60[104-96]; int f68; void *f6C;
    char p70[120-112]; void *f78; int f7C; int f80; int f84; int f88; int f8C; char p90[4]; int f94; char p98[196-152];
    void *fC4; void *fC8; void *fCC; char pD0[244-208]; void *fF4; char pF8[4]; int fFC; char p100[268-256]; void *f10C;
    char p110[280-272]; int a[18]; char p160[364-352]; int f16C; int f170; f32 f174;
} T;
void fn_80090844(T *t) {
    int i;
    t->f54 = 39;
    t->f2C = 38;
    t->f68 = 13;
    t->f5C = 8;
    t->f80 = 5;
    t->f7C = 8;
    t->f84 = 3;
    t->f88 = 9;
    t->f8C = 0;
    t->f94 = 6;
    t->f58 = d1136;
    t->f28 = d1292;
    t->f30 = d1748;
    t->f6C = d1084;
    t->f78 = d836;
    t->fC4 = d540;
    t->fC8 = d560;
    t->fCC = d656;
    t->fF4 = d692;
    t->fFC = 0;
    t->f10C = d964;
    for (i = 0; i < 18; i++) t->a[i] = 0;
    t->f16C = 0;
    t->f170 = 0;
    t->f174 = lbl_80360904;
}
