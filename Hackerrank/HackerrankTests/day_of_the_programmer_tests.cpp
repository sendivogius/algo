#include "stdafx.h"
#include "CppUnitTest.h"
#include <string>
#include "..\Hackerrank\day_of_the_programmer.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace HackerrankTests
{
	TEST_CLASS(DayOfTheProgrammerTests)
	{
	public:
		
		TEST_METHOD(DayOfTheProgrammerTest1)
		{
			Assert::IsTrue("13.09.2017" == dayOfProgrammer(2017));
		}

		TEST_METHOD(DayOfTheProgrammerTest2)
		{
			Assert::IsTrue("13.09.1917" == dayOfProgrammer(1917));
		}

		TEST_METHOD(DayOfTheProgrammerTest3)
		{
			Assert::IsTrue("26.09.1918" == dayOfProgrammer(1918));
		}

		TEST_METHOD(DayOfTheProgrammerTest4)
		{
			Assert::IsTrue("13.09.1919" == dayOfProgrammer(1919));
		}

		TEST_METHOD(DayOfTheProgrammerTest5)
		{
			Assert::IsTrue("12.09.2000" == dayOfProgrammer(2000));
		}

		TEST_METHOD(DayOfTheProgrammerTest6)
		{
			Assert::IsTrue("12.09.2400" == dayOfProgrammer(2400));
		}

		TEST_METHOD(DayOfTheProgrammerTest7)
		{
			Assert::IsTrue("12.09.1800" == dayOfProgrammer(1800));
		}

		TEST_METHOD(DayOfTheProgrammerTest8)
		{
			Assert::IsTrue("12.09.2016" == dayOfProgrammer(2016));
		}

	};
}
