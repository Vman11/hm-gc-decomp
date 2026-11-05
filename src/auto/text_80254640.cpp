#include "common.h"
extern "C" {
struct E0 { u32 flags; u8 pad[104]; };
struct E1 { u32 flags; u8 pad[108]; };
struct E2 { u32 flags; u8 pad[112]; };
struct E3 { u32 flags; u8 pad[200]; };
struct E4 { u32 flags; u8 pad[164]; };
struct E5 { u32 flags; u8 pad[224]; };
struct E6 { u32 flags; u8 pad[304]; };
struct E7 { u32 flags; u8 pad[268]; };
struct E8 { u32 flags; u8 pad[156]; };
struct E9 { u32 flags; u8 pad[164]; };
struct E10 { u32 flags; u8 pad[160]; };
struct O { u8 p0[104]; u32 n104; u32 n108; u8 p112[4]; u32 n116; u32 n120; u8 p124[16]; u32 n140; u32 n144; u32 n148; u32 n152; u32 n156; u32 n160; u8 p164[4]; u32 n168; E0 *a172; E2 *a176; u8 p180[4]; E4 *a184; E3 *a188; u8 p192[16]; E5 *a208; E7 *a212; E6 *a216; E8 *a220; E10 *a224; E9 *a228; u8 p232[4]; E1 *a236; };
typedef void (*CB)(void *, void *);
struct Self;
void fn_80254640(Self *s_, void *o_, void *cb_) {
    O *o = (O *)o_;
    CB cb = (CB)cb_;
    void *self = s_;
//P{
    u32 i;
    u32 k;
    u32 n;
//P}
    n = o->n104;
    for (i = 0, k = 0; i < n; k++) {
        E0 *e = &o->a172[k];
        if (e && (e->flags & 1)) { cb(self, e); i++; }
    }
    n = o->n168;
    for (i = 0, k = 0; i < n; k++) {
        E1 *e = &o->a236[k];
        if (e && (e->flags & 1)) { cb(self, e); i++; }
    }
    n = o->n108;
    for (i = 0, k = 0; i < n; k++) {
        E2 *e = &o->a176[k];
        if (e && (e->flags & 1)) { cb(self, e); i++; }
    }
    n = o->n120;
    for (i = 0, k = 0; i < n; k++) {
        E3 *e = &o->a188[k];
        if (e && (e->flags & 1)) { cb(self, e); i++; }
    }
    n = o->n116;
    for (i = 0, k = 0; i < n; k++) {
        E4 *e = &o->a184[k];
        if (e && (e->flags & 1)) { cb(self, e); i++; }
    }
    n = o->n140;
    for (i = 0, k = 0; i < n; k++) {
        E5 *e = &o->a208[k];
        if (e && (e->flags & 1)) { cb(self, e); i++; }
    }
    n = o->n148;
    for (i = 0, k = 0; i < n; k++) {
        E6 *e = &o->a216[k];
        if (e && (e->flags & 1)) { cb(self, e); i++; }
    }
    n = o->n144;
    for (i = 0; i < n; k++) {
        E7 *e = &o->a212[k];
        if (e && (e->flags & 1)) { cb(self, e); i++; }
    }
    n = o->n152;
    for (i = 0, k = 0; i < n; k++) {
        E8 *e = &o->a220[k];
        if (e && (e->flags & 1)) { cb(self, e); i++; }
    }
    n = o->n160;
    for (i = 0, k = 0; i < n; k++) {
        E9 *e = &o->a228[k];
        if (e && (e->flags & 1)) { cb(self, e); i++; }
    }
    n = o->n156;
    for (i = 0, k = 0; i < n; k++) {
        E10 *e = &o->a224[k];
        if (e && (e->flags & 1)) { cb(self, e); i++; }
    }
}
}
