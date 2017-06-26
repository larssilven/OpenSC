#ifndef SRC_LIBOPENSC_P11TYPES_H_
#define SRC_LIBOPENSC_P11TYPES_H_

#ifndef P11_LONG_SIZE
typedef long p11_long;
typedef unsigned long p11_ulong;
#else
#include <stdint.h>
#endif

#if P11_LONG_SIZE==16
typedef int16_t p11_long;
typedef uint16_t p11_ulong;
#elif P11_LONG_SIZE==32
typedef int32_t p11_long;
typedef uint32_t p11_ulong;
#elif P11_LONG_SIZE==64
typedef int64_t p11_long;
typedef uint64_t p11_ulong;
#elif defined P11_LONG_SIZE
#error P11_LONG_SIZE must be 16 or 32 or 64.
#endif


#endif /* SRC_LIBOPENSC_P11TYPES_H_ */
