#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Hackerrank\mars_exploration.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace HackerrankTests
{		
	TEST_CLASS(MarsExploration)
	{
	public:
		
		TEST_METHOD(MarsExplorationTest1)
		{
			const auto result = sos_diff("SOSSPSSQSSOR");
			Assert::IsTrue(3 == result);
		}

		TEST_METHOD(MarsExplorationTest2)
		{
			const auto result = sos_diff("SOSSOT");
			Assert::IsTrue(1 == result);
		}
	};
}