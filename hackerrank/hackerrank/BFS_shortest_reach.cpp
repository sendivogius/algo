#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include "Graphs.h"

using namespace std;

//https://www.hackerrank.com/challenges/bfsshortreach


//int main(){
//	int queries;
//	cin >> queries;
//	while (queries--){
//		AdjListGraph g = fromStream(cin);
//		
//		int start;
//		cin >> start;
//
//		auto distances = NodeBFS(g, start-1);
//
//		for (size_t i = 0; i < distances.size(); i++){
//			if (start - 1 == i) continue;
//			if (distances[i] > 0)
//				cout << distances[i] * 6 << " ";
//			else
//				cout << distances[i] << " ";
//		}
//		cout << endl;
//	}
//
//}