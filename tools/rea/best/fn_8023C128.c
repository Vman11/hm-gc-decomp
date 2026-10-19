// auto/text_8023C128 fn_8023C128 95.6487
extern const f32 lbl_80366048;
void fn_80101820();

void fn_8023C128(f32 *param_1, f32 *param_2) {
    f32 fVar1;

    fn_80101820(param_2);
    fVar1 = (param_1[2] * param_2[2] + *param_1 * *param_2 + param_1[1] * param_2[1]) * lbl_80366048;
    *param_1 = fVar1 * *param_2 + *param_1;
    param_1[1] = fVar1 * param_2[1] + param_1[1];
    param_1[2] = fVar1 * param_2[2] + param_1[2];
}
