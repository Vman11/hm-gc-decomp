// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"

class C80243F5C;
extern "C" void fn_802439BC(C80243F5C *);

class C80243F5C {
public:
    u32 f0;
    u8 f4;
    u8 pad5[7];
    u8 fc;
    u8 padd[7];
    u32 f14;
    u8 *f18;
    u32 f1c;
    C80243F5C *f20;
    C80243F5C *f24;
    u32 f28;
    ~C80243F5C() { fn_802439BC(this); }
};

extern "C" {

inline void fn_80243990(C80243F5C *n) {
    n->f0 = 0;
    n->f4 = 0;
    n->fc = 0;
    n->f14 = 0;
    n->f18 = 0;
    n->f1c = 0;
    n->f20 = 0;
    n->f24 = 0;
    n->f28 = 0;
}

void fn_802439BC(C80243F5C *n) {
    if (n->f20) {
        fn_802439BC(n->f20);
        delete n->f20;
    }
    if (n->f24) {
        fn_802439BC(n->f24);
        delete n->f24;
    }
    if (n->f18) delete[] n->f18;
    fn_80243990(n);
}

}

} /* extern "C" */
