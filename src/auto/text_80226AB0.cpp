// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
void *__construct_array(void *p, void (*ctor)(void *), void (*dtor)(void *), u32 size, u32 n);
void fn_80226BDC(void *);
void fn_8017BB64(void *);
} /* extern "C" */

struct ElemPOD { u32 f0; u8 pad[12]; };

struct ArrHolder {
    u32 f0;
    ElemPOD arr[662];
    ArrHolder() { __construct_array(arr, fn_80226BDC, 0, 16, 662); }
    void Clear() { f0 = 0; for (u32 i = 0; i < 662; i++) arr[i].f0 = 0; }
};

struct C8017F180 { C8017F180(); ~C8017F180(); u8 pad[20]; };

struct M8017BB64 { u8 pad[4]; M8017BB64() { fn_8017BB64(this); } };

struct C80226AB0 : ArrHolder {
    C8017F180 m10596;
    u32 f10616;
    u32 f10620;
    M8017BB64 m10624;
    C80226AB0();
};

C80226AB0::C80226AB0() {
    Clear();
    f10616 = 0;
    f10620 = 0;
}
extern "C" {

} /* extern "C" */
