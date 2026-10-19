// auto/text_800919A4 fn_800919A4 99.5455
extern "C" {

}


extern "C" int fn_800919A4(void *arg0, u32 arg1) {
    void *p = *(void **)((u8 *)arg0 + 0x98);
    if (p != NULL) {
        return (*(int **)((u8 *)p + 0xC))[arg1];
    }
    switch (arg1) {
    case 0: return 1;
    case 1: return 1;
    case 2: return 0;
    case 3: return 1;
    case 4: return 0;
    case 5: return 0;
    case 6: return 1;
    case 7: return 0;
    default: return 1;
    }
}
