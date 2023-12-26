// Config file
#include "config.h"

// Always include these
#include "../ALc/backends/base.c"
#include "../ALc/backends/null.c"
#include "../ALc/backends/loopback.c"

#ifdef HAVE_ALSA
#include "../ALc/backends/alsa.c"
#endif

#ifdef HAVE_COREAUDIO
#include "../ALc/backends/coreaudio.c"
#endif

#ifdef HAVE_DSOUND
#include "../ALc/backends/dsound.c"
#endif

#ifdef HAVE_MMDEVAPI
#include "../ALc/backends/mmdevapi.c"
#endif

#ifdef HAVE_OPENSL
#include "../ALc/backends/opensl.c"
#endif

#ifdef HAVE_OSS
#include "../ALc/backends/oss.c"
#endif

#ifdef HAVE_PORTAUDIO
#include "../ALc/backends/portaudio.c"
#endif

#ifdef HAVE_PULSEAUDIO
#include "../ALc/backends/pulseaudio.c"
#endif

#ifdef HAVE_SNDIO
#include "../ALc/backends/sndio.c"
#endif

#ifdef HAVE_SOLARIS
#include "../ALc/backends/solaris.c"
#endif

#ifdef HAVE_WAVE
#include "../ALc/backends/wave.c"
#endif

#ifdef HAVE_WINMM
#include "../ALc/backends/winmm.c"
#endif
