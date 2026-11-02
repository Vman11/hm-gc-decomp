/* Functions from 0x801A0070 to 0x801A0098, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_80364D80;
extern f32 lbl_80364D84;
void fn_801A0070(f32 *a, f32 *b) { f32 w; f32 k; k = *(volatile f32 *)&lbl_80364D80; w = *(volatile f32 *)&a[5]; b[0]=k; b[1]=lbl_80364D80; b[2]=lbl_80364D84; b[3]=-w; }
