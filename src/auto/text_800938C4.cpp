// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern void *lbl_8035B530;
extern u8 lbl_802CAB98[];
extern void *lbl_80359394[2];
extern void *lbl_80359390[1];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
} /* extern "C" */
struct C8024262C { C8024262C(); ~C8024262C(); };
struct C800938C4 : C8024262C {
    u8 pad[300];
    C800938C4(u8 *b) {
        *(void **)this = b + 828;
        *(s32 *)(pad + 84) = 7;
        *(s32 *)(pad + 44) = 7;
        *(s32 *)(pad + 104) = 2;
        *(s32 *)(pad + 92) = 0;
        *(s32 *)(pad + 128) = 1;
        *(s32 *)(pad + 124) = 0;
        *(s32 *)(pad + 132) = 0;
        *(s32 *)(pad + 136) = 1;
        *(s32 *)(pad + 140) = 0;
        *(s32 *)(pad + 148) = 0;
        *(void **)(pad + 88) = b + 556;
        *(void **)(pad + 40) = b + 584;
        *(void **)(pad + 48) = b + 668;
        *(void **)(pad + 108) = lbl_80359394;
        *(s32 *)(pad + 120) = 0;
        *(void **)(pad + 196) = lbl_80359390;
        *(s32 *)(pad + 200) = 0;
        *(s32 *)(pad + 204) = 0;
        *(void **)(pad + 244) = b + 540;
        *(s32 *)(pad + 252) = 0;
        *(s32 *)(pad + 268) = 0;
        *(s32 *)(pad + 280) = 0;
        *(s32 *)(pad + 284) = 0;
        *(s32 *)(pad + 288) = 0;
        *(s32 *)(pad + 292) = 0;
        *(s32 *)(pad + 296) = 0;
    }
};
#pragma opt_propagation off
extern "C" {
void *fn_800938C4(void) {
    u8 *base = lbl_802CAB98;
    C800938C4 *r;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C800938C4(base);
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}

} /* extern "C" */
