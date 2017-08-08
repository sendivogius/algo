#include <iostream>

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

	//sth to hold data
public:
	int nodesCount() {return 0;}
	int edgesCount() {return 0;}
	void addNode(int n) {}
	void addEdge(int from, int to) {}

	Graph(int nodes, int edges) {}
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
			g.addEdge(a,b);
		}


	}

}