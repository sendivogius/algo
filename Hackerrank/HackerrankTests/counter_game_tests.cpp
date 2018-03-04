#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Hackerrank\counter_game.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace HackerrankTests
{		
	TEST_CLASS(CounterGame)
	{
	public:
		
		TEST_METHOD(CounterGameTest1)
		{
			const auto result = counter(6);
			Assert::IsTrue(result);
		}

		TEST_METHOD(CounterGameTest2)
		{
			const auto result = counter(1024);
			Assert::IsTrue(result);
		}
				
		TEST_METHOD(CounterGameTest3)
		{
			const auto result = counter(1);
			Assert::IsTrue(result);
		}
		
		TEST_METHOD(CounterGameTest4)
		{
			const auto result = counter(2);
			Assert::IsFalse(result);
		}

		TEST_METHOD(CounterGameTest5)
		{
			const auto result = counter(63);
			Assert::IsFalse(result);
		}
		TEST_METHOD(CounterGameTest6)
		{
			const auto result = counter(166);
			Assert::IsTrue(result);
		}
					
		TEST_METHOD(CounterGameTest12_1)
		{
			const auto result = counter(1067441287186170);
			Assert::IsFalse(result);
		}
		TEST_METHOD(CounterGameTest12_2)
		{
			const auto result = counter(1025098071203062);
			Assert::IsFalse(result);
		}
		TEST_METHOD(CounterGameTest12_3)
		{
			const auto result = counter(580285261915521);
			Assert::IsFalse(result);
		}

		TEST_METHOD(CounterGameTest12_4)
		{
			const auto result = counter(630730178146259);
			Assert::IsFalse(result);
		}
		
		TEST_METHOD(CounterGameTest12_5)
		{
			const auto result = counter(140737488355328);
			Assert::IsFalse(result);
		}

		TEST_METHOD(CounterGameTest12_6)
		{
			const auto result = counter(828308258812594);
			Assert::IsTrue(result);
		}
		TEST_METHOD(CounterGameTest12_7)
		{
			const auto result = counter(562949953421312);
			Assert::IsFalse(result);
		}
		TEST_METHOD(CounterGameTest12_8)
		{
			const auto result = counter(789547943889922);
			Assert::IsFalse(result);
		}

		TEST_METHOD(CounterGameTest12_9)
		{
			const auto result = counter(4194304);
			Assert::IsTrue(result);
		}
		
		TEST_METHOD(CounterGameTest12_10)
		{
			const auto result = counter(1099511627776);
			Assert::IsTrue(result);
		}



	};
}