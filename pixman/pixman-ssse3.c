/*
 * Copyright © 2013 Soren Sandmann Pedersen
 * Copyright © 2013 Red Hat, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * Author: Soren Sandmann (soren.sandmann@gmail.com)
 */
#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdlib.h>
#include <mmintrin.h>
#include <xmmintrin.h>
#include <emmintrin.h>
#include <tmmintrin.h>
#include "pixman-private.h"
#include "pixman-inlines.h"

static const pixman_fast_path_t ssse3_fast_paths[] =
{
    { PIXMAN_OP_NONE },
};

pixman_implementation_t *
_pixman_implementation_create_ssse3 (pixman_implementation_t *fallback)
{
    pixman_implementation_t *imp =
	_pixman_implementation_create (fallback, ssse3_fast_paths);

    return imp;
}
