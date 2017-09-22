#pragma once

#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;


class IGraph{
public:
	virtual int nodesCount() const = 0;
	virtual int edgesCount() = 0;
};

class Graph : public IGraph{
	typedef vector<int> intvec;
	vector<intvec> nodes;
public:
	int nodesCount() const { return nodes.size(); }
	int edgesCount() { return 0; }

	void addEdge(int from, int to)
	{
		nodes[from].push_back(to);
		nodes[to].push_back(from);
	}

	Graph(int nodes){
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


vector<int> NodeBFS(const Graph& g, int node);

Graph fromCin();
Graph fromFile();

Graph fromStream(istream& stream);