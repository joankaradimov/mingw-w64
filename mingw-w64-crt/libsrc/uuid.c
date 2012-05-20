/*
  Generate GUIDs for OLE and other interfaces.

  This file was generated by extracting the names of all GUIDs
  from uuid.lib. The names were in turn processed by a script
  to build a C program that when run generated this file.
  Some definitions were added by hand afterwards.
*/

/*
  TODO: Break up into smaller units, based on declarations in headers.
*/

#define _WIN32_IE 0x0900

#define INITGUID
#include <basetyps.h>

#include <textstor.h>
#include <shobjidl.h>
#include <propkey.h>
#include <isguids.h>
#include <shlguid.h>

DEFINE_GUID(ARRAYID_PathProperties,0x7ecbba04,0x2d97,0x11cf,0xa2,0x29,0,0xaa,0,0x3d,0x73,0x52);
DEFINE_GUID(CATID_Control,0x40fc6ed4,0x2438,0x11cf,0xa3,0xdb,0x8,0,0x36,0xf1,0x25,0x2);
DEFINE_GUID(CATID_DocObject,0x40fc6ed8,0x2438,0x11cf,0xa3,0xdb,0x8,0,0x36,0xf1,0x25,0x2);
DEFINE_GUID(CATID_Insertable,0x40fc6ed3,0x2438,0x11cf,0xa3,0xdb,0x8,0,0x36,0xf1,0x25,0x2);
DEFINE_GUID(CATID_InternetAware,0xde86a58,0x2baa,0x11cf,0xa2,0x29,0,0xaa,0,0x3d,0x73,0x52);
DEFINE_GUID(CATID_IsShortcut,0x40fc6ed6,0x2438,0x11cf,0xa3,0xdb,0x8,0,0x36,0xf1,0x25,0x2);
DEFINE_GUID(CATID_NeverShowExt,0x40fc6ed7,0x2438,0x11cf,0xa3,0xdb,0x8,0,0x36,0xf1,0x25,0x2);
DEFINE_GUID(CATID_PersistsToFile,0xde86a56,0x2baa,0x11cf,0xa2,0x29,0,0xaa,0,0x3d,0x73,0x52);
DEFINE_GUID(CATID_PersistsToMemory,0xde86a55,0x2baa,0x11cf,0xa2,0x29,0,0xaa,0,0x3d,0x73,0x52);
DEFINE_GUID(CATID_PersistsToMoniker,0xde86a51,0x2baa,0x11cf,0xa2,0x29,0,0xaa,0,0x3d,0x73,0x52);
DEFINE_GUID(CATID_PersistsToPropertyBag,0xde86a57,0x2baa,0x11cf,0xa2,0x29,0,0xaa,0,0x3d,0x73,0x52);
DEFINE_GUID(CATID_PersistsToStorage,0xde86a52,0x2baa,0x11cf,0xa2,0x29,0,0xaa,0,0x3d,0x73,0x52);
DEFINE_GUID(CATID_PersistsToStream,0xde86a54,0x2baa,0x11cf,0xa2,0x29,0,0xaa,0,0x3d,0x73,0x52);
DEFINE_GUID(CATID_PersistsToStreamInit,0xde86a53,0x2baa,0x11cf,0xa2,0x29,0,0xaa,0,0x3d,0x73,0x52);
DEFINE_GUID(CATID_Printable,0x40fc6ed9,0x2438,0x11cf,0xa3,0xdb,0x8,0,0x36,0xf1,0x25,0x2);
DEFINE_GUID(CATID_Programmable,0x40fc6ed5,0x2438,0x11cf,0xa3,0xdb,0x8,0,0x36,0xf1,0x25,0x2);
DEFINE_GUID(CATID_RequiresDataPathHost,0xde86a50,0x2baa,0x11cf,0xa2,0x29,0,0xaa,0,0x3d,0x73,0x52);
DEFINE_GUID(CATID_SafeForInitializing,0x7dd95802,0x9882,0x11cf,0x9f,0xa9,0,0xaa,0,0x6c,0x42,0xc4);
DEFINE_GUID(CATID_SafeForScripting,0x7dd95801,0x9882,0x11cf,0x9f,0xa9,0,0xaa,0,0x6c,0x42,0xc4);
DEFINE_GUID(CLSID_AllClasses,0x330,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(CLSID_CColorPropPage,0xbe35201,0x8f91,0x11ce,0x9d,0xe3,0,0xaa,0,0x4b,0xb8,0x51);
DEFINE_GUID(CLSID_CFontPropPage, 0x0be35200,0x8f91,0x11ce,0x9d,0xe3,0x00,0xaa,0x00,0x4b,0xb8,0x51);
DEFINE_GUID(CLSID_CPicturePropPage,0xbe35202,0x8f91,0x11ce,0x9d,0xe3,0,0xaa,0,0x4b,0xb8,0x51);
DEFINE_GUID(CLSID_ConvertVBX,0xfb8f0822,0x164,0x101b,0x84,0xed,0x8,0,0x2b,0x2e,0xc7,0x13);
DEFINE_GUID(CLSID_CurrentUserClasses,0x332,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(CLSID_FileProtocol,0x79eac9e7,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
DEFINE_GUID(CLSID_FtpProtocol,0x79eac9e3,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
DEFINE_GUID(CLSID_GopherProtocol,0x79eac9e4,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
DEFINE_GUID(CLSID_HttpProtocol,0x79eac9e2,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
DEFINE_GUID(CLSID_HttpSProtocol,0x79eac9e5,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
DEFINE_GUID(CLSID_IdentityUnmarshal,0x1b,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(CLSID_InProcFreeMarshaler,0x1c,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(CLSID_LocalMachineClasses,0x331,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(CLSID_MkProtocol,0x79eac9e6,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
DEFINE_GUID(CLSID_PSBindCtx,0x312,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(CLSID_PSClassObject,0x30E,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(CLSID_PSClientSite,0x30d,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(CLSID_PSDragDrop,0x311,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(CLSID_PSEnumerators,0x313,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(CLSID_PSGenObject,0x30c,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(CLSID_PSInPlaceActive,0x30f,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(CLSID_PSInPlaceFrame,0x310,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(CLSID_PSUrlMonProxy,0x79eac9f1,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
DEFINE_GUID(CLSID_PersistPropset,0xfb8f0821,0x164,0x101b,0x84,0xed,0x8,0,0x2b,0x2e,0xc7,0x13);
DEFINE_GUID(CLSID_Picture_Dib,0x316,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(CLSID_Picture_EnhMetafile,0x319,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(CLSID_Picture_Metafile,0x315,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(CLSID_StaticDib,0x316,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(CLSID_StaticMetafile,0x315,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(CLSID_StdComponentCategoriesMgr,0x2e005,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(CLSID_StdFont,0xbe35203,0x8f91,0x11ce,0x9d,0xe3,0,0xaa,0,0x4b,0xb8,0x51);
DEFINE_GUID(CLSID_StdHlink,0x79eac9d0,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
DEFINE_GUID(CLSID_StdHlinkBrowseContext,0x79eac9d1,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
DEFINE_GUID(CLSID_StdMarshal,0x17,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(CLSID_StdPicture,0xbe35204,0x8f91,0x11ce,0x9d,0xe3,0,0xaa,0,0x4b,0xb8,0x51);
DEFINE_GUID(CLSID_StdURLMoniker,0x79eac9e0,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
DEFINE_GUID(CLSID_StdURLProtocol,0x79eac9e1,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
DEFINE_GUID(CLSID_WebBrowser,0x8856f961,0x340a,0x11d0,0xa9,0x6b,0x0,0xc0,0x4f,0xd7,0x5,0xa2);
DEFINE_GUID(DIID_DWebBrowserEvents,0xeab22ac2,0x30c1,0x11cf,0xa7,0xeb,0x0,0x0,0xc0,0x5b,0xae,0x0b);
DEFINE_GUID(DIID_DWebBrowserEvents2,0x34a715a0,0x6587,0x11d0,0x92,0x4a,0x0,0x20,0xaf,0xc7,0xac,0x4d);
DEFINE_GUID(FLAGID_Internet,0x96300da0,0x2bab,0x11cf,0xa2,0x29,0,0xaa,0,0x3d,0x73,0x52);
DEFINE_GUID(FMTID_DocSummaryInformation,0xd5cdd502,0x2e9c,0x101b,0x93,0x97,0x8,0,0x2b,0x2c,0xf9,0xae);
DEFINE_GUID(FMTID_SummaryInformation,0xf29f85e0,0x4ff9,0x1068,0xab,0x91,0x8,0,0x2b,0x27,0xb3,0xd9);
DEFINE_GUID(FMTID_UserDefinedProperties,0xd5cdd505,0x2e9c,0x101b,0x93,0x97,0x8,0,0x2b,0x2c,0xf9,0xae);
DEFINE_GUID(GUID_CHECKVALUEEXCLUSIVE,0x6650430c,0xbe0f,0x101a,0x8b,0xbb,0,0xaa,0,0x30,0xc,0xab);
DEFINE_GUID(GUID_COLOR,0x66504301,0xbe0f,0x101a,0x8b,0xbb,0,0xaa,0,0x30,0xc,0xab);
DEFINE_GUID(GUID_FONTBOLD,0x6650430f,0xbe0f,0x101a,0x8b,0xbb,0,0xaa,0,0x30,0xc,0xab);
DEFINE_GUID(GUID_FONTITALIC,0x66504310,0xbe0f,0x101a,0x8b,0xbb,0,0xaa,0,0x30,0xc,0xab);
DEFINE_GUID(GUID_FONTNAME,0x6650430d,0xbe0f,0x101a,0x8b,0xbb,0,0xaa,0,0x30,0xc,0xab);
DEFINE_GUID(GUID_FONTSIZE,0x6650430e,0xbe0f,0x101a,0x8b,0xbb,0,0xaa,0,0x30,0xc,0xab);
DEFINE_GUID(GUID_FONTSTRIKETHROUGH,0x66504312,0xbe0f,0x101a,0x8b,0xbb,0,0xaa,0,0x30,0xc,0xab);
DEFINE_GUID(GUID_FONTUNDERSCORE,0x66504311,0xBE0F,0x101A,0x8B,0xBB,0x00,0xAA,0x00,0x30,0x0C,0xAB);
DEFINE_GUID(GUID_HANDLE,0x66504313,0xbe0f,0x101a,0x8b,0xbb,0,0xaa,0,0x30,0xc,0xab);
DEFINE_GUID(GUID_HIMETRIC,0x66504300,0xbe0f,0x101a,0x8b,0xbb,0,0xaa,0,0x30,0xc,0xab);
DEFINE_GUID(GUID_HasPathProperties,0x2de81,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(GUID_OPTIONVALUEEXCLUSIVE,0x6650430b,0xbe0f,0x101a,0x8b,0xbb,0,0xaa,0,0x30,0xc,0xab);
DEFINE_GUID(GUID_PathProperty,0x2de80,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(GUID_TRISTATE,0x6650430a,0xbe0f,0x101a,0x8b,0xbb,0,0xaa,0,0x30,0xc,0xab);
DEFINE_GUID(GUID_XPOS,0x66504306,0xbe0f,0x101a,0x8b,0xbb,0,0xaa,0,0x30,0xc,0xab);
DEFINE_GUID(GUID_XPOSPIXEL,0x66504302,0xbe0f,0x101a,0x8b,0xbb,0,0xaa,0,0x30,0xc,0xab);
DEFINE_GUID(GUID_XSIZE,0x66504308,0xbe0f,0x101a,0x8b,0xbb,0,0xaa,0,0x30,0xc,0xab);
DEFINE_GUID(GUID_XSIZEPIXEL,0x66504304,0xbe0f,0x101a,0x8b,0xbb,0,0xaa,0,0x30,0xc,0xab);
DEFINE_GUID(GUID_YPOS,0x66504307,0xbe0f,0x101a,0x8b,0xbb,0,0xaa,0,0x30,0xc,0xab);
DEFINE_GUID(GUID_YPOSPIXEL,0x66504303,0xbe0f,0x101a,0x8b,0xbb,0,0xaa,0,0x30,0xc,0xab);
DEFINE_GUID(GUID_YSIZE,0x66504309,0xbe0f,0x101a,0x8b,0xbb,0,0xaa,0,0x30,0xc,0xab);
DEFINE_GUID(GUID_YSIZEPIXEL,0x66504305,0xbe0f,0x101a,0x8b,0xbb,0,0xaa,0,0x30,0xc,0xab);
DEFINE_GUID(IID_IAccessible,0x618736e0,0x3c3d,0x11cf,0x81,0x0c,0x00,0xaa,0x00,0x38,0x9b,0x71);
DEFINE_GUID(LIBID_Accessibility, 0x1ea4dbf0, 0x3c3b,0x11cf, 0x81, 0x0c, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(IID_IAdviseSink2,0x125,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IAdviseSinkEx,0x3af24290,0xc96,0x11ce,0xa0,0xcf,0,0xaa,0,0x60,0xa,0xb8);
DEFINE_GUID(IID_IAsyncMoniker,0x79eac9d3,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
DEFINE_GUID(IID_IAsyncOperation,0x3d8b0590,0xf691,0x11d2,0x8e,0xa9,0x00,0x60,0x97,0xdf,0x5b,0xd4);
DEFINE_GUID(IID_IAuthenticate,0x79eac9d0,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
DEFINE_GUID(IID_IBindHost,0xfc4801a1,0x2ba9,0x11cf,0xa2,0x29,0,0xaa,0,0x3d,0x73,0x52);
DEFINE_GUID(IID_IBindProtocol,0x79eac9cd,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
DEFINE_GUID(IID_IBindStatusCallbackMsg,0x79eac9cb,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
DEFINE_GUID(IID_ICatInformation,0x2e013,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_ICatRegister,0x2e012,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IChannelHook,0x1008c4a0,0x7613,0x11cf,0x9a,0xf1,0,0x20,0xaf,0x6e,0x72,0xf4);
DEFINE_GUID(IID_IClassActivator,0x140,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IClassFactory2,0xb196b28f,0xbab4,0x101a,0xb6,0x9c,0,0xaa,0,0x34,0x1d,0x7);
DEFINE_GUID(IID_IClientSecurity,0x13D,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IClientSiteHandler,0xf4f569d1,0x593b,0x101a,0xb5,0x69,0x8,0,0x2b,0x2d,0xbf,0x7a);
DEFINE_GUID(IID_ICodeInstall,0x79eac9d1,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
DEFINE_GUID(IID_IConnectionPoint,0xb196b286,0xbab4,0x101a,0xb6,0x9c,0,0xaa,0,0x34,0x1d,0x7);
DEFINE_GUID(IID_IConnectionPointContainer,0xb196b284,0xbab4,0x101a,0xb6,0x9c,0,0xaa,0,0x34,0x1d,0x7);
DEFINE_GUID(IID_IContinue,0x12a,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IContinueCallback,0xb722bcca,0x4e68,0x101b,0xa2,0xbc,0,0xaa,0,0x40,0x47,0x70);
DEFINE_GUID(IID_ICreateErrorInfo,0x22f03340,0x547d,0x101b,0x8e,0x65,0x8,0,0x2b,0x2b,0xd1,0x19);
DEFINE_GUID(IID_ICreateTypeInfo,0x20405,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_ICreateTypeInfo2,0x2040e,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_ICreateTypeLib,0x20406,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_ICreateTypeLib2,0x2040F,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IDataAdviseHolder,0x110,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IDebug,0x123,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IDebugStream,0x124,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IDfReserved1,0x13,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IDfReserved2,0x14,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IDfReserved3,0x15,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IDropSource,0x121,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IDropTarget,0x122,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IEnumCATEGORYINFO,0x2e011,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IEnumCallback,0x108,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IEnumConnectionPoints,0xb196b285,0xbab4,0x101a,0xb6,0x9c,0,0xaa,0,0x34,0x1d,0x7);
DEFINE_GUID(IID_IEnumConnections,0xb196b287,0xbab4,0x101a,0xb6,0x9c,0,0xaa,0,0x34,0x1d,0x7);
DEFINE_GUID(IID_IEnumGeneric,0x106,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IEnumHLITEM,0x79eac9c6,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
DEFINE_GUID(IID_IEnumHolder,0x107,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IEnumOLEVERB,0x104,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IEnumOleDocumentViews,0xb722bcc8,0x4e68,0x101b,0xa2,0xbc,0,0xaa,0,0x40,0x47,0x70);
DEFINE_GUID(IID_IEnumOleUndoUnits,0xb3e7c340,0xef97,0x11ce,0x9b,0xc9,0,0xaa,0,0x60,0x8e,0x1);
DEFINE_GUID(IID_IEnumSTATPROPSETSTG,0x13b,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IEnumSTATPROPSTG,0x139,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IEnumSTATURL,0x3c374a42,0xbae4,0x11cf,0xbf,0x7d,0,0xaa,0,0x69,0x46,0xee);
DEFINE_GUID(IID_IEnumVARIANT,0x20404,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IErrorInfo,0x1cf2b120,0x547d,0x101b,0x8e,0x65,0x8,0,0x2b,0x2b,0xd1,0x19);
DEFINE_GUID(IID_IExternalConnection,0x19,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IFillLockBytes,0x99caf010,0x415e,0x11cf,0x88,0x14,0,0xaa,0,0xb5,0x69,0xf5);
DEFINE_GUID(IID_IFilter,0x89bcb740,0x6119,0x101a,0xbc,0xb7,0,0xdd,0x1,0x6,0x55,0xaf);
DEFINE_GUID(IID_IFont,0xbef6e002,0xa874,0x101a,0x8b,0xba,0,0xaa,0,0x30,0xc,0xab);
DEFINE_GUID(IID_IFontDisp,0xbef6e003,0xa874,0x101a,0x8b,0xba,0,0xaa,0,0x30,0xc,0xab);
DEFINE_GUID(IID_IGlobalInterfaceTable,0x146,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IHlink,0x79eac9c3,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
DEFINE_GUID(IID_IHlinkBrowseContext,0x79eac9c7,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
DEFINE_GUID(IID_IHlinkFrame,0x79eac9c5,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
DEFINE_GUID(IID_IHlinkSite,0x79eac9c2,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
DEFINE_GUID(IID_IHlinkTarget,0x79eac9c4,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
DEFINE_GUID(IID_IHttpNegotiate,0x79eac9d2,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
DEFINE_GUID(IID_IHttpSecurity,0x79eac9d7,0xbafa,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
DEFINE_GUID(IID_IInternalMoniker,0x11,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_ILayoutStorage,0xe6d4d90,0x6738,0x11cf,0x96,0x8,0,0xaa,0,0x68,0xd,0xb4);
DEFINE_GUID(IID_ILockBytes,0xa,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IMalloc,0x2,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IMallocSpy,0x1d,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IMarshal,0x3,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IMessageFilter,0x16,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IMimeInfo,0xf77459a0,0xbf9a,0x11cf,0xba,0x4e,0,0xc0,0x4f,0xd7,0x8,0x16);
DEFINE_GUID(IID_IMultiQI,0x20,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IObjectSafety,0xcb5bdc81,0x93c1,0x11cf,0x8f,0x20,0,0x80,0x5f,0x2c,0xd0,0x64);
DEFINE_GUID(IID_IObjectWithSite,0xfc4801a3,0x2ba9,0x11cf,0xa2,0x29,0,0xaa,0,0x3d,0x73,0x52);
DEFINE_GUID(IID_IOleAdviseHolder,0x111,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IOleCache,0x11e,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IOleCache2,0x128,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IOleCacheControl,0x129,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IOleClientSite,0x118,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IOleCommandTarget,0xb722bccb,0x4e68,0x101b,0xa2,0xbc,0,0xaa,0,0x40,0x47,0x70);
DEFINE_GUID(IID_IOleContainer,0x11b,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IOleControl,0xb196b288,0xbab4,0x101a,0xb6,0x9c,0,0xaa,0,0x34,0x1d,0x7);
DEFINE_GUID(IID_IOleControlSite,0xB196B289,0xBAB4,0x101A,0xB6,0x9C,0x00,0xAA,0x00,0x34,0x1D,0x07);
DEFINE_GUID(IID_IOleDocument,0xb722bcc5,0x4e68,0x101b,0xa2,0xbc,0,0xaa,0,0x40,0x47,0x70);
DEFINE_GUID(IID_IOleDocumentSite,0xb722bcc7,0x4e68,0x101b,0xa2,0xbc,0,0xaa,0,0x40,0x47,0x70);
DEFINE_GUID(IID_IOleDocumentView,0xb722bcc6,0x4e68,0x101b,0xa2,0xbc,0,0xaa,0,0x40,0x47,0x70);
DEFINE_GUID(IID_IOleInPlaceActiveObject,0x117,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IOleInPlaceFrame,0x116,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IOleInPlaceObject,0x113,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IOleInPlaceObjectWindowless,0x1c2056cc,0x5ef4,0x101b,0x8b,0xc8,0,0xaa,0,0x3e,0x3b,0x29);
DEFINE_OLEGUID(IID_IOleInPlaceSite,0x00000119,0,0);
DEFINE_GUID(IID_IOleInPlaceSiteEx,0x9c2cad80,0x3424,0x11cf,0xb6,0x70,0,0xaa,0,0x4c,0xd6,0xd8);
DEFINE_GUID(IID_IOleInPlaceSiteWindowless,0x922eada0,0x3424,0x11cf,0xb6,0x70,0,0xaa,0,0x4c,0xd6,0xd8);
DEFINE_GUID(IID_IOleInPlaceUIWindow,0x115,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IOleItemContainer,0x11c,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IOleLink,0x11d,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IOleManager,0x11f,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IOleObject,0x112,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IOleParentUndoUnit,0xa1faf330,0xef97,0x11ce,0x9b,0xc9,0,0xaa,0,0x60,0x8e,0x1);
DEFINE_GUID(IID_IOlePresObj,0x120,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IOleUndoManager00,0x97d001f2,0xceef,0x9b11,0xc9,0,0xaa,0,0x60,0x8e,0x1,0);
DEFINE_GUID(IID_IOleUndoManager,0xd001f200,0xef97,0x11ce,0x9b,0xc9,0,0xaa,0,0x60,0x8e,0x1);
DEFINE_GUID(IID_IOleUndoUnit,0x894ad3b0,0xef97,0x11ce,0x9b,0xc9,0,0xaa,0,0x60,0x8e,0x1);
DEFINE_GUID(IID_IOleWindow,0x114,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IOverlappedCompletion,0x521a28f0,0xe40b,0x11ce,0xb2,0xc9,0,0xaa,0,0x68,0x9,0x37);
DEFINE_GUID(IID_IOverlappedStream,0x49384070,0xe40a,0x11ce,0xb2,0xc9,0,0xaa,0,0x68,0x9,0x37);
DEFINE_GUID(IID_IPSFactory,0x9,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IPSFactoryBuffer,0xd5f569d0,0x593b,0x101a,0xb5,0x69,0x8,0,0x2b,0x2d,0xbf,0x7a);
DEFINE_GUID(IID_IParseDisplayName,0x11a,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IPerPropertyBrowsing,0x376bd3aa,0x3845,0x101b,0x84,0xed,0x8,0,0x2b,0x2e,0xc7,0x13);
DEFINE_GUID(IID_IPersistFile,0x10b,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IPersistMemory,0xbd1ae5e0,0xa6ae,0x11ce,0xbd,0x37,0x50,0x42,0,0xc1,0,0);
DEFINE_GUID(IID_IPersistMoniker,0x79eac9c9,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0x0b);
DEFINE_GUID(IID_IPersistPropertyBag,0x37d84f60,0x42cb,0x11ce,0x81,0x35,0,0xaa,0,0x4b,0xb8,0x51);
DEFINE_GUID(IID_IPersistPropertyBag2,0x22f55881,0x280b,0x11d0,0xa8,0xa9,0,0xa0,0xc9,0xc,0x20,4);
DEFINE_OLEGUID(IID_IPersistStorage,0x0000010a,0,0);
DEFINE_GUID(IID_IPersistStreamInit,0x7fd52380,0x4e07,0x101b,0xae,0x2d,0x8,0,0x2b,0x2e,0xc7,0x13);
DEFINE_GUID(IID_IPicture,0x7bf80980,0xbf32,0x101a,0x8b,0xbb,0,0xaa,0,0x30,0xc,0xab);
DEFINE_GUID(IID_IPictureDisp,0x7bf80981,0xbf32,0x101a,0x8b,0xbb,0,0xaa,0,0x30,0xc,0xab);
DEFINE_GUID(IID_IPointerInactive,0x55980ba0,0x35aa,0x11cf,0xb6,0x71,0,0xaa,0,0x4c,0xd6,0xd8);
DEFINE_GUID(IID_IPrint,0xb722bcc9,0x4e68,0x101b,0xa2,0xbc,0,0xaa,0,0x40,0x47,0x70);
DEFINE_GUID(IID_IProgressNotify,0xa9d758a0,0x4617,0x11cf,0x95,0xfc,0,0xaa,0,0x68,0xd,0xb4);
DEFINE_GUID(IID_IPropertyBag,0x55272a00,0x42cb,0x11ce,0x81,0x35,0,0xaa,0,0x4b,0xb8,0x51);
DEFINE_GUID(IID_IPropertyBag2,0x22f55882,0x280b,0x11d0,0xa8,0xa9,0,0xa0,0xc9,0xc,0x20,4);
DEFINE_GUID(IID_IPropertyFrame,0xb196b28a,0xbab4,0x101a,0xb6,0x9c,0,0xaa,0,0x34,0x1d,0x7);
DEFINE_GUID(IID_IPropertyNotifySink,0x9bfbbc02,0xeff1,0x101a,0x84,0xed,0,0xaa,0,0x34,0x1d,0x7);
DEFINE_GUID(IID_IPropertyPage,0xb196b28d,0xbab4,0x101a,0xb6,0x9c,0,0xaa,0,0x34,0x1d,0x7);
DEFINE_GUID(IID_IPropertyPage2,0x1e44665,0x24ac,0x101b,0x84,0xed,0x8,0,0x2b,0x2e,0xc7,0x13);
DEFINE_GUID(IID_IPropertyPageSite,0xb196b28c,0xbab4,0x101a,0xb6,0x9c,0,0xaa,0,0x34,0x1d,0x7);
DEFINE_GUID(IID_IPropertySetStorage,0x13a,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IPropertyStorage,0x138,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IProvideClassInfo,0xb196b283,0xbab4,0x101a,0xb6,0x9c,0,0xaa,0,0x34,0x1d,0x7);
DEFINE_GUID(IID_IProvideClassInfo2,0xa6bc3ac0,0xdbaa,0x11ce,0x9d,0xe3,0,0xaa,0,0x4b,0xb8,0x51);
DEFINE_GUID(IID_IProxy,0x27,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IProxyManager,0x8,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IQuickActivate,0xcf51ed10,0x62fe,0x11cf,0xbf,0x86,0,0xa0,0xc9,0x3,0x48,0x36);
DEFINE_GUID(IID_IROTData,0xf29f6bc0,0x5021,0x11ce,0xaa,0x15,0,0,0x69,0x1,0x29,0x3f);
DEFINE_GUID(IID_IRichEditOle,0x20d00,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IRichEditOleCallback,0x20d03,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IRootStorage,0x12,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IRpcChannel,0x4,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IRpcChannelBuffer,0xd5f56b60,0x593b,0x101a,0xb5,0x69,0x8,0,0x2b,0x2d,0xbf,0x7a);
DEFINE_GUID(IID_IRpcProxy,0x7,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IRpcProxyBuffer,0xd5f56a34,0x593b,0x101a,0xb5,0x69,8,0,0x2b,0x2d,0xbf,0x7a);
DEFINE_GUID(IID_IRpcProxyBuffer34,0x3bd5f56a,0x1a59,0xb510,0x69,0x8,0,0x2b,0x2d,0xbf,0x7a,0);
DEFINE_GUID(IID_IRpcStub,0x5,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IRpcStubBuffer,0xd5f56afc,0x593b,0x101a,0xb5,0x69,0x8,0,0x2b,0x2d,0xbf,0x7a);
DEFINE_OLEGUID(IID_IRunnableObject,0x00000126,0,0);
DEFINE_GUID(IID_IServerHandler,0xf4f569d0,0x593b,0x101a,0xb5,0x69,0x8,0,0x2b,0x2d,0xbf,0x7a);
DEFINE_GUID(IID_IServerSecurity,0x13E,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IServiceProvider,0x6d5140c1,0x7436,0x11ce,0x80,0x34,0,0xaa,0,0x60,0x9,0xfa);
DEFINE_GUID(IID_ISimpleFrameSite,0x742b0e01,0x14e6,0x101b,0x91,0x4e,0,0xaa,0,0x30,0xc,0xab);
DEFINE_GUID(IID_ISpecifyPropertyPages,0xb196b28b,0xbab4,0x101a,0xb6,0x9c,0,0xaa,0,0x34,0x1d,0x7);
DEFINE_OLEGUID(IID_IStdMarshalInfo,24,0,0);
DEFINE_GUID(IID_IStub,0x26,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IStubManager,0x6,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_ISupportErrorInfo,0xdf0b3d60,0x548f,0x101b,0x8e,0x65,0x8,0,0x2b,0x2b,0xd1,0x19);
DEFINE_GUID(IID_ITargetEmbedding,0x548793c0,0x9e74,0x11cf,0x96,0x55,0,0xa0,0xc9,0x3,0x49,0x23);
DEFINE_GUID(IID_ITargetFrame,0xd5f78c80,0x5252,0x11cf,0x90,0xfa,0,0xaa,0,0x42,0x10,0x6e);
DEFINE_GUID(IID_ITypeChangeEvents,0x20410,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_ITypeInfo2,0x20412,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_ITypeLib2,0x20411,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IUrlHistoryStg,0x3c374a41,0xbae4,0x11cf,0xbf,0x7d,0,0xaa,0,0x69,0x46,0xee);
DEFINE_GUID(IID_IViewObject,0x10d,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IViewObject2,0x127,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IViewObjectEx,0x3af24292,0xc96,0x11ce,0xa0,0xcf,0,0xaa,0,0x60,0xa,0xb8);
DEFINE_GUID(IID_IWebBrowser,0xeab22ac1,0x30c1,0x11cf,0xa7,0xeb,0x0,0x0,0xc0,0x5b,0xae,0x0b);
DEFINE_GUID(IID_IWebBrowser2,0xd30c1661,0xcdaf,0x11d0,0x8a,0x3e,0x0,0xc0,0x4f,0xc9,0xe2,0x6e);
DEFINE_GUID(IID_IWebBrowserApp,0x2df05,0x0,0x0,0xc0,0x0,0x0,0x0,0x0,0x0,0x0,0x46);
DEFINE_GUID(IID_IWinInetHttpInfo,0x79eac9d8,0xbafa,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
DEFINE_GUID(IID_IWinInetInfo,0x79eac9d6,0xbafa,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
DEFINE_GUID(IID_IWindowForBindingUI,0x79eac9d5,0xbafa,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
DEFINE_GUID(IID_StdOle,0x20430,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_ALLIMAGE,0x2de0e,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_ALLMM,0x2de18,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_ALLTEXT,0x2de1e,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_ANSITEXT,0x2de19,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_AVI,0x2de0f,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_BASICAUDIO,0x2de12,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_BIFF,0x2de21,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_BMP,0x2de01,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_CGM,0x2de0b,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_COMMONIMAGE,0x2de0d,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_DIB,0x2de02,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_DIF,0x2de1f,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_ENHMF,0x2de04,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_EPS,0x2de0c,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_GIF,0x2de05,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_HTML,0x2de1c,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_JPEG,0x2de06,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_MIDI,0x2de13,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_MPEG,0x2de10,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_PALETTE,0x2de22,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_PCX,0x2de09,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_PENDATA,0x2de23,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_PICT,0x2de0a,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_POSTSCRIPT,0x2de1d,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_QUICKTIME,0x2de11,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_RIFF,0x2de15,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_RTF,0x2de1b,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_SOUND,0x2de16,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_SYLK,0x2de20,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_TIFF,0x2de07,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_UNICODE,0x2de1a,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_VIDEO,0x2de17,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_WAV,0x2de14,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_WMF,0x2de03,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(OLE_DATAPATH_XBM,0x2de08,0,0,0xc0,0,0,0,0,0,0,0x46);
DEFINE_GUID(SID_SContainerDispatch,0xb722be00,0x4e68,0x101b,0xa2,0xbc,0,0xaa,0,0x40,0x47,0x70);
DEFINE_GUID(SID_SDataPathBrowser,0xfc4801a5,0x2ba9,0x11cf,0xa2,0x29,0,0xaa,0,0x3d,0x73,0x52);
