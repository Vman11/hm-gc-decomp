/* MSL_C critical_regions.c */
#include "common.h"
void __begin_critical_region(int region);
void __end_critical_region(int region);
void __kill_critical_regions(void);


#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
void __end_critical_region(int region) {

}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
void __begin_critical_region(int region) {

}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
void __kill_critical_regions(void) {

}
#pragma pop
