#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Codility\L3_TapeEqulibrium.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CodilityUnitTest
{
	TEST_CLASS(T3_TapeEqulibrium)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int input_array[] = {3,1,2,4,3};
			vector<int> input(input_array, input_array + sizeof(input_array) / sizeof(input_array[0]) );

			int expected = 1;	

			auto result = L3_TapeEqulibrium::solution(input);
			Assert::IsTrue(expected == result);
		}


		TEST_METHOD(TestMethod2)
		{
			int input_array[] = {3,3};
			vector<int> input(input_array, input_array + sizeof(input_array) / sizeof(input_array[0]) );

			int expected = 0;	

			auto result = L3_TapeEqulibrium::solution(input);
			Assert::IsTrue(expected == result);
		}

		TEST_METHOD(TestMethod3)
		{
			int input_array[] = {3,5};
			vector<int> input(input_array, input_array + sizeof(input_array) / sizeof(input_array[0]) );

			int expected = 2;	

			auto result = L3_TapeEqulibrium::solution(input);
			Assert::IsTrue(expected == result);
		}

		TEST_METHOD(TestMethod4)
		{
			int input_array[] = {-1000, 1000};
			vector<int> input(input_array, input_array + sizeof(input_array) / sizeof(input_array[0]) );

			int expected = 2000;	

			auto result = L3_TapeEqulibrium::solution(input);
			Assert::IsTrue(expected == result);
		}

	};
}