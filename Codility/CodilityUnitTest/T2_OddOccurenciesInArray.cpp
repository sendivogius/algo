#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Codility\L2_OddOccurenciesInArray.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CodilityUnitTest
{
	TEST_CLASS(T2_OddOccurenciesInArray)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int input_array[] = {9,3,9,3,9,7,9};
			vector<int> input(input_array, input_array + sizeof(input_array) / sizeof(input_array[0]) );

			int expected = 7;	

			auto result = L2_OddOccurenciesInArray::solution(input);
			Assert::IsTrue(expected == result);
		}


		TEST_METHOD(OneElementVector)
		{
			int input_array[] = {3};
			vector<int> input(input_array, input_array + sizeof(input_array) / sizeof(input_array[0]) );

			int expected = 3;

			auto result = L2_OddOccurenciesInArray::solution(input);
			Assert::IsTrue(expected == result);
		}

	};
}