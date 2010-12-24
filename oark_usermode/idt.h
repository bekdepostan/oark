/*
Copyright (c) <2010> <Dreg aka David Reguera Garcia, dreg@fr33project.org>

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

#ifndef _IDT_H__
#define _IDT_H__

#include <windows.h>
#include <stdio.h>
#include "common.h"
#include "driverusr.h"

#define FIN_IDT_DEFAULTS (1)

typedef struct _KIDTENTRY
{
     WORD Offset;
     WORD Selector;
     WORD Access;
     WORD ExtendedOffset;
} KIDTENTRY, *PKIDTENTRY;

typedef struct _KGDTENTRY
{
     WORD LimitLow;
     WORD BaseLow;
     ULONG HighWord;
} KGDTENTRY, *PKGDTENTRY;

typedef struct _KPCR
{
     NT_TIB NtTib;   /* FIXED UNION: I AM NOT INTERESTED IN THIS */
     void * SelfPcr; /* FIXED: I AM NOT INTERESTED IN THIS */
     void * Prcb;    /* FIXED: I AM NOT INTERESTED IN THIS */
     UCHAR Irql;
     ULONG IRR;
     ULONG IrrActive;
     ULONG IDR;
     PVOID KdVersionBlock;
     PKIDTENTRY IDT;
     PKGDTENTRY GDT;

    /* ... */
} KPCR, *PKPCR;

STATUS_t idt( FUNC_ARGS_t *, FUNC_ARGS_GLOBAL_t * );

#endif /* _IDT_H__ */