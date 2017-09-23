#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Hackerrank/Graphs.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace HackerrankTests
{
	TEST_CLASS(Graph1)
	{
		AdjListGraph testGraph;
		
   	public:

		TEST_METHOD_INITIALIZE(setUp) {
			testGraph = AdjListGraph(5);
			testGraph.addEdge(0, 1);
			testGraph.addEdge(0, 4);
			testGraph.addEdge(0, 3);
			testGraph.addEdge(1, 4);
			testGraph.addEdge(2, 3);
			testGraph.addEdge(4, 3);
		}
		
		TEST_METHOD(Graph1NodesCount)
		{
			Assert::IsTrue(testGraph.nodesCount() == 5);
		}
		
		TEST_METHOD(Graph1EdgesCount)
		{
			Assert::IsTrue(testGraph.edgesCount() == 6);
		}

		TEST_METHOD(Graph1Neigbours)
		{			
			{
			int tmp[] = {1, 4, 3};
			const vector<int> neighbours( tmp, tmp+(sizeof(tmp)/sizeof(tmp[0])));
			Assert::IsTrue(testGraph.getNeighbours(0) == neighbours);
			}
			{
			int tmp[] = {0, 4};
			const vector<int> neighbours( tmp, tmp+(sizeof(tmp)/sizeof(tmp[0])));
			Assert::IsTrue(testGraph.getNeighbours(1) == neighbours);
			}
			{
			int tmp[] = {3};
			const vector<int> neighbours( tmp, tmp+(sizeof(tmp)/sizeof(tmp[0])));
			Assert::IsTrue(testGraph.getNeighbours(2) == neighbours);
			}
			{
			int tmp[] = {0, 2, 4};
			const vector<int> neighbours( tmp, tmp+(sizeof(tmp)/sizeof(tmp[0])));
			Assert::IsTrue(testGraph.getNeighbours(3) == neighbours);
			}
			{
			int tmp[] = {0, 1, 3};
			const vector<int> neighbours( tmp, tmp+(sizeof(tmp)/sizeof(tmp[0])));
			Assert::IsTrue(testGraph.getNeighbours(4) == neighbours);
			}

		}
	};
}