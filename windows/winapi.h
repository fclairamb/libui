// 31 may 2015
#define UNICODE
#define _UNICODE
#define STRICT
#define STRICT_TYPED_ITEMIDS
#ifndef __cplusplus
#define CINTERFACE
#define COBJMACROS
#endif
// see https://github.com/golang/go/issues/9916#issuecomment-74812211
// TODO get rid of this
#define INITGUID
#define _USE_MATH_DEFINES
// for the manifest
#define ISOLATION_AWARE_ENABLED 1
// get Windows version right; right now Windows Vista
#define WINVER 0x0600				/* according to Microsoft's winnls.h */
#define _WIN32_WINNT 0x0600		/* according to Microsoft's sdkddkver.h */
#define _WIN32_WINDOWS 0x0600		/* according to Microsoft's pdh.h */
#define _WIN32_IE 0x0700			/* according to Microsoft's sdkddkver.h */
#define NTDDI_VERSION 0x06000000	/* according to Microsoft's sdkddkver.h */
#include <windows.h>
// Microsoft's resource compiler will segfault if we feed it headers it was not designed to handle
#ifndef RC_INVOKED
#include <commctrl.h>
#include <stdint.h>
#include <uxtheme.h>
#include <string.h>
#include <wchar.h>
#include <windowsx.h>
#include <vsstyle.h>
#include <vssym32.h>
#include <stdarg.h>
#include <oleacc.h>
#include <stdio.h>
#include <shobjidl.h>
#include <math.h>
#include <d2d1.h>
#include <float.h>
// see drawtext.cpp for details
#ifdef __cplusplus
#include <dwrite.h>
#endif
#endif
