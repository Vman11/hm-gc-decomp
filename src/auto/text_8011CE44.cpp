// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct N_CE44 { struct N_CE44 *next; struct N_CE44 *prev; int b; int c; u32 d; u32 a; void *owner; } N_CE44;
typedef struct P_CE44 { u8 pad[32]; N_CE44 *head; N_CE44 *tail; N_CE44 **arr; u8 pad2[4]; u32 n; } P_CE44;
int fn_8011DF4C(u32, N_CE44 *);
void fn_80118FC4(N_CE44 ***, N_CE44 *);
static inline N_CE44 *find_CE44(P_CE44 *p, u32 a, int b, int c, u32 d) {
    u32 i;
    for (i = 0; i < p->n; i++) {
        N_CE44 *e = p->arr[i];
        if (e->a == a && e->b == b && e->c == c && e->d == d) return e;
    }
    return 0;
}
void fn_8011CE44(P_CE44 *p, u32 a, int b, int c, u32 d) {
    N_CE44 *n;
    if (find_CE44(p, a, b, c, d)) return;
    n = p->head;
    if (n) {
        if ((p->head = n->next) != 0) p->head->prev = 0;
        else p->tail = 0;
    }
    n->a = a;
    n->b = b;
    n->c = c;
    n->d = d;
    n->owner = p;
    if (fn_8011DF4C(a, n)) {
        fn_80118FC4(&p->arr, n);
    } else {
        if ((n->next = p->head) != 0) p->head->prev = n;
        else p->tail = n;
        p->head = n;
        n->prev = 0;
    }
}

} /* extern "C" */
