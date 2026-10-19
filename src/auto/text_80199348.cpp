// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802A2388[];
extern char lbl_802A23BC[];
void fn_80060568(int, int, int, int);
u32 fn_800F8274(int, int);
u32 fn_800F9398(int, int);
u32 fn_800F9788(int, int, int);

void fn_80199348(u32 *param_1, u32 param_2, u32 param_3, s8 *param_4, s8 *param_5, s8 *param_6) {
    u32 iVar1;

    if (*param_6 != '\0') {
        if (*param_4 != '\0') {
            if ((param_5 == (s8 *)0x0) || (*param_5 == '\0')) {
                iVar1 = fn_800F9398((int)(param_2 + 0x1bc), (int)(param_4));
            }
            else {
                iVar1 = fn_800F9788((int)(param_2 + 0x1d4), (int)(param_5), (int)(param_4));
            }
            param_1[1] = iVar1;
            if (param_1[1] == 0) {
                fn_80060568((int)(lbl_802A2388), (int)(0), (int)(0), (int)(0)); /* "Atlas Scene: invalid cell graph reference in portal" */
            }
        }
        else {
            param_1[1] = param_3;
        }
        iVar1 = fn_800F8274((int)(param_1[1] + 0x30), (int)(param_6));
        *param_1 = iVar1;
        if (*param_1 == 0) {
            fn_80060568((int)(lbl_802A23BC), (int)(0), (int)(0), (int)(0)); /* "Atlas Scene: invalid cell reference in portal" */
        }
    }
}

} /* extern "C" */
