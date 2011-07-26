/*!********************************************************************
libusbK - Multi-driver USB library.
Copyright (C) 2011 All Rights Reserved.
libusb-win32.sourceforge.net

Development : Travis Lee Robinson  (libusbdotnet@gmail.com)
Testing     : Xiaofan Chen         (xiaofanc@gmail.com)

At the discretion of the user of this library, this software may be
licensed under the terms of the GNU Public License v3 or a BSD-Style
license as outlined in the following files:
* LICENSE-gpl3.txt
* LICENSE-bsd.txt

License files are located in a license folder at the root of source and
binary distributions.
********************************************************************!*/

#include "lusbk_private.h"
#include "lusbk_handles.h"
#include "lusbk_stack_collection.h"

BOOL GetProcAddress_LUsb0(__out KPROC* ProcAddress, __in ULONG FunctionID)
{
	switch(FunctionID)
	{
	case KUSB_FNID_IsoReadPipe:
		GetProcAddress_Unsupported(ProcAddress, FunctionID);
		return LusbwError(ERROR_NOT_SUPPORTED);
	case KUSB_FNID_IsoWritePipe:
		GetProcAddress_Unsupported(ProcAddress, FunctionID);
		return LusbwError(ERROR_NOT_SUPPORTED);
	default:
		return GetProcAddress_UsbK(ProcAddress, FunctionID);
	}
}
