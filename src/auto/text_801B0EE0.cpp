#include "common.h"
extern "C" {
struct wA_Ed;
struct wA_L { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual s32 onKey(wA_Ed *e, u32 k); };
struct wA_LN { wA_L *l; s32 on; wA_LN *next; };
struct wA_S { u8 pad[4]; u32 b; u32 e; virtual u16 charAt(u32 i); };
inline u32 wA_len(wA_S *s) { return s->e - s->b; }
struct wA_C { u8 pad[0x34]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void notify(s32 a, void *b); };
struct wA_Ed { u8 pad0[0x68]; void *f68; u32 f6c; wA_C *f70; u8 pad74[0x14]; wA_LN *list; u8 pad8c[0xb8]; s32 mode; u8 pad148[0x28]; u32 cur; u32 anchor; u8 pad178[0x14]; wA_S *str; };
void fn_801D921C(wA_Ed *e, u32 k, s32 b);
void fn_801B1D54(wA_Ed *e, u32 pos);

inline bool wA_isSpace(u32 c) { return c == ' ' || c == '\t' || c == '\n' || c == '\r'; }
inline bool wA_isAlnum(u32 c) { return (c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'); }

inline BOOL wA_dispatch(wA_Ed *e, u32 k) {
    BOOL handled = 0;
    for (wA_LN *n = e->list; n != 0; n = n->next) {
        if (n->on != 0 && n->l->onKey(e, k) == 0) {
            handled = 1;
        }
    }
    return handled;
}

s32 fn_801B0EE0(wA_Ed *e, u32 k, s32 b) {
    BOOL word;
    u32 pos;
    switch (e->mode) {
    case 0x10:
        fn_801D921C(e, k, b);
        break;
    case 0x20: {
        if (wA_dispatch(e, k)) {
            return 0;
        }
        if (!(e->f6c & 2)) {
            return 0;
        }
        if (k & 0x30) {
            word = 1;
            u32 c = e->cur;
            if (c == wA_len(e->str)) {
                c = e->cur;
            } else {
                if (!wA_isAlnum(e->str->charAt(c))) {
                    word = 0;
                }
                for (pos = e->cur; pos < wA_len(e->str); pos++) {
                    if (word) {
                        if (!wA_isAlnum(e->str->charAt(pos)) && (u32)e->str->charAt(pos) != '_') break;
                    } else {
                        if (wA_isAlnum(e->str->charAt(pos)) || (u32)e->str->charAt(pos) == '_') break;
                    }
                }
                while (pos < wA_len(e->str)) {
                    if (!wA_isSpace(e->str->charAt(pos))) break;
                    pos++;
                }
                c = pos;
            }
            fn_801B1D54(e, c);
            if (!(k & 3)) {
                e->anchor = e->cur;
            }
        } else {
            u32 p = e->cur;
            u32 q = e->anchor;
            if (p != q && !(k & 3)) {
                if (p > q) {
                    e->anchor = p;
                }
                fn_801B1D54(e, e->anchor);
            } else if (p != wA_len(e->str)) {
                fn_801B1D54(e, p + 1);
                if (!(k & 3)) {
                    e->anchor = e->cur;
                }
            }
        }
        if (b != 0 && e->f70 != 0) {
            e->f70->notify(4, e->f68);
        }
        break;
    }
    default: {
        if (wA_dispatch(e, k)) {
            return 0;
        }
        if (b != 0 && e->f70 != 0) {
            e->f70->notify(4, e->f68);
        }
        break;
    }
    }
    return 0;
}
}
