#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Codility\L1_BinaryGap.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CodilityUnitTest
{		
	TEST_CLASS(T1_BinaryGap)
	{
	public:
		
		TEST_METHOD(Test0)
		{
			const int expected = 0;
			int result = L1_BinaryGap::solution(0);
			Assert::AreEqual(expected, result);
		}
				
		TEST_METHOD(Test1041)
		{
			const int expected = 5;
			int result = L1_BinaryGap::solution(1041);
			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(Test5)
		{
			const int expected = 1;
			int result = L1_BinaryGap::solution(5);
			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(Test15)
		{
			const int expected = 0;
			int result = L1_BinaryGap::solution(15);
			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(Test6)
		{
			const int expected = 0;
			int result = L1_BinaryGap::solution(6);
			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(Test328)
		{
			const int expected = 2;
			int result = L1_BinaryGap::solution(328);
			Assert::AreEqual(expected, result);
		}

	};
}