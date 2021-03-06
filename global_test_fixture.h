//////////////////////////////////////////////////////////////////////////////
// Tycho Game Library
// Copyright (C) 2013 Martin Slater
// Created : Wednesday, 16 October 2013 1:13:02 PM
//////////////////////////////////////////////////////////////////////////////
#if _MSC_VER > 1000
#pragma once
#endif  // _MSC_VER

#ifndef __GLOBAL_TEST_FIXTURE_H_16DBD8E0_A604_4B66_B9DE_A5151FE7877C_
#define __GLOBAL_TEST_FIXTURE_H_16DBD8E0_A604_4B66_B9DE_A5151FE7877C_

//////////////////////////////////////////////////////////////////////////////
// INCLUDES
//////////////////////////////////////////////////////////////////////////////
#include "test/test_abi.h"
#include "test/forward_decls.h"


//////////////////////////////////////////////////////////////////////////////
// CLASS
//////////////////////////////////////////////////////////////////////////////

namespace tycho
{
namespace test
{

    class TYCHO_TEST_ABI global_test_fixture
    {
    public:
		global_test_fixture();
		~global_test_fixture();
    };

} // end namespace
} // end namespace

#endif // __GLOBAL_TEST_FIXTURE_H_16DBD8E0_A604_4B66_B9DE_A5151FE7877C_
