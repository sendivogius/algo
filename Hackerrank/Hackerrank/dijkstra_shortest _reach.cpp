#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <limits>
#include <functional>
#include <map>
#include "Graphs.h"

using namespace std;

//https://www.hackerrank.com/challenges/dijkstrashortreach


//int main(){
//	int queries;
//	cin >> queries;
//	while (queries--){
//		AdjListGraphWeighted g = fromStream(cin);
//		
//		int start;
//		cin >> start;
//
//		auto distances = Dijkstra(g, start-1);
//
//		for (size_t i = 0; i < distances.size(); i++){
//			if (start - 1 == i) continue;
//			if (distances[i] != numeric_limits<int>::max())
//				cout << distances[i]  << " ";
//			else
//				cout << -1 << " ";
//		}
//		cout << endl;
//	}
//
//}
