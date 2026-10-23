// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern u8 lbl_802E28C8[];
void fn_8010CB34(void *, s32, s32, s32);
void __ct__9C8010CE30Fv(void *);
} /* extern "C" */

struct B8010CE30 {
    u8 pad[24];
    void *vt;
    B8010CE30() {
        __ct__9C8010CE30Fv(this);
    }
    ~B8010CE30();
};

struct C8010CE30 : B8010CE30 {
    void *owner;
    s32 f32;
    s32 f36;
    s32 f40;
    s32 f44;
    C8010CE30() {
        vt = lbl_802E28C8;
    }
    ~C8010CE30();
};

struct E80111028 {
    s32 a, b, c, d, e, f, g, h;
    void Clear() { a = 0; b = 4; c = 0; d = 0; e = 0; f = 0; g = 0; h = 0; }
    void Init(int n) { Clear(); a = 0; b = 0; c = n; }
};

struct C80111028 {
    u8 pad0[8];
    C8010CE30 m;
    E80111028 arr[13];
    s32 f472, f476, f480, f484, f488;
    C80111028();
    void InitArr() {
        int i;
        for (i = 0; i < 13; i++) {
            arr[i].Clear();
            arr[i].Init(i);
        }
    }
    virtual ~C80111028();
};

C80111028::C80111028() {
    m.f32 = 0;
    m.f40 = 0;
    fn_8010CB34(&m, 0, 0, 0);
    m.owner = this;
    m.f44 = 0;
    InitArr();
    f488 = 0;
    f476 = 0;
    f484 = 0;
}

extern "C" {

} /* extern "C" */
