/*
 * Implementation of the Common Property Sheets User Interface
 *
 * Copyright 2006 Detlef Riekenberg
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#include <stdarg.h>

#define COBJMACROS

#include "windef.h"
#include "winbase.h"
#include "winuser.h"
#include "ddk/compstui.h"

#include "wine/debug.h"

WINE_DEFAULT_DEBUG_CHANNEL(compstui);

/*****************************************************
 *      DllMain
 */
BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    TRACE("(%p, %d, %p)\n",hinstDLL, fdwReason, lpvReserved);

    switch(fdwReason)
    {
#ifndef __REACTOS__
        case DLL_WINE_PREATTACH:
            return FALSE;  /* prefer native version */
#endif

        case DLL_PROCESS_ATTACH:
            DisableThreadLibraryCalls( hinstDLL );
            break;
    }
    return TRUE;
}

/******************************************************************
 *      CommonPropertySheetUIA (COMPSTUI.@)
 *
 */
LONG WINAPI CommonPropertySheetUIA(HWND hWnd, PFNPROPSHEETUI pfnPropSheetUI, LPARAM lparam, LPDWORD pResult)
{
    FIXME("(%p, %p, 0x%lx, %p)\n", hWnd, pfnPropSheetUI, lparam, pResult);
    return CPSUI_CANCEL;
}

/******************************************************************
 *      CommonPropertySheetUIW (COMPSTUI.@)
 *
 */
LONG WINAPI CommonPropertySheetUIW(HWND hWnd, PFNPROPSHEETUI pfnPropSheetUI, LPARAM lparam, LPDWORD pResult)
{
    FIXME("(%p, %p, 0x%lx, %p)\n", hWnd, pfnPropSheetUI, lparam, pResult);
    return CPSUI_CANCEL;
}

/******************************************************************
 *      GetCPSUIUserData (COMPSTUI.@)
 *
 */
ULONG_PTR WINAPI GetCPSUIUserData(HWND hDlg)
{
    FIXME("(%p): stub\n", hDlg);
    return 0;
}

/******************************************************************
 *      SetCPSUIUserData (COMPSTUI.@)
 *
 */
BOOL WINAPI SetCPSUIUserData(HWND hDlg, ULONG_PTR UserData )
{
    FIXME("(%p, %08lx): stub\n", hDlg, UserData);
    return TRUE;
}
