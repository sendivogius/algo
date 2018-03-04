//#include <iostream>
//#include <vector>
//#include <queue>
//#include <utility>
//#include <tuple>
//
//
//using namespace std;
//
////https://www.hackerrank.com/challenges/kruskalmstrsub
//
////todo extract graphs representation and algorithms
////todo implement union find DS
////extract node class
////extract vertex class
//
////todo different graph representtions adjmatrix, edges list, adj list
//
//
//typedef tuple<int, int, int> edgeInfo;
//
//
//struct NodesComparator{
//	bool operator()(const edgeInfo& e1, const edgeInfo& e2)
//	{
//		if (std::get<2>(e1) != std::get<2>(e2))
//			return std::get<2>(e1) > std::get<2>(e2);
//		const int w1 = std::get<0>(e1)+std::get<1>(e1);
//		const int w2 = std::get<0>(e2)+std::get<1>(e2);
//		if (w1 != w2)
//			return w1 > w2;
//		return std::get<0>(e1) > std::get<0>(e2);
//	}
//};
//
//class UnionSet{
//	vector<int> data;
//
//public:
//	UnionSet(int size) :
//		data(size)
//	{
//		for (size_t i = 0; i < data.size(); i++)
//			data[i] = i;
//	}
//
//	int findSet(int n)
//	{
//		if (data[n] == n)
//			return n;
//		return data[n] = findSet(data[n]);
//	}
//
//	void mergeSets(int n, int m)
//	{
//		data[findSet(n)] = findSet(m);
//	}
//
//
//	void print() const
//	{
//		for (size_t i = 0; i < data.size(); i++){
//			cout << i << " -> ";
//			int n = i;
//			while (n != data[n]){
//				cout << data[n] << " ";
//				n = data[n];
//			}
//			cout << endl;
//
//		}
//	}
//
//};
//
//
//class EdgesGraph{
//private:
//	priority_queue<edgeInfo, vector<edgeInfo>, NodesComparator> edges;
//	int nodes;
//public:
//	int nodesCount() const { return nodes; }
//	int edgesCount() { return edges.size(); }
//	void addNode(int n)
//	{
//	}
//
//	void addEdge(int from, int to, int weight)
//	{
//		edges.push(make_tuple(from, to, weight));
//	}
//
//	EdgesGraph(int nodes, int edges){
//		this->nodes = nodes;
//	}
//
//	unsigned long long minTree() {
//		UnionSet us(nodesCount());
//		unsigned long long int totWeight = 0;
//        int con = 0;
//        while (!edges.empty())
//		{
//			auto e = edges.top();
//			edges.pop();
//			const int from = get<0>(e);
//			const int to = get<1>(e);
//			const int weight = get<2>(e);
//			if (us.findSet(from) == us.findSet(to))
//				continue;
//            con++;
//			us.mergeSets(to, from);
//			totWeight += weight;
//		}
//		return totWeight;
//	}
//
//
//	void print()
//	{
//		cout << "\n";
//		while (!edges.empty())
//		{
//			auto e = edges.top();
//			cout << get<0>(e) << " " << get<1>(e) << " " << get<2>(e) << "\n";
//			edges.pop();
//		}
//	}
//};
//
//
//
//int main(){
//	int n, m;
//	cin >> n >> m;
//	EdgesGraph g(n, m);
//	while (m--){
//		int a, b, r;
//		cin >> a >> b>> r;
//		g.addEdge(a - 1, b - 1, r);
//	}
//	
//
//	cout << g.minTree();
//
//
//
//}
