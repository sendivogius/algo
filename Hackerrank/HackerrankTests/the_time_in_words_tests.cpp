#include "stdafx.h"
#include "CppUnitTest.h"
#include <string>
#include "..\Hackerrank\the_time_in_words.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace HackerrankTests
{
	TEST_CLASS(TheTimeInWordsTests)
	{
	public:
		
		TEST_METHOD(TheTimeInWordsTest1)
		{
			const auto result = to_words(5, 47);
			const string expected = "thirteen minutes to six";

			Assert::IsTrue(result == expected);
		}

		TEST_METHOD(TheTimeInWordsTest2)
		{
			const auto result = to_words(7, 30);
			const string expected = "half past seven";

			Assert::IsTrue(result == expected);
		}

		TEST_METHOD(TheTimeInWordsTest3)
		{
			const auto result = to_words(1, 00);
			const string expected = "one o' clock";

			Assert::IsTrue(result == expected);
		}

		TEST_METHOD(TheTimeInWordsTest4)
		{
			const auto result = to_words(11, 4);
			const string expected = "four minutes past eleven";

			Assert::IsTrue(result == expected);
		}

		TEST_METHOD(TheTimeInWordsTest5)
		{
			const auto result = to_words(10, 15);
			const string expected = "quarter past ten";

			Assert::IsTrue(result == expected);
		}

		TEST_METHOD(TheTimeInWordsTest6)
		{
			const auto result = to_words(8, 45);
			const string expected = "quarter to nine";

			Assert::IsTrue(result == expected);
		}

		TEST_METHOD(TheTimeInWordsTest7)
		{
			const auto result = to_words(7, 29);
			const string expected = "twenty nine minutes past seven";

			Assert::IsTrue(result == expected);
		}

		TEST_METHOD(TheTimeInWordsTest8)
		{
			const auto result = to_words(5, 45);
			const string expected = "quarter to six";

			Assert::IsTrue(result == expected);
		}

	};
}