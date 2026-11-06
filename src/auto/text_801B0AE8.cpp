// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

// NonMatching (wLD, DIFF 25): inline checkAll() + bool word fix param colouring;
// left: loop node n r31 vs target r26, bool word adds clrlwi (target int).

extern "C" {

struct VN {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual int Check(u8 *, u32);
};
struct VS { u8 pad[0xc]; virtual u16 charAt(u32 i); };
struct VC { u8 pad[0x34]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void notify(s32 a, void *b); };
struct Node { VN *obj; s32 flag; Node *next; };
void fn_801D8E50(u8 *p, u32 k, s32 b);
void fn_801B1D54(u8 *, u32);
#define U32(o) (*(u32 *)(p + (o)))
#define STR (*(VS **)(p + 396))

static inline bool IsSpace(u32 c) { return c == ' ' || c == '\t' || c == '\n' || c == '\r'; }
static inline bool IsAlnum(u32 c) { return (c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'); }

static inline int checkAll(u8 *p, u32 k) {
    Node *n;
    int bad = 0;
    for (n = *(Node **)(p + 136); n; n = n->next) {
        if (n->flag && n->obj->Check(p, k) == 0) bad = 1;
    }
    return bad;
}

int fn_801B0AE8(u8 *p, u32 k, s32 b) {
    switch (*(s32 *)(p + 324)) {
    case 0x10:
        fn_801D8E50(p, k, b);
        break;
    case 0x20: {
        if (checkAll(p, k)) return 0;
        if (!(U32(108) & 2)) return 0;
        if (k & 0x30) {
            u32 pos = U32(368);
            bool word = 1;
            if (pos == 0) {
                pos = 0;
            } else {
                while (pos != 0) {
                    if (!IsSpace(STR->charAt(pos - 1))) break;
                    pos--;
                }
                if (!IsAlnum(STR->charAt(pos - 1))) word = 0;
                while (pos != 0) {
                    if (word) {
                        u32 i = pos - 1;
                        if (!IsAlnum(STR->charAt(i)) && (u32)STR->charAt(i) != '_') break;
                    } else {
                        u32 i = pos - 1;
                        if (IsAlnum(STR->charAt(i)) || (u32)STR->charAt(i) == '_') break;
                    }
                    pos--;
                }
            }
            fn_801B1D54(p, pos);
            if (!(k & 3)) U32(372) = U32(368);
        } else {
            u32 c = U32(368);
            u32 a = U32(372);
            if (c != a && !(k & 3)) {
                if (c < a) U32(372) = c;
                fn_801B1D54(p, U32(372));
            } else if (c != 0) {
                fn_801B1D54(p, c - 1);
                if (!(k & 3)) U32(372) = U32(368);
            }
        }
        if (b != 0 && *(VC **)(p + 112)) (*(VC **)(p + 112))->notify(8, *(void **)(p + 104));
        break;
    }
    default: {
        if (checkAll(p, k)) return 0;
        if (b != 0 && *(VC **)(p + 112)) (*(VC **)(p + 112))->notify(8, *(void **)(p + 104));
        break;
    }
    }
    return 0;
}

} /* extern "C" */
