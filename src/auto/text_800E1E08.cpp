#include "common.h"

extern "C" {

}
extern "C" void free(void *);
inline void operator delete(void *p) throw() { if (p) free(p); }
namespace std { class exception { public: exception() throw() {} virtual const char *what() const throw(); virtual ~exception() throw(); }; }
std::exception::~exception() throw() {}
extern "C" {

} /* extern "C" */
