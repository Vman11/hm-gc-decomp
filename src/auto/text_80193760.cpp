// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8019B7E8(u32, void *);
struct E160 { u32 f0; u8 pad[68]; u32 f72; u8 pad2[60]; u32 f136; u8 pad3[20]; };
struct E164 { u32 f0; u8 pad[68]; u32 f72; u8 pad2[60]; u32 f136; u8 pad3[24]; };
struct E168 { u32 f0; u8 pad[68]; u32 f72; u8 pad2[60]; u32 f136; u8 pad3[28]; };
struct E172 { u32 f0; u8 pad[68]; u32 f72; u8 pad2[60]; u32 f136; u8 pad3[32]; };
struct E204 { u32 f0; u8 pad[68]; u32 f72; u8 pad2[60]; u32 f136; u8 pad3[64]; };
struct E228 { u32 f0; u8 pad[68]; u32 f72; u8 pad2[60]; u32 f136; u8 pad3[88]; };
struct E272 { u32 f0; u8 pad[68]; u32 f72; u8 pad2[60]; u32 f136; u8 pad3[132]; };
struct E308 { u32 f0; u8 pad[68]; u32 f72; u8 pad2[60]; u32 f136; u8 pad3[168]; };
void fn_80193760(u8 *p, u32 a) {
    u32 i;
    for (i = 0; i < *(u32 *)(p + 116); i++) {
        E168 *e = &(*(E168 **)(p + 184))[i];
        if ((e->f0 & 0x800) && e->f72 == 0 && e->f136 == 0) fn_8019B7E8(a, e);
    }
    for (i = 0; i < *(u32 *)(p + 120); i++) {
        E204 *e = &(*(E204 **)(p + 188))[i];
        if ((e->f0 & 0x800) && e->f72 == 0 && e->f136 == 0) fn_8019B7E8(a, e);
    }
    for (i = 0; i < *(u32 *)(p + 140); i++) {
        E228 *e = &(*(E228 **)(p + 208))[i];
        if ((e->f0 & 0x800) && e->f72 == 0 && e->f136 == 0) fn_8019B7E8(a, e);
    }
    for (i = 0; i < *(u32 *)(p + 144); i++) {
        E272 *e = &(*(E272 **)(p + 212))[i];
        if ((e->f0 & 0x800) && e->f72 == 0 && e->f136 == 0) fn_8019B7E8(a, e);
    }
    for (i = 0; i < *(u32 *)(p + 148); i++) {
        E308 *e = &(*(E308 **)(p + 216))[i];
        if ((e->f0 & 0x800) && e->f72 == 0 && e->f136 == 0) fn_8019B7E8(a, e);
    }
    for (i = 0; i < *(u32 *)(p + 152); i++) {
        E160 *e = &(*(E160 **)(p + 220))[i];
        if ((e->f0 & 0x800) && e->f72 == 0 && e->f136 == 0) fn_8019B7E8(a, e);
    }
    for (i = 0; i < *(u32 *)(p + 160); i++) {
        E168 *e = &(*(E168 **)(p + 228))[i];
        if ((e->f0 & 0x800) && e->f72 == 0 && e->f136 == 0) fn_8019B7E8(a, e);
    }
    for (i = 0; i < *(u32 *)(p + 156); i++) {
        E164 *e = &(*(E164 **)(p + 224))[i];
        if ((e->f0 & 0x800) && e->f72 == 0 && e->f136 == 0) fn_8019B7E8(a, e);
    }
    for (i = 0; i < *(u32 *)(p + 164); i++) {
        E172 *e = &(*(E172 **)(p + 232))[i];
        if ((e->f0 & 0x800) && e->f72 == 0 && e->f136 == 0) fn_8019B7E8(a, e);
    }
}

} /* extern "C" */
