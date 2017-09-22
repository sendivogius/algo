#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Hackerrank\birthday_chocolate.cpp"
#include <vector>

using namespace std;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace HackerrankTests
{
	TEST_CLASS(BirthdayChocolate)
	{
	public:
		
		TEST_METHOD(BirthdayChocolateTest1)
		{
			int tmp[] = {1, 2, 1, 3, 2 };
			const vector<int> input( tmp, tmp+(sizeof(tmp)/sizeof(tmp[0])));
			const int out = solveBirthday(input, 3, 2);
			Assert::IsTrue(out == 2);
		}

		TEST_METHOD(BirthdayChocolateTest2)
		{
			int tmp[] = {1, 1, 1, 1, 1, 1};
			const vector<int> input( tmp, tmp+(sizeof(tmp)/sizeof(tmp[0])));
			const int out = solveBirthday(input, 3, 2);
			Assert::IsTrue(out == 0);
		}

		TEST_METHOD(BirthdayChocolateTest3)
		{
			int tmp[] = {4};
			const vector<int> input( tmp, tmp+(sizeof(tmp)/sizeof(tmp[0])));
			const int out = solveBirthday(input, 4, 1);
			Assert::IsTrue(out == 1);
		}

	};
}