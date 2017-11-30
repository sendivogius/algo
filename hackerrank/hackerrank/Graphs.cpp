#include "Graphs.h"
#include <fstream>
#include <limits>
#include <functional>

using namespace std;


//todo extract graphs representation and algorithms
//todo implement union find DS
//extract node class
//extract vertex class

//todo different graph representtions adjmatrix, edges list, adj list
vector<int> NodeBFS(const AdjListGraph& g, int node)
{
	vector<int> visited(g.nodesCount(), -1);
	queue<pair<int,int> > q;
	q.push(make_pair(node,node));

	while (!q.empty()){
		auto currentNode = q.front();
		q.pop();

		int currentNodeId = currentNode.first;
		int predecessor = currentNode.second;
		
		if (visited[currentNodeId]!=-1) continue;

		//cout << "Visiting " << currentNodeId << endl;	//todo extract to fuction?
		visited[currentNodeId] = visited[predecessor]+1;
		for (int node : g.getNeighbours(currentNodeId)){
			//if(!visited[node])		//todo check impact on perf on big graps
			q.push(make_pair(node, currentNodeId));
		}
	}
	return visited;
}

vector<int> Dijkstra(const AdjListGraphWeighted& g, int node)
{
	vector<int> visited(g.nodesCount(), std::numeric_limits<int>::max());
	visited[node] = 0;

	priority_queue<pair<int,int>, std::vector<pair<int,int>>, std::greater<pair<int,int> > > q;
	q.push(make_pair(0,node));

	while (!q.empty()){
		auto currentNode = q.top();
		q.pop();

		int weight = currentNode.first;
		int currentNodeId = currentNode.second;		

		for (auto node : g.getNeighbours(currentNodeId)){
			auto nId = node.first;
			auto nWeight = node.second;
			if(visited[nId] > weight+nWeight){
				visited[nId] = weight+nWeight;
				q.push(make_pair(visited[nId], nId));
			}
		}
	}
	return visited;
}

AdjListGraphWeighted fromStream(istream& stream)
{
	int nodes, edges, weight;
	stream >> nodes >> edges;
	AdjListGraphWeighted g(nodes);
	while (edges--){
		int from, to;
		cin >> from >> to >>  weight;
		g.addEdge(from - 1, to - 1, weight);
	}
	return g;
}

AdjListGraphWeighted fromCin()
{
	return fromStream(cin);
}

AdjListGraphWeighted fromFile(const string& filename)
{
	return fromStream(ifstream(filename));
}