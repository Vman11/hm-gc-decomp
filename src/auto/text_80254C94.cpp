// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802A98A4[];
extern s32 lbl_8035B334;
extern s32 lbl_8035B7BC;
void fn_80228CB4(void);
void fn_8022EAB4(int);
void fn_8023CD8C(int);
void fn_8026C530(int, int);

void fn_80254C94(s32 param_1) {
    fn_8023CD8C((int)(lbl_802A98A4)); /* "GmAcNode" */
    fn_80228CB4();
    fn_8022EAB4((int)(*(u32 *)(lbl_8035B334 + 8)));
    fn_8026C530((int)(lbl_8035B7BC), (int)(*(u32 *)(param_1 + 0x14)));
}

} /* extern "C" */
