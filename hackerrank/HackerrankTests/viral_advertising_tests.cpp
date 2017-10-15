#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Hackerrank\viral_advertising.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace HackerrankTests
{		
	TEST_CLASS(ViralAdvertising)
	{
	public:
		
		TEST_METHOD(ViralAdvertisingTest1)
		{
			Assert::IsTrue(getTotalAdverts(3) == 9);
		}

	};
}