#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CallingConventionsTest
{		
	TEST_CLASS(MyStdCallTest)
	{
	public:
		
		TEST_METHOD(MyStdCallAddsCorrectly)
		{
			auto result = MyStdcall(30, 8, 4);
			Assert::AreEqual(42, result);
		}

	};

	TEST_CLASS(MyCdeclTest)
	{
	public:

		TEST_METHOD(MyCdeclAddsCorrectly)
		{
			auto result = MyCdecl(30, 8, 4);
			Assert::AreEqual(42, result);
		}
	};

	TEST_CLASS(MyFastcallTest)
	{
	public:

		TEST_METHOD(MyFastcallAddsCorrectly)
		{
			auto result = MyFastcall(30, 8, 4);
			Assert::AreEqual(42, result);
		}
	};
}