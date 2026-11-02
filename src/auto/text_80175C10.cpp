// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct M { u32 a, b, c, d, e, f, g, h; };
struct O { u8 p[12];
  virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03(); virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07(); virtual void v08(); virtual void v09();
  virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
  virtual void v20(); virtual void v21(); virtual void get(struct Big *); };
struct Big { M m; u8 rest[80]; };
void fn_80175C10(O *o, M *out) { Big t; o->get(&t); *out = t.m; }

} /* extern "C" */
