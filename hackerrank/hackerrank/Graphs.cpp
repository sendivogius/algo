#include "Graphs.h"
using namespace std;

//todo extract graphs representation and algorithms
//todo implement union find DS
//extract node class
//extract vertex class

//todo different graph representtions adjmatrix, edges list, adj list


vector<int> NodeBFS(const Graph& g, int node)
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

Graph fromStream(istream& stream)
{
	int nodes, edges;
	stream >> nodes >> edges;
	Graph g(nodes, edges);
	while (edges--){
		int from, to;
		cin >> from >> to;
		g.addEdge(from - 1, to - 1);
	}
	return g;
}
