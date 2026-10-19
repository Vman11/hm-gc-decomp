// auto/text_8008CA0C fn_8008CA14 99.6939
extern "C" {

}


extern "C" int fn_8008CA14(void *arg0, u32 arg1) {
    void *p = *(void **)((u8 *)arg0 + 0x98);
    if (p != NULL) {
        return (*(int **)((u8 *)p + 0xC))[arg1];
    }
    switch (arg1) {
    case 0: return 1;
    case 1: return 1;
    case 2: return 1;
    case 3: return 1;
    case 4: return 0;
    case 5: return 0;
    case 6: return 0;
    case 7: return 0;
    case 8: return 0;
    case 9: return 0;
    case 10: return 0;
    case 11: return 0;
    case 12: return 0;
    case 13: return 0;
    case 14: return 0;
    case 15: return 0;
    default: return 1;
    }
}
