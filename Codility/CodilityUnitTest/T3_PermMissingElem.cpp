#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Codility\L3_PermMissingElem.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CodilityUnitTest
{
	TEST_CLASS(T3_PermMissingElem)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int input_array[] = {2,3,1,5};
			vector<int> input(input_array, input_array + sizeof(input_array) / sizeof(input_array[0]) );

			int expected = 4;	

			auto result = L3_PermMissingElem::solution(input);
			Assert::IsTrue(expected == result);
		}


		TEST_METHOD(TestMethod2)
		{
			int input_array[] = {2};
			vector<int> input(input_array, input_array + sizeof(input_array) / sizeof(input_array[0]) );

			int expected = 1;	

			auto result = L3_PermMissingElem::solution(input);
			Assert::IsTrue(expected == result);
		}

	};
}