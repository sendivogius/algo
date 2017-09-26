#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Hackerrank\organizing_containers_of_balls.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace HackerrankTests
{
	TEST_CLASS(OrganizingContainersOfBallsTests)
	{
	public:
		
		TEST_METHOD(OrganizingContainersOfBallsTest1)
		{
			vector<int> row1;
			row1.push_back(1);
			row1.push_back(1);
			vector<int> row2;
			row2.push_back(1);
			row2.push_back(1);
			vector<vector<int>> M;
			M.push_back(row1);
			M.push_back(row2);

			Assert::IsTrue(check_balls(M));
		}

		TEST_METHOD(OrganizingContainersOfBallsTest2)
		{
			vector<int> row1;
			row1.push_back(0);
			row1.push_back(2);
			vector<int> row2;
			row2.push_back(1);
			row2.push_back(1);
			vector<vector<int>> M;
			M.push_back(row1);
			M.push_back(row2);

			Assert::IsFalse(check_balls(M));
		}

	};
}