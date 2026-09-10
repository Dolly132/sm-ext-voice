/* (C) COPYRIGHT 1994-2002 Xiph.Org Foundation */
/* Modified by Jean-Marc Valin */
/*
   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions
   are met:

   - Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

   - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE FOUNDATION OR
   CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
/* celt_types.h taken from libogg */

/**
   @file celt_types.h
   @brief CELT types
*/
#ifndef _CELT_TYPES_H
#define _CELT_TYPES_H

#if defined(_MSC_VER) && (_MSC_VER >= 1600)
  #include <stdint.h>
#elif defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L)
  #include <stdint.h>
#elif defined(__GNUC__) || defined(HAVE_STDINT_H) || defined(_STDINT_H)
  #include <stdint.h>
#else
  #include <stdint.h> /* Modern default */
#endif

typedef int16_t  celt_int16;
typedef uint16_t celt_uint16;
typedef int32_t  celt_int32;
typedef uint32_t celt_uint32;

#endif /* _CELT_TYPES_H */
