// Common.h

#if defined(_MSC_VER) && _MSC_VER >= 1800
#pragma warning(disable : 4464) // relative include path contains '..'
#endif

#ifndef ZIP7_INC_COMMON_H
#define ZIP7_INC_COMMON_H

#include "../../C/Precomp.h"
#include "Common0.h"
#include "MyWindows.h"

/*
This file is included to all cpp files in Amine RAR.
Each folder contains StdAfx.h file that includes "Common.h".
So Amine RAR includes "Common.h" in both modes:
  with precompiled StdAfx.h
and
  without precompiled StdAfx.h

include "Common.h" before other h files of Amine RAR,
   if you need predefined macros.
do not include "Common.h", if you need only interfaces,
   and you don't need predefined macros.
*/

#endif
