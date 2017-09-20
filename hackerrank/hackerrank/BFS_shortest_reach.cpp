#include <iostream>
#include <vector>
#include <queue>
#include <utility>


using namespace std;

//https://www.hackerrank.com/challenges/bfsshortreach
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

class Graph : public IGraph{
	typedef vector<int> intvec;
	vector<intvec> nodes;
public:
	int nodesCount() const { return nodes.size(); }
	int edgesCount() { return 0; }
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
		for (size_t i = 0; i < nodes.size(); i++)
		{
			cout << i + 1 << " -> [";
			for (size_t j = 0; j < nodes[i].size(); j++)
				cout << nodes[i][j] + 1 << " ";
			cout << "]\n";
		}
	}
};


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




int main(){
	int q;
	cin >> q;
	while (q--){
		int n, m;
		cin >> n >> m;
		Graph g(n, m);
		while (m--){
			int a, b;
			cin >> a >> b;
			g.addEdge(a - 1, b - 1);
		}
		//g.print();

		int start;
		cin >> start;

		auto distances = NodeBFS(g, start-1);
		for (size_t i = 0; i < distances.size(); i++){
			if (start - 1 == i) continue;
			if (distances[i] > 0)
				cout << distances[i] * 6 << " ";
			else
				cout << distances[i] << " ";
		}
		cout << endl;

	}

}