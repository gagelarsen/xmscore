#pragma once
#ifdef CXX_TEST
//------------------------------------------------------------------------------
/// \file
/// \ingroup points
/// \copyright (C) Copyright Aquaveo 2018. Distributed under the xmsng
///  Software License, Version 1.0. (See accompanying file
///  LICENSE_1_0.txt or copy at http://www.aquaveo.com/xmsng/LICENSE_1_0.txt)
//------------------------------------------------------------------------------

#include <cxxtest/TestSuite.h>

/// tests for points classes
class PtUnitTests : public CxxTest::TestSuite
{
public:
  void testIt();
  void testStreams();
};
#endif