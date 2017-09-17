#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Codility\L3_FrogJmp.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CodilityUnitTest
{
	TEST_CLASS(T1_FrgJmp)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int start = 10;
			int end = 85;
			int jmp = 30;
			int expected = 3;	

			auto result = L3_FrogJmp::solution(start, end, jmp);
			Assert::IsTrue(expected == result);
		}

		TEST_METHOD(TestMethod2)
		{
			int start = 10;
			int end = 10;
			int jmp = 30;
			int expected = 0;	

			auto result = L3_FrogJmp::solution(start, end, jmp);
			Assert::IsTrue(expected == result);
		}

	};
}