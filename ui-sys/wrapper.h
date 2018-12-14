#include "libui/ui.h"
#ifdef _WIN32
    // WinAPI typedefs
    typedef void* PVOID;
    typedef void* LPVOID;
    typedef void* HANDLE;
    typedef void* HWND;
    typedef void* HINSTANCE;
    typedef unsigned long DWORD;
    typedef long LONG;
    typedef unsigned int UINT;
    typedef int BOOL;
    typedef unsigned short WORD;
    typedef const wchar_t *LPCWSTR;
    #if defined(_WIN64)
        typedef __int64 INT_PTR, *PINT_PTR;
        typedef unsigned __int64 UINT_PTR, *PUINT_PTR;
        typedef __int64 LONG_PTR, *PLONG_PTR;
        typedef unsigned __int64 ULONG_PTR, *PULONG_PTR;
    #else
        typedef int INT_PTR, *PINT_PTR;
        typedef unsigned int UINT_PTR, *PUINT_PTR;
        typedef long LONG_PTR, *PLONG_PTR;
        typedef unsigned long ULONG_PTR, *PULONG_PTR;
    #endif
    typedef LONG_PTR LPARAM;
    typedef LONG_PTR LRESULT;
    typedef LPCWSTR LPCTSTR;
    typedef struct _RECT {
        LONG left;
        LONG top;
        LONG right;
        LONG bottom;
    } RECT, *PRECT;
    typedef struct tagNMHDR {
        HWND hwndFrom;
        UINT idFrom;
        UINT code;
    } NMHDR;
    #include "libui/ui_windows.h"
#elif __APPLE__
    //TODO: Add typdefs for OSX
//#include "libui/ui_darwin.h"
#else
    //TODO: Add typdefs for GTK/Linux
//#include "libui/ui_unix.h"
#endif