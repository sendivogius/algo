#include <iostream>
#include <vector>

using namespace std;

//https://www.hackerrank.com/challenges/torque-and-development

//todo extract graphs representation and algorithms
//todo implement union find DS

class IGraph{
public:
	virtual int nodesCount() = 0;
	virtual int edgesCount() = 0;
	virtual void addNode(int n) = 0;
	virtual void addEdge(int from, int to) = 0;

};


//extract node class
//extract vertex class

//todo different graph representtions adjmatrix, edges list, adj list
class Graph: public IGraph{
	typedef vector<int> intvec;
	vector<intvec> nodes;
public:
	int nodesCount() {return 0;}
	int edgesCount() {return nodes.size();}
	void addNode(int n)
	{
	}

	void addEdge(int from, int to)
	{
		nodes[from].push_back(to);
		nodes[to].push_back(from);
	}
	
	Graph(int nodes, int edges){
		this->nodes.resize(nodes);
	}

	void print() const
	{
		for(int i = 0; i < nodes.size(); i++)
		{
			cout << i+1 << " -> [";
			for(int j = 0; j < nodes[i].size(); j++)
				cout << nodes[i][j]+1 << " ";
			cout << "]\n";
		}
	}
};





int main(){
	int q;
	cin >> q;
	while(q--){
		int n, m, clib, croad;
		cin >> n >> m >> clib >> croad;
		Graph g(n, m);
		while(m--){
			int a, b;
			cin >> a >> b;
			g.addEdge(a-1,b-1);
		}
			
		g.print();
		long mincost = 0;
		if(clib < croad)
			mincost = n*clib;
		else
		{

			//num of connected components * clib + sum(nodes in compnent -1   * croad)
		}

	}
	cin >> q;
	
}