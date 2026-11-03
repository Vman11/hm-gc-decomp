// fn_800F61A0: script tokenizer (C800F5578 lexer), plus the class vtable (owns its .data).
#include "common.h"

struct Reader {
    u8 pad[12];
    u8 *cur;
    u8 *end;
    s32 line;
    virtual void v0();
    virtual s32 Refill();
};
struct KW { s32 tok; char *name; };
struct Lexer {
    Reader *rd;
    s32 pushed;
    s32 tok;
    s32 ival;
    f32 fval;
    char str[256];
    u32 slen;
    s32 esc;
    u8 pad11c[8];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void Error(s32);
    char ident[64];
    u32 nkw;
    u8 pad16c[4];
    KW *kw[331];
};
extern "C" {
extern s32 lbl_8029C880[];
extern u8 lbl_802E07C8[];
void __dt__9C800F5578Fv(void);
void fn_800FB39C(void);
void fn_800F5F40(void);
void fn_800FAAA8(void);
void fn_800FA9B0(void);
s32 fn_800F61A0(Lexer *l);
void fn_800F5EC0(void);
void fn_800F5E44(void);
void fn_800F5DBC(void);
void fn_800F5D28(void);
void fn_800F5C4C(void);
void fn_800F5BC8(void);
void fn_800F5B98(void);
void fn_800F5B68(void);
void fn_800F5B38(void);
void fn_800F5B08(void);
void fn_800F5AD8(void);
void fn_800F5AA8(void);
void fn_800F5A78(void);
void fn_800F5A48(void);
void fn_800F5A18(void);
void fn_800F59E8(void);
void fn_800F59B8(void);
void fn_800F5988(void);
void fn_800F5958(void);
void fn_800F5928(void);
void fn_800F58F8(void);
void fn_800F58C8(void);
void fn_800F5898(void);
void fn_800F5868(void);
void fn_800F5838(void);
void fn_800F5808(void);
void fn_800F57D8(void);
void fn_800F57A8(void);
void fn_800F5778(void);
void fn_800F5738(void);
void fn_800F5710(void);
void fn_800F56B4(void);
void fn_800F568C(void);
void fn_800F5630(void);
void fn_800F55E0(void);
void fn_800F5BF8(void);
void fn_800F55D8(void);
extern f32 lbl_803636C8;
extern f32 lbl_803636CC;
void *__vt__9C800F5578[45] = {
    0,
    0,
    (void *)__dt__9C800F5578Fv,
    (void *)fn_800FB39C,
    (void *)fn_800F5F40,
    (void *)fn_800FAAA8,
    (void *)fn_800FA9B0,
    (void *)fn_800F61A0,
    (void *)fn_800F5EC0,
    (void *)fn_800F5E44,
    (void *)fn_800F5DBC,
    (void *)fn_800F5D28,
    (void *)fn_800F5C4C,
    (void *)fn_800F5BC8,
    (void *)fn_800F5B98,
    (void *)fn_800F5B68,
    (void *)fn_800F5B38,
    (void *)fn_800F5B08,
    (void *)fn_800F5AD8,
    (void *)fn_800F5AA8,
    (void *)fn_800F5A78,
    (void *)fn_800F5A48,
    (void *)fn_800F5A18,
    (void *)fn_800F59E8,
    (void *)fn_800F59B8,
    (void *)fn_800F5988,
    (void *)fn_800F5958,
    (void *)fn_800F5928,
    (void *)fn_800F58F8,
    (void *)fn_800F58C8,
    (void *)fn_800F5898,
    (void *)fn_800F5868,
    (void *)fn_800F5838,
    (void *)fn_800F5808,
    (void *)fn_800F57D8,
    (void *)fn_800F57A8,
    (void *)fn_800F5778,
    (void *)fn_800F5738,
    (void *)fn_800F5710,
    (void *)fn_800F56B4,
    (void *)fn_800F568C,
    (void *)fn_800F5630,
    (void *)fn_800F55E0,
    (void *)fn_800F5BF8,
    (void *)fn_800F55D8,
};
s32 fn_800FA074(Reader *);
s32 fn_800FA118(Reader *);

static inline s32 UP(s32 c) { return c == -1 ? -1 : lbl_802E07C8[(u8)c]; }

static inline void Lookup(Lexer *l) {
    u32 h;
    u32 sh;
    char *p;
    KW *e;
    if (l->nkw == 0) l->Error(0x21);
    h = 0;
    sh = 0;
    for (p = l->ident; *p; p++) {
        h += (*p - '0') << (sh & 31);
        sh += 6;
    }
    h %= 331;
    while (l->kw[h] != 0) {
        char *s = l->ident;
        char *n = l->kw[h]->name;
        while (*s == UP(*n)) {
            if (*s == 0) {
                l->tok = l->kw[h]->tok;
                return;
            }
            s++;
            n++;
        }
        h++;
        if (h >= 331) h = 0;
    }
    l->tok = 1;
}

static inline s32 Get(Reader *r, u32 *c) {
    s32 ok;
    if (!(r->cur < r->end || r->Refill())) {
        ok = 0;
    } else {
        ok = 1;
        *c = *r->cur++;
    }
    return ok;
}
s32 fn_800F61A0(Lexer *l) {
    u32 c;
    s32 state;
    u32 len;
    s32 neg;
    f32 scale;
    c = 0;
    if (l->pushed) {
        l->pushed = 0;
        return l->tok;
    }
    scale = lbl_803636C8;
    neg = 0;
    len = 0;
    l->tok = 0;
    if (!fn_800FA074(l->rd)) return 0;
    state = 0;
    while (Get(l->rd, &c)) {
        switch (state) {
        case 0:
            if (c < 0x21 || c > 0x7e) l->Error(0);
            { u32 i = c - 0x21; l->tok = lbl_8029C880[i]; }
            switch (l->tok) {
            case 2:
                l->slen = 0;
                state = 8;
                break;
            case 3:
                l->fval = lbl_803636CC;
                state = 4;
                break;
            case 4:
                l->ival = c - '0';
                state = 2;
                break;
            case 0x15:
                state = 7;
                break;
            case 0x29:
                l->ival = 0;
                state = 1;
                break;
            case 0x2a:
                l->ival = 0;
                state = 5;
                neg = 1;
                break;
            case 0x39:
                c = UP((s32)c);
                l->ident[0] = c;
                state = 6;
                len = 1;
                break;
            case 1:
                l->Error(0);
                break;
            default:
                return l->tok;
            }
            break;
        case 1:
            if (c == 'x' || c == 'X') {
                state = 3;
                break;
            }
        case 2:
            if (c >= '0' && c <= '9') {
                l->ival *= 10;
                l->ival += (s32)c - '0';
            } else if (c == '.') {
                l->fval = (f32)l->ival;
                state = 4;
            } else {
                l->rd->cur--;
                if (neg) l->ival = -l->ival;
                return l->tok = 4;
            }
            break;
        case 3:
            if (c >= '0' && c <= '9') {
                l->ival <<= 4;
                l->ival += (s32)c - '0';
            } else {
                c = UP((s32)c);
                if (c >= 'A' && c <= 'F') {
                    l->ival <<= 4;
                    l->ival += (s32)c - 0x37;
                } else {
                    l->rd->cur--;
                    if (neg) l->ival = -l->ival;
                    return l->tok = 4;
                }
            }
            break;
        case 4:
            if (c >= '0' && c <= '9') {
                l->fval = scale * (f32)(s32)(c - '0') + l->fval;
                scale = lbl_803636C8 * scale;
            } else {
                if (c == '.') l->Error(0);
                l->rd->cur--;
                if (neg) l->fval = -l->fval;
                return l->tok = 3;
            }
            break;
        case 5:
            if (c >= '1' && c <= '9') {
                l->ival = c - '0';
                state = 2;
            } else {
                switch (c) {
                case '.':
                    l->fval = lbl_803636CC;
                    state = 4;
                    break;
                case '0':
                    l->ival = 0;
                    state = 1;
                    break;
                default:
                    l->rd->cur--;
                    return l->tok;
                }
            }
            break;
        case 6:
            c = UP((s32)c);
            if ((c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') || c == '_') {
                if (len >= 0x3f) l->Error(0x21);
                l->ident[len++] = c;
            } else {
                l->ident[len] = 0;
                l->rd->cur--;
                Lookup(l);
                return l->tok;
            }
            break;
        case 7:
            if (c == '/') {
                if (!fn_800FA118(l->rd)) return 0;
                if (!fn_800FA074(l->rd)) return 0;
                state = 0;
            } else {
                l->rd->cur--;
                return l->tok;
            }
            break;
        case 8:
            if (c == '"') {
                l->str[l->slen] = 0;
                return 2;
            }
            if (c == '\\' && l->esc) {
                state = 9;
            } else {
                if (l->slen >= 0xff) l->Error(0x22);
                l->str[l->slen++] = c;
            }
            break;
        case 9:
            if (l->slen >= 0xff) l->Error(0x22);
            switch (c) {
            case 'n':
            case 'N':
                l->str[l->slen] = '\n';
                break;
            case 't':
            case 'T':
                l->str[l->slen] = '\t';
                break;
            case '"':
                l->str[l->slen] = '"';
                break;
            case '\\':
                l->str[l->slen] = '\\';
                break;
            default:
                l->Error(0x22);
                break;
            }
            l->slen++;
            state = 8;
            break;
        }
    }
    switch (state) {
    case 0:
        return 0;
    case 1:
        return l->tok = 4;
    case 2:
    case 3:
        if (neg) l->ival = -l->ival;
        return l->tok = 4;
    case 4:
        if (neg) l->fval = -l->fval;
        return l->tok = 3;
    case 5:
        l->Error(0);
        return 1;
    case 6:
        l->ident[len] = 0;
        Lookup(l);
        return l->tok;
    case 7:
        l->Error(0);
        return 1;
    case 8:
    case 9:
        l->Error(0x22);
        return 1;
    }
    return 0;
}
}
