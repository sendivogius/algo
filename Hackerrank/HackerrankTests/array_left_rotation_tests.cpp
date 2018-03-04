#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Hackerrank\array_left_rotation.cpp"
#include <vector>

using namespace std;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace HackerrankTests
{
	TEST_CLASS(ArrayLeftRotation)
	{
	public:
		
		TEST_METHOD(ArrayLeftRotationTest1)
		{
			int tmp[] = {1, 2, 3, 4, 5};
			const vector<int> input( tmp, tmp+(sizeof(tmp)/sizeof(tmp[0])));
			const auto out = rotate(input, 1);

			int tmp2[] = {2, 3, 4, 5, 1};
			const vector<int> expected( tmp2, tmp2+(sizeof(tmp2)/sizeof(tmp2[0])));
			Assert::IsTrue(expected == out);
		}

		TEST_METHOD(ArrayLeftRotationTest2)
		{
			int tmp[] = {1, 2, 3, 4, 5};
			const vector<int> input( tmp, tmp+(sizeof(tmp)/sizeof(tmp[0])));
			const auto out = rotate(input, 5);

			int tmp2[] = {1, 2, 3, 4, 5};
			const vector<int> expected( tmp2, tmp2+(sizeof(tmp2)/sizeof(tmp2[0])));
			Assert::IsTrue(expected == out);
		}

	};
}