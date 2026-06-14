#ifndef AUBIO_CONFIG_H
#define AUBIO_CONFIG_H

#define HAVE_STDLIB_H 1
#define HAVE_STDIO_H 1
#define HAVE_STDARG_H 1
#define HAVE_STRING_H 1
#define HAVE_MATH_H 1
#define HAVE_LIMITS_H 1
#define HAVE_C99_VARARGS_MACROS 1

#define HAVE_AUBIO_DOUBLE 0

/* Disable optional external libraries not typically available/needed in basic Android NDK build */
#undef HAVE_SNDFILE
#undef HAVE_SAMPLERATE
#undef HAVE_JACK
#undef HAVE_AVCODEC
#undef HAVE_AVFORMAT
#undef HAVE_AVUTIL

#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdarg.h>

#endif /* AUBIO_CONFIG_H */
