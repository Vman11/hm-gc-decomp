/* Functions from 0x80038474 to 0x800384A4, found by decomp-toolkit. */
#include "common.h"

void fn_80038474(void* arg0, void* arg1) {
    s32 type = *(s32*)((char*)arg1 + 0xC);
    switch (type) {
    case 0x72:
        *(f32*)((char*)arg0 + 0x8) = *(f32*)((char*)arg1 + 0x10);
        break;
    case 0x73:
        *(f32*)((char*)arg0 + 0xC) = *(f32*)((char*)arg1 + 0x10);
        break;
    }
}
