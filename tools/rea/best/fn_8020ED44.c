// auto/text_8020ED44 fn_8020ED44 95.5172
extern char lbl_802A6DC4[];
void fn_80060568();

void fn_8020ED44(s32 *param_1, u32 param_2, u32 param_3) {
    if (param_2 >= (u32)param_1[2]) {
        fn_80060568((void *)lbl_802A6DC4,0,0,0); /* "AtIoDirectoryListing::vSetFileSize:  offset out of bounds!\n" */
    }
    *(u32 *)(*param_1 + param_2 * 0x1c + 8) = param_3;
}
