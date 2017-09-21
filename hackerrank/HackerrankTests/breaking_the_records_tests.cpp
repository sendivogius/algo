#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Hackerrank\breaking_the_records.cpp"
#include <vector>
#include <tuple>

using namespace std;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace HackerrankTests
{		
	TEST_CLASS(BreakingTheRecordsTests)
	{
	public:
		
		TEST_METHOD(BreakingTheRecordsTest1)
		{
			int tmp[] = {3, 4, 21, 36, 10, 28, 35, 5, 24, 42};
			const vector<int> input( tmp, tmp+(sizeof(tmp)/sizeof(tmp[0])));
			const auto expected = make_pair(4, 0);
			Assert::IsTrue(expected == getRecord(input));
		}

		TEST_METHOD(BreakingTheRecordsTest2)
		{
			int tmp[] = {10, 5, 20, 20, 4, 5, 2, 25, 1};
			const vector<int> input( tmp, tmp+(sizeof(tmp)/sizeof(tmp[0])));
			const auto expected = make_pair(2, 4);
			Assert::IsTrue(expected == getRecord(input));
		}

	};
}