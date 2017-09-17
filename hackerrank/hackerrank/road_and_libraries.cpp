#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <set>


using namespace std;

//https://www.hackerrank.com/challenges/torque-and-development

//todo extract graphs representation and algorithms
//todo implement union find DS
//extract node class
//extract vertex class

//todo different graph representtions adjmatrix, edges list, adj list


class IGraph{
public:
	virtual int nodesCount() const = 0;
	virtual int edgesCount() = 0;
	virtual void addNode(int n) = 0;
	virtual void addEdge(int from, int to) = 0;

};

class Graph: public IGraph{
	typedef vector<int> intvec;
	vector<intvec> nodes;
public:
	int nodesCount() const {return nodes.size();}
	int edgesCount() {return 0;}
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

	intvec getNeighbours(int n)const{
		return nodes[n];
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


set<int> NodeDFS(const Graph& g, int node)
{
	set<int> visited;
	stack<int> stack;
	stack.push(node);

	while(!stack.empty()){
		int currentNode = stack.top();
		stack.pop();
		if(visited.find(currentNode) != visited.end()) continue;

		//cout << "Visiting " << currentNode << endl;	//todo extract to fuction?
		visited.insert(currentNode);
		for(int node: g.getNeighbours(currentNode)){
			//if(!visited[node])		//todo check impact on perf on big graps
				stack.push(node);
		}
	}
	return visited;
}

vector<set<int>> getCompartments(const Graph& g){
	vector<set<int>> compartments;
	vector<int> compartmentsIds(g.nodesCount());

	for(int n = 0 ; n < g.nodesCount(); n++){
		if(compartmentsIds[n]) continue;
		auto visited = NodeDFS(g, n);
		compartments.push_back(visited);
		for(auto it: visited)
				compartmentsIds[it] = 1;
	}

	
	/*for(int i = 0; i < compartmentsIds.size(); i++)
	{
			cout << compartmentsIds[i] << " ";
	}
	cout << "]\n";*/

	return compartments;
}




int main(){
	int q;
	cin >> q;
	while(q--){
		unsigned long long n, m, clib, croad;
		cin >> n >> m >> clib >> croad;
		Graph g(n, m);
		while(m--){
			int a, b;
			cin >> a >> b;
			g.addEdge(a-1,b-1);
		}

		//g.print();
		unsigned long long mincost = 0;
		if(clib < croad)
			mincost = n*clib;
		else
		{
			auto compartments = getCompartments(g);
			auto compNum = compartments.size();
			mincost = compNum * clib;
			for(auto& com: compartments){
				mincost += (com.size()-1)*croad;
			}
		}
		cout << mincost << endl;

	}
	cin >> q;
	
}