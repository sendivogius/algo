#pragma once
#include <numeric>
#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;


class IGraph{
public:
	virtual size_t nodesCount() const = 0;
	virtual size_t edgesCount() = 0;
};

class AdjListGraph : public IGraph{
	//for each node we keep list of neighbourings ids
	//for now there is no possibility to add weight for edges
	typedef vector<int> intvec;
	vector<intvec> nodes;
public:
	size_t nodesCount() const { return nodes.size(); }
	size_t edgesCount() { 
		auto lambda = [&](int a, intvec b){return a + b.size(); };
		int total_edges = std::accumulate(nodes.begin(), nodes.end(), 0, lambda);
		return total_edges/2; 
	}

	void addEdge(int from, int to)
	{
		nodes[from].push_back(to);
		nodes[to].push_back(from);
	}

	AdjListGraph(int nodes = 1){
		this->nodes.resize(nodes);
	}

	intvec getNeighbours(int n)const{
		return nodes[n];
	}

	void print() const
	{
		for (size_t i = 0; i < nodes.size(); i++)
		{
			cout << i + 1 << " -> [";
			for (size_t j = 0; j < nodes[i].size(); j++)
				cout << nodes[i][j] + 1 << " ";
			cout << "]\n";
		}
	}
};


vector<int> NodeBFS(const IGraph& g, int node);

AdjListGraph fromCin();
AdjListGraph fromFile();

AdjListGraph fromStream(istream& stream);
