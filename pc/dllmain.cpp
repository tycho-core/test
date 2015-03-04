//////////////////////////////////////////////////////////////////////////////
// Tycho Game Library
// Copyright (C) 2013 Martin Slater
// Created : Monday, 15 July 2013 03:02:06 PM
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
// INCLUDES
//////////////////////////////////////////////////////////////////////////////
#include "core/pc/safe_windows.h"
#include "../test_abi.h"

#ifdef _MANAGED
#pragma managed(push, off)
#endif

BOOL APIENTRY DllMain( HMODULE /*hModule*/,
                       DWORD  /*ul_reason_for_call*/,
                       LPVOID /*lpReserved*/
					 )
{
    return TRUE;
}

#ifdef _MANAGED
#pragma managed(pop)
#endif

TYCHO_TEST_ABI void initialise()
{


}
