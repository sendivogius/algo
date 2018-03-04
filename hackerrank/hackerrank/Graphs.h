#pragma once
#include <numeric>
#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <map>

using namespace std;


class IGraph{
public:
	virtual size_t nodesCount() const {return 1;};
	virtual size_t edgesCount() const {return 1;};
	
	virtual void addEdge(int from, int to, int weight = 1) {};
};

class MatrixGraph : public IGraph
{
	
};

class  EdgeListGraph : public IGraph
{
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

class AdjListGraphWeighted : public IGraph{
	//for each node we keep list of neighbourings ids
	//for now there is no possibility to add weight for edges
	typedef map<int, int> intvec;
	vector<intvec> nodes;
public:
	size_t nodesCount() const { return nodes.size(); }
	size_t edgesCount() { 
		auto lambda = [&](int a, intvec b){return a + b.size(); };
		int total_edges = std::accumulate(nodes.begin(), nodes.end(), 0, lambda);
		return total_edges/2; 
	}

	void addEdge(int from, int to, int weight)
	{
		if(nodes[from].find(to) == nodes[from].end() || nodes[from][to] > weight)
		{
			nodes[from][to] = weight;
			nodes[to][from] = weight;
		}
	}

	AdjListGraphWeighted(int nodes = 1){
		this->nodes.resize(nodes);
	}

	intvec getNeighbours(int n)const{
		return nodes[n];
	}

	void print() const
	{
		for (size_t i = 0; i < nodes.size(); i++)
		{
			auto neighbours = nodes[i];
			cout << i + 1 << " -> [";

			for (auto j = neighbours.begin(); j != neighbours.end(); j++)
				cout << j->first + 1 << "(" << j->second << ") ";
			cout << "]\n";
		}
	}
};


vector<int> NodeBFS(const AdjListGraph& g, int node);
vector<int> Dijkstra(const AdjListGraphWeighted& g, int node);

AdjListGraphWeighted fromCin();
AdjListGraphWeighted fromFile();

AdjListGraphWeighted fromStream(istream& stream);

