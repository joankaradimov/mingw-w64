/*
 * Copyright 2008 James Hawkins for CodeWeavers
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

#ifndef __WINE_PROPVARUTIL_H
#define __WINE_PROPVARUTIL_H

#include <shtypes.h>
#include <shlwapi.h>

#if !defined (_NTDEF_) && !defined (_NTSTATUS_PSDK)
#define _NTSTATUS_PSDK
typedef LONG NTSTATUS, *PNTSTATUS;
#endif

enum tagPROPVAR_CHANGE_FLAGS
{
    PVCHF_DEFAULT           = 0x00000000,
    PVCHF_NOVALUEPROP       = 0x00000001,
    PVCHF_ALPHABOOL         = 0x00000002,
    PVCHF_NOUSEROVERRIDE    = 0x00000004,
    PVCHF_LOCALBOOL         = 0x00000008,
    PVCHF_NOHEXSTRING       = 0x00000010,
};

typedef int PROPVAR_CHANGE_FLAGS;

enum tagPROPVAR_COMPARE_UNIT
{
    PVCU_DEFAULT           = 0x00000000,
    PVCU_SECOND            = 0x00000001,
    PVCU_MINUTE            = 0x00000002,
    PVCU_HOUR              = 0x00000003,
    PVCU_DAY               = 0x00000004,
    PVCU_MONTH             = 0x00000005,
    PVCU_YEAR              = 0x00000006,
};

typedef int PROPVAR_COMPARE_UNIT;

enum tagPROPVAR_COMPARE_FLAGS
{
    PVCF_DEFAULT           = 0x00000000,
    PVCF_TREATEMPTYASGREATERTHAN = 0x00000001,
    PVCF_USESTRCMP         = 0x00000002,
    PVCF_USESTRCMPC        = 0x00000004,
    PVCF_USESTRCMPI        = 0x00000008,
    PVCF_USESTRCMPIC       = 0x00000010,
};

typedef int PROPVAR_COMPARE_FLAGS;

#ifndef PSSTDAPI
#ifdef _PROPSYS_
#define PSSTDAPI STDAPI
#define PSSTDAPI_(type)   STDAPI_(type)
#else
#define PSSTDAPI EXTERN_C DECLSPEC_IMPORT HRESULT STDAPICALLTYPE
#define PSSTDAPI_(type) EXTERN_C DECLSPEC_IMPORT type STDAPICALLTYPE
#endif
#endif

PSSTDAPI PropVariantChangeType(PROPVARIANT *ppropvarDest, REFPROPVARIANT propvarSrc,
                               PROPVAR_CHANGE_FLAGS flags, VARTYPE vt);
PSSTDAPI InitPropVariantFromGUIDAsString(REFGUID guid, PROPVARIANT *ppropvar);
PSSTDAPI InitVariantFromGUIDAsString(REFGUID guid, VARIANT *pvar);
PSSTDAPI InitPropVariantFromBuffer(const VOID *pv, UINT cb, PROPVARIANT *ppropvar);
PSSTDAPI InitVariantFromBuffer(const VOID *pv, UINT cb, VARIANT *pvar);
PSSTDAPI PropVariantToGUID(const PROPVARIANT *ppropvar, GUID *guid);
PSSTDAPI VariantToGUID(const VARIANT *pvar, GUID *guid);
PSSTDAPI_(INT) PropVariantCompareEx(REFPROPVARIANT propvar1, REFPROPVARIANT propvar2,
                                    PROPVAR_COMPARE_UNIT uint, PROPVAR_COMPARE_FLAGS flags);

PSSTDAPI PropVariantToInt16(REFPROPVARIANT propvarIn, SHORT *ret);
PSSTDAPI PropVariantToInt32(REFPROPVARIANT propvarIn, LONG *ret);
PSSTDAPI PropVariantToInt64(REFPROPVARIANT propvarIn, LONGLONG *ret);
PSSTDAPI PropVariantToUInt16(REFPROPVARIANT propvarIn, USHORT *ret);
PSSTDAPI PropVariantToUInt32(REFPROPVARIANT propvarIn, ULONG *ret);
PSSTDAPI PropVariantToUInt64(REFPROPVARIANT propvarIn, ULONGLONG *ret);

PSSTDAPI PropVariantToStringAlloc(REFPROPVARIANT propvarIn, WCHAR **ret);

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

PSSTDAPI StgSerializePropVariant(const PROPVARIANT* ppropvar, SERIALIZEDPROPERTYVALUE** ppProp, ULONG* pcb);
PSSTDAPI StgDeserializePropVariant(const SERIALIZEDPROPERTYVALUE* pprop, ULONG cbMax, PROPVARIANT* ppropvar);

#endif

#ifdef __cplusplus

HRESULT InitPropVariantFromBoolean(WINBOOL fVal, PROPVARIANT *ppropvar);
HRESULT InitPropVariantFromString(PCWSTR psz, PROPVARIANT *ppropvar);
HRESULT InitPropVariantFromInt64(LONGLONG llVal, PROPVARIANT *ppropvar);

#ifndef NO_PROPVAR_INLINES

inline HRESULT InitPropVariantFromBoolean(WINBOOL fVal, PROPVARIANT *ppropvar)
{
    ppropvar->vt = VT_BOOL;
    ppropvar->boolVal = fVal ? VARIANT_TRUE : VARIANT_FALSE;
    return S_OK;
}

inline HRESULT InitPropVariantFromString(PCWSTR psz, PROPVARIANT *ppropvar)
{
    HRESULT hres;

    hres = SHStrDupW(psz, &ppropvar->pwszVal);
    if(SUCCEEDED(hres))
        ppropvar->vt = VT_LPWSTR;
    else
        PropVariantInit(ppropvar);

    return hres;
}

inline HRESULT InitPropVariantFromInt64(LONGLONG llVal, PROPVARIANT *ppropvar)
{
    ppropvar->vt = VT_I8;
    ppropvar->hVal.QuadPart = llVal;
    return S_OK;
}

#endif
#endif

#endif /* __WINE_PROPVARUTIL_H */
