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
	};
}