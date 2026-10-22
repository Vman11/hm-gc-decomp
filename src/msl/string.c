/* MSL_C string.c */
#include "common.h"
char *strcpy(char *, const char *);
char *strncpy(char *dst, const char *src, u32 n);
unsigned int strlen(const char *s);
char *strchr(const char *str, int chr);
extern unsigned char* lbl_803596A8;
extern unsigned char* lbl_803596AC;
typedef unsigned int size_t;
char* strstr(const char* str, const char* pat);
char* strtok(char* str, const char* set);
char* strrchr(const char* str, int chr);
int strncmp(const char* str1, const char* str2, unsigned long n);
int strcmp(const char *str1, const char *str2);
char* strncat(char* dst, const char* src, u32 n);
char* strcat(char* dst, const char* src);

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
char* strstr(const char* str, const char* pat) {
    unsigned char* s1 = (unsigned char*)str - 1;
    unsigned char* p1 = (unsigned char*)pat - 1;
    unsigned long firstc, c1, c2;

    if ((pat == 0) || (!(firstc = *++p1))) {
        return (char*)str;
    }
    while (c1 = *++s1) {
        if (c1 == firstc) {
            const unsigned char* s2 = s1 - 1;
            const unsigned char* p2 = p1 - 1;

            while ((c1 = *++s2) == (c2 = *++p2) && c1)
                ;
            if (!c2) {
                return (char*)s1;
            }
        }
    }
    return 0;
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
char* strtok(char* str, const char* set) {
    unsigned char *p, *n;
    int c;
    unsigned char map[32] = {0};

    if (str) {
        lbl_803596AC = (unsigned char*)str;
    }

    p = (unsigned char*)set - 1;
    while (c = *++p) {
        map[(unsigned char)c >> 3] |= (1 << (c & 7));
    }

    p = lbl_803596AC - 1;
    while (c = *++p) {
        if (!(map[(unsigned char)c >> 3] & (1 << (c & 7)))) {
            break;
        }
    }

    if (!c) {
        lbl_803596AC = lbl_803596A8;
        return NULL;
    }

    n = p;
    while (c = *++p) {
        if (map[(unsigned char)c >> 3] & (1 << (c & 7))) {
            break;
        }
    }

    if (!c) {
        lbl_803596AC = lbl_803596A8;
        return (char*)n;
    }

    lbl_803596AC = p + 1;
    *p = 0;
    return (char*)n;
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
char* strrchr(const char* str, int chr) {
    const unsigned char* p = (unsigned char*)str - 1;
    const unsigned char* q = 0;
    unsigned long c = (chr & 0xff);
    unsigned long ch;

    while (ch = *++p) {
        if (ch == c) {
            q = p;
        }
    }
    if (q) {
        return (char*)q;
    }
    return c ? 0 : (char*)p;
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
char* strchr(const char* str, int chr) {
    const unsigned char* p = (unsigned char*)str - 1;
    unsigned long c = (chr & 0xff);
    unsigned long ch;

    while (ch = *++p) {
        if (ch == c) {
            return (char*)p;
        }
    }
    return c ? 0 : (char*)p;
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
int strncmp(const char* str1, const char* str2, unsigned long n) {
    const unsigned char* p1 = (unsigned char*)str1 - 1;
    const unsigned char* p2 = (unsigned char*)str2 - 1;
    unsigned long c1, c2;

    n++;
    while (--n) {
        if ((c1 = *++p1) != (c2 = *++p2)) {
            return c1 - c2;
        } else if (!c1) {
            break;
        }
    }
    return 0;
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
int strcmp(const char *str1, const char *str2) {
    register unsigned char *left = (unsigned char *)str1;
    register unsigned char *right = (unsigned char *)str2;
    unsigned long align, l1, r1, x;

    l1 = *left;
    r1 = *right;
    if (l1 - r1) {
        return (l1 - r1);
    }

    if ((align = ((int)left & 3)) != ((int)right & 3)) {
        goto bytecopy;
    }
    if (align) {
        if (l1 == 0) {
            return 0;
        }
        for (align = 3 - align; align; align--) {
            l1 = *(++left);
            r1 = *(++right);
            if (l1 - r1) {
                return (l1 - r1);
            }
            if (l1 == 0) {
                return 0;
            }
        }
        left++;
        right++;
    }

    l1 = *(int *)left;
    r1 = *(int *)right;
    x = l1 + 0xFEFEFEFF;
    if (x & 0x80808080) {
        goto adjust;
    }
    while (l1 == r1) {
        l1 = *(++((int *)(left)));
        r1 = *(++((int *)(right)));
        x = l1 + 0xFEFEFEFF;
        if (x & 0x80808080) {
            goto adjust;
        }
    }
    if (l1 > r1) {
        return 1;
    }
    return -1;

adjust:
    l1 = *left;
    r1 = *right;
    if (l1 - r1) {
        return (l1 - r1);
    }
bytecopy:
    if (l1 == 0) {
        return 0;
    }
    do {
        l1 = *(++left);
        r1 = *(++right);
        if (l1 - r1) {
            return (l1 - r1);
        }
        if (l1 == 0) {
            return 0;
        }
    } while (1);
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
char* strncat(char* dst, const char* src, u32 n) {
    const unsigned char* p = (const unsigned char*)src - 1;
    unsigned char* q = (unsigned char*)dst - 1;
    while (*++q);
    q--;
    n++;
    while (--n) {
        if (!(*++q = *++p)) {
            q--;
            break;
        }
    }
    *++q = 0;
    return dst;
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
char* strcat(char* dst, const char* src) {
    const unsigned char* p = (const unsigned char*)src - 1;
    unsigned char* q = (unsigned char*)dst - 1;
    while (*++q);
    q--;
    while (*++q = *++p);
    return dst;
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
char* strncpy(char* dst, const char* src, u32 n) {
    const unsigned char* p = (const unsigned char*)src - 1;
    unsigned char* q = (unsigned char*)dst - 1;
    n++;
    while (--n) {
        if (!(*++q = *++p)) {
            while (--n) *++q = 0;
            break;
        }
    }
    return dst;
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
char* strcpy(char* dst, const char* src) {
    char* ret = dst;
    u8* d = (u8*)dst;
    const u8* s = (const u8*)src;
    u32 align;
    u32 dstAlign;
    u32 c;
    u32 word;
    u32 mask;

    dstAlign = (u32)d & 3;
    if (dstAlign != (align = (u32)s & 3)) {
        goto adjust;
    }

    if (align != 0) {
        c = *s;
        *d = c;
        if (c == 0) {
            return ret;
        }
        for (align = 3 - align; align != 0; align--) {
            c = *++s;
            *++d = c;
            if (c == 0) {
                return ret;
            }
        }
        d++;
        s++;
    }

    word = *(const u32*)s;
    mask = 0x80808080;
    if (((word - 0x01010101) & mask) != 0) {
        goto adjust;
    }

    d -= 4;
    do {
        *(u32*)(d += 4) = word;
        word = *(const u32*)(s += 4);
    } while (((word - 0x01010101) & mask) == 0);
    d += 4;

adjust:
    c = *s;
    *d = c;
    if (c == 0) {
        return ret;
    }

    do {
        c = *++s;
        *++d = c;
    } while (c != 0);

    return ret;
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
size_t strlen(const char* s) {
    const unsigned char* p = (const unsigned char*)s - 1;
    size_t n = -1;
    do {
        n++;
    } while (*++p != 0);
    return n;
}
#pragma pop
