// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Buf80109E0C {
    u32 unk0;
    u8 *start;
    u8 *end;
    u32 Size() { return end - start; }
};

int memcmp(const void *a, const void *b, u32 n);

struct C80109E0C {
    u32 unk0;
    u32 unk4;
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void *GetData(s32 x);
    Buf80109E0C buf0;
    u8 pad18[8];
    Buf80109E0C buf1;
    u8 pad2C[8];
    s32 which;

    Buf80109E0C *GetBuf() { return which != 0 ? &buf1 : &buf0; }
    u32 Size() { return GetBuf()->Size(); }
};

s32 fn_80109E0C(C80109E0C *a, C80109E0C *b) {
    void *pa = a->GetData(0);
    void *pb = b->GetData(0);
    u32 sa = a->Size();
    if (sa != b->Size()) return 0;
    if (memcmp(pa, pb, a->Size()) == 0) return 1;
    return 0;
}

} /* extern "C" */
