#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Hackerrank\matrix_layer_rotation.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace HackerrankTests
{
	TEST_CLASS(MatrixLayerHelpersTests)
	{
	public:
		
		TEST_METHOD(MatrixLayerHelpersTest1)
		{
			const auto out = layerize(1, 2);

			int expected_tmp1[] = {0, 1};
			const vector<int> expected1( expected_tmp1, expected_tmp1+(sizeof(expected_tmp1)/sizeof(expected_tmp1[0])));
			vector<vector<int>> expected;
			expected.push_back(expected1);

			Assert::IsTrue(out == expected);
		}

		TEST_METHOD(MatrixLayerHelpersTest2)
		{
			const auto out = layerize(4, 4);

			int expected_tmp1[] = {0, 1, 2, 3, 7, 11, 15, 14, 13, 12, 8, 4};
			const vector<int> expected1( expected_tmp1, expected_tmp1+(sizeof(expected_tmp1)/sizeof(expected_tmp1[0])));
			int expected_tmp2[] = {5, 6, 10, 9};
			const vector<int> expected2( expected_tmp2, expected_tmp2+(sizeof(expected_tmp2)/sizeof(expected_tmp2[0])));

			vector<vector<int>> expected;
			expected.push_back(expected1);
			expected.push_back(expected2);

			Assert::IsTrue(out == expected);
		}

		TEST_METHOD(MatrixLayerHelpersTest3)
		{
			const auto out = layerize(3, 4);

			int expected_tmp1[] = {0, 1, 2, 3, 7, 11, 10, 9, 8, 4};
			const vector<int> expected1( expected_tmp1, expected_tmp1+(sizeof(expected_tmp1)/sizeof(expected_tmp1[0])));
			int expected_tmp2[] = {5,6};
			const vector<int> expected2( expected_tmp2, expected_tmp2+(sizeof(expected_tmp2)/sizeof(expected_tmp2[0])));

			vector<vector<int>> expected;
			expected.push_back(expected1);
			expected.push_back(expected2);

			Assert::IsTrue(out == expected);
		}

		TEST_METHOD(MatrixLayerHelpersTest4)
		{
			const auto out = layerize(3, 1);

			int expected_tmp1[] = {0, 1, 2};
			const vector<int> expected1( expected_tmp1, expected_tmp1+(sizeof(expected_tmp1)/sizeof(expected_tmp1[0])));

			vector<vector<int>> expected;
			expected.push_back(expected1);

			Assert::IsTrue(out == expected);
		}

		TEST_METHOD(MatrixLayerHelpersTest5)
		{
			const auto out = layerize(3, 3);

			int expected_tmp1[] = {0, 1, 2, 5, 8, 7, 6, 3};
			const vector<int> expected1( expected_tmp1, expected_tmp1+(sizeof(expected_tmp1)/sizeof(expected_tmp1[0])));
			int expected_tmp2[] = {4};
			const vector<int> expected2( expected_tmp2, expected_tmp2+(sizeof(expected_tmp2)/sizeof(expected_tmp2[0])));

			vector<vector<int>> expected;
			expected.push_back(expected1);
			expected.push_back(expected2);

			Assert::IsTrue(out == expected);
		}


	};

	TEST_CLASS(MatrixLayerRotationTests)
	{
	public:
		
		TEST_METHOD(MatrixLayerRotationTest1)
		{
			int tmp[] = {9, 10};
			const vector<int> input( tmp, tmp+(sizeof(tmp)/sizeof(tmp[0])));
			const vector<int> out = layerRotate(input, 1, 2, 3);

			int expected_tmp[] = {10, 9};
			const vector<int> expected( expected_tmp, expected_tmp+(sizeof(expected_tmp)/sizeof(expected_tmp[0])));
			
			Assert::IsTrue(out == expected);
		}

		TEST_METHOD(MatrixLayerRotationTest2)
		{
			int tmp[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
			const vector<int> input( tmp, tmp+(sizeof(tmp)/sizeof(tmp[0])));
			const vector<int> out = layerRotate(input, 4, 4, 1);

			int expected_tmp[] = {2, 3, 4, 8, 1, 7, 11, 12, 5, 6, 10, 16, 9 , 13, 14, 15};
			const vector<int> expected( expected_tmp, expected_tmp+(sizeof(expected_tmp)/sizeof(expected_tmp[0])));
			
			Assert::IsTrue(out == expected);
		}

		TEST_METHOD(MatrixLayerRotationTest3)
		{
			int tmp[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
			const vector<int> input( tmp, tmp+(sizeof(tmp)/sizeof(tmp[0])));
			const vector<int> out = layerRotate(input, 4, 4, 2);

			int expected_tmp[] = {3, 4, 8, 12, 2, 11, 10, 16, 1, 7, 6, 15, 5, 9, 13, 14};
			const vector<int> expected( expected_tmp, expected_tmp+(sizeof(expected_tmp)/sizeof(expected_tmp[0])));
			
			Assert::IsTrue(out == expected);
		}

		TEST_METHOD(MatrixLayerRotationTest4)
		{
			int tmp[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
			const vector<int> input( tmp, tmp+(sizeof(tmp)/sizeof(tmp[0])));
			const vector<int> out = layerRotate(input, 5, 4, 7);

			int expected_tmp[] = {28,27,26,25,22,9,15,19,16,8,21,13,10,14,20,7,4,3,2,1};
			const vector<int> expected( expected_tmp, expected_tmp+(sizeof(expected_tmp)/sizeof(expected_tmp[0])));
			
			Assert::IsTrue(out == expected);
		}

		TEST_METHOD(MatrixLayerRotationTest5)
		{
			int tmp[] = {1, 1, 1, 1};
			const vector<int> input( tmp, tmp+(sizeof(tmp)/sizeof(tmp[0])));
			const vector<int> out = layerRotate(input, 2, 2, 3);

			int expected_tmp[] = {1, 1, 1, 1};
			const vector<int> expected( expected_tmp, expected_tmp+(sizeof(expected_tmp)/sizeof(expected_tmp[0])));
			
			Assert::IsTrue(out == expected);
		}

	};
}