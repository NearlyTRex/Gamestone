// Config file
#include "config.h"

#ifdef HAVE_SSE
#include "../Alc/mixer_sse.c"
#endif

#ifdef HAVE_SSE2
#include "../Alc/mixer_sse2.c"
#endif

#ifdef HAVE_SSE4_1
#include "../Alc/mixer_sse41.c"
#endif

#ifdef HAVE_NEON
#include "../Alc/mixer_neon.c"
#endif
