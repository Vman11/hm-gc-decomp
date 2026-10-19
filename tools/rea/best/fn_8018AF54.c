// auto/text_8018AF54 fn_8018AF54 98.6842
void fn_8018FD40();

void fn_8018AF54(u32 *param_1, u32 *param_2) {
    if (((*param_1 & 2) == 0) && (param_1[1] < *param_2)) {
        fn_8018FD40(param_2[1] + param_1[1] * 0x40,param_1);
    }
}
