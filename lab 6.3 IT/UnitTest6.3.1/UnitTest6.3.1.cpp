#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 6.3 IT.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest631
{
	TEST_CLASS(UnitTest631)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int b[] = { 3, 8, -6, -10, 5 };
			int result1 = SumEven(b, 5);
			Assert::AreEqual(result1, -8);
		}
	};
}
