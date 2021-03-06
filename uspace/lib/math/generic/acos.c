/*
 * Copyright (c) 2015 Jiri Svoboda
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the distribution.
 * - The name of the author may not be used to endorse or promote products
 *   derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/** @addtogroup libmath
 * @{
 */
/** @file
 */

#include <acos.h>
#include <errno.h>
#include <math.h>

/** Inverse cosine (32-bit floating point)
 *
 * Compute inverse cosine value.
 *
 * @param arg Inversecosine argument.
 *
 * @return Inverse cosine value.
 *
 */
float32_t float32_acos(float32_t arg)
{
	if (arg < -1.0 || arg > 1.0) {
		errno = EDOM;
		return FLOAT32_NAN;
	}

	return M_PI_2 - asin_f32(arg);
}

/** Inverse cosine (64-bit floating point)
 *
 * Compute inverse cosine value.
 *
 * @param arg Inversecosine argument.
 *
 * @return Inverse cosine value.
 *
 */
float64_t float64_acos(float64_t arg)
{
	if (arg < -1.0 || arg > 1.0) {
		errno = EDOM;
		return FLOAT64_NAN;
	}

	return M_PI_2 - asin_f64(arg);
}

/** @}
 */
