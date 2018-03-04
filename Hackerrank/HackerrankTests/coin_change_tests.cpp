#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Hackerrank\coin_change.cpp"
#include <vector>

using namespace std;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace HackerrankTests
{
	TEST_CLASS(CoinChangeTests)
	{
	public:
		
		TEST_METHOD(CoinChangeTest1)
		{
			int tmp[] = {1, 2, 3};
			const long amount = 4;
			vector<long> input( tmp, tmp+(sizeof(tmp)/sizeof(tmp[0])));
			const auto out = getWays(amount, input);

			Assert::AreEqual(4l, out);
		}

		TEST_METHOD(CoinChangeTest2)
		{
			int tmp[] = {2, 5, 3, 6};
			const long amount = 10;
			vector<long> input( tmp, tmp+(sizeof(tmp)/sizeof(tmp[0])));
			const auto out = getWays(amount, input);

			Assert::AreEqual(5l, out);
		}

	};
}