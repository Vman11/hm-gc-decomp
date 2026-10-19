// auto/text_80205504 fn_80205504 98.7903
void fn_800BD810();
s32 fn_800BFAA8();
extern void *memset(void *, int, unsigned long);

void fn_80205504(u32 param_1, s32 param_2) {
    u32 uVar1;
    u32 uVar2;
    s32 iVar3;
    s32 iVar4;
    s32 iVar5;

    iVar4 = *(s32 *)(param_2 + 0x2c);
    iVar3 = *(s32 *)(iVar4 + 0x44);
    uVar1 = iVar3 + 0x1fU & 0xffffffe0;
    uVar2 = *(s32 *)(iVar4 + 0x48) + 0x1fU & 0xffffffe0;
    memset((void *)(*(s32 *)(iVar4 + 0x4c) + iVar3),0,uVar1 - iVar3);
    iVar5 = *(s32 *)(iVar4 + 0x4c) + uVar1;
    iVar3 = fn_800BFAA8(iVar4 + 0x70);
    if (iVar3 == 0) {
        fn_800BD810(iVar4 + 0x70,iVar5,uVar2,0,0,2);
    }
    else {
        iVar3 = fn_800BFAA8(iVar4 + 0xac);
        if (iVar3 == 0) {
            fn_800BD810(iVar4 + 0xac,iVar5,uVar2,0,0,2);
        }
        else {
            iVar3 = fn_800BFAA8(iVar4 + 0xe8);
            if (iVar3 == 0) {
                fn_800BD810(iVar4 + 0xe8,iVar5,uVar2,0,0,2);
            }
        }
    }
}
