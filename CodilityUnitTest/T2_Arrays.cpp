#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Codility\L2_CyclicRotation.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CodilityUnitTest
{
	TEST_CLASS(T2_Arrays)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int input_array[] = {3,8,9,7,6};
			vector<int> input(input_array, input_array + sizeof(input_array) / sizeof(input_array[0]) );

			int expected_array[] = {9, 7, 6, 3, 8};
			vector<int> expected(expected_array, expected_array + sizeof(expected_array) / sizeof(expected_array[0]) );

			auto result = L2_Arrays::solution(input, 3);
			Assert::IsTrue(expected == result);
		}

		TEST_METHOD(EmptyVector)
		{
			vector<int> input;
			vector<int> expected;

			auto result = L2_Arrays::solution(input, 3);
			Assert::IsTrue(expected == result);
		}

		TEST_METHOD(OneElementVector)
		{
			int input_array[] = {3};
			vector<int> input(input_array, input_array + sizeof(input_array) / sizeof(input_array[0]) );

			int expected_array[] = {3};
			vector<int> expected(expected_array, expected_array + sizeof(expected_array) / sizeof(expected_array[0]) );

			auto result = L2_Arrays::solution(input, 3);
			Assert::IsTrue(expected == result);
		}

	};
}