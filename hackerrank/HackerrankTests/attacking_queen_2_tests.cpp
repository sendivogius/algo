#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Hackerrank\attacking_queen_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace HackerrankTests
{		
	TEST_CLASS(AttackingQueen2)
	{
	public:
		
		TEST_METHOD(AttackingQueen2Test1)
		{
			QueensAttack qa(4, 4, 8);
			Assert::IsTrue(qa.getAttacksNumber() == 27);
		}

		TEST_METHOD(AttackingQueen2Test2)
		{
			QueensAttack qa(1, 1, 8);
			Assert::IsTrue(qa.getAttacksNumber() == 21);
		}

		TEST_METHOD(AttackingQueen2Test3)
		{
			QueensAttack qa(4, 4, 8);
			qa.addObstacle(3,5);
			Assert::IsTrue(qa.getAttacksNumber() == 24);
		}

	};
}