#pragma once
#ifdef CXX_TEST
//------------------------------------------------------------------------------
/// \file
/// \ingroup dataio
/// \copyright (C) Copyright Aquaveo 2018. Distributed under FreeBSD License
/// (See accompanying file LICENSE or https://aqaveo.com/bsd/license.txt)
//------------------------------------------------------------------------------

//----- Included files ---------------------------------------------------------

// 3. Standard Library Headers

// 4. External Library Headers
#include <cxxtest/TestSuite.h>

// 5. Shared Headers

// 6. Non-shared Headers

//----- Namespace declaration --------------------------------------------------

////////////////////////////////////////////////////////////////////////////////
class DaStreamIoUnitTests : public CxxTest::TestSuite
{
public:
  void testReadNamedLine();
  void testReadWriteLine();
  void testReadWriteStringLine();
  void testReadWrite2StringLine();
  void testReadWrite3StringLine();
  void testReadWriteIntLine();
  void testReadIntFromLine();
  void testReadStringFromLine();
  void testReadDoubleFromLine();
  void testReadWriteDoubleLine();
  void testReadWrite3DoubleLine();
  void testReadWriteVecInt();
  void testReadWriteVecDbl();
  void testReadWriteVecPt3d();
  void testLineBeginsWith();
};

////////////////////////////////////////////////////////////////////////////////
class DaReaderWriterIoUnitTests : public CxxTest::TestSuite
{
public:
  void testReadNamedLine();
  void testReadWriteLine();
  void testReadWriteStringLine();
  void testReadWrite2StringLine();
  void testReadWrite3StringLine();
  void testReadWriteIntLine();
  void testReadIntFromLine();
  void testReadStringFromLine();
  void testReadDoubleFromLine();
  void testReadWriteDoubleLine();
  void testReadWrite3DoubleLine();
  void testReadWriteVecInt();
  void testReadWriteVecDbl();
  void testReadWriteVecPt3d();
  void testReadWriteBinaryVecInt();
  void testReadWriteBinaryVecDbl();
  void testReadWriteBinaryVecPt3d();
  void testReadWriteLineParts();
  void testReadWriteBinaryArrays();
  void testLineBeginsWith();
};

#endif
