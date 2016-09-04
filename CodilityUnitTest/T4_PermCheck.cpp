#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Codility\L4_PermCheck.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CodilityUnitTest
{
	TEST_CLASS(T4_PermCheck)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int input_array[] = {1,2,3,4};
			vector<int> input(input_array, input_array + sizeof(input_array) / sizeof(input_array[0]) );

			int expected = 1;	

			auto result = L4_PermCheck::solution(input);
			Assert::IsTrue(expected == result);
		}


		TEST_METHOD(TestMethod2)
		{
			int input_array[] = {2,1,2,3,4};
			vector<int> input(input_array, input_array + sizeof(input_array) / sizeof(input_array[0]) );

			int expected = 0;	

			auto result = L4_PermCheck::solution(input);
			Assert::IsTrue(expected == result);
		}

		TEST_METHOD(TestMethod3)
		{
			int input_array[] = {1,2,4};
			vector<int> input(input_array, input_array + sizeof(input_array) / sizeof(input_array[0]) );

			int expected = 0;	

			auto result = L4_PermCheck::solution(input);
			Assert::IsTrue(expected == result);
		}

	};
}