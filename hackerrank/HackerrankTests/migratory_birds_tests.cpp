#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Hackerrank\migratory_birds.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace HackerrankTests
{
	TEST_CLASS(MigratoryBirdsTests)
	{
	public:
		
		TEST_METHOD(MigratoryBirdsTest1)
		{
			int tmp[] = {1, 4, 4, 4, 5, 3};
			const vector<int> input( tmp, tmp+(sizeof(tmp)/sizeof(tmp[0])));
			int out = migratoryBirds(input);
			Assert::IsTrue(out == 4);
		}

		TEST_METHOD(MigratoryBirdsTest2)
		{
			int tmp[] = {1,1,1,1,1};
			const vector<int> input( tmp, tmp+(sizeof(tmp)/sizeof(tmp[0])));
			int out = migratoryBirds(input);
			Assert::IsTrue(out == 1);
		}

		TEST_METHOD(MigratoryBirdsTest3)
		{
			int tmp[] = {2,3,4,2,3};
			const vector<int> input( tmp, tmp+(sizeof(tmp)/sizeof(tmp[0])));
			int out = migratoryBirds(input);
			Assert::IsTrue(out == 2);
		}

	};
}