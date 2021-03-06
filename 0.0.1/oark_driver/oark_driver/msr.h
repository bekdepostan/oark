/*
Copyright (c) <2010> <0vercl0k aka Souchet Axel, 0vercl0k@tuxfamily.org>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

/**
 * @file   msr.h
 * @Author 0vercl0k@tuxfamily.org
 * @date   December, 2010
 * @brief  MSR stuff.
 *
 */
#ifndef _MSR_H_
#define _MSR_H_

#include <wdm.h>
#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @name    ReadMSR
 * @brief   This routine reads a MSR.
 *
 * This API is useful to read a MSR.
 *
 * @param [in] msrId  MSR number.
 *
 * @retval 0 An error occured
 * @retval other  The MSR Value.
 *
 * Example Usage:
 * @code
 *    ReadMSR(0x1337);
 * @endcode
 */
DWORD64 ReadMSR(DWORD msrId);

#ifdef __cplusplus
}
#endif

#endif