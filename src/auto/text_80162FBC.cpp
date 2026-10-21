// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct P { u8 pad[292]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void err(s32); virtual s32 get(); };

s32 fn_80162FBC(void *unused, P *p) {
    switch (p->get()) {
    default:
        p->err(30);
    case 106:
        return 0;
    case 107:
        return 1;
    case 108:
        return 2;
    case 109:
        return 3;
    case 110:
        return 4;
    case 111:
        return 5;
    case 112:
        return 6;
    case 113:
        return 7;
    case 114:
        return 12;
    case 115:
        return 13;
    case 116:
        return 14;
    case 117:
        return 15;
    case 118:
        return 16;
    case 119:
        return 17;
    case 120:
        return 18;
    case 121:
        return 19;
    case 122:
        return 20;
    case 123:
        return 21;
    case 124:
        return 22;
    case 125:
        return 23;
    case 126:
        return 24;
    case 127:
        return 25;
    case 128:
        return 26;
    case 129:
        return 27;
    case 130:
        return 28;
    case 131:
        return 29;
    case 132:
        return 30;
    case 133:
        return 31;
    }
}

} /* extern "C" */
