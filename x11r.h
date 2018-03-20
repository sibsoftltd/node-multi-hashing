#ifndef X11R_H
#define X11R_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

void x11r_hash(const char* input, char* output, uint32_t len);

#ifdef __cplusplus
}
#endif

#endif
