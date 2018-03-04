#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


vector<int> rotate(const vector<int>& v, int d){
	const size_t n = v.size();
	vector<int> rotated(n);	
	for(int i = 0; i < n; i++)
		rotated[i] = v[(i+d)%n];
	return rotated;
}

//int main() {
//    int n, d;
//	cin >> n >> d;
//	vector<int> v(n);
//	for(int i = 0; i < n; i++)
//		cin >> v[i];
//	
//	auto rotated = rotate(v, d);
//	for(auto e : rotated)
//		cout << e << " ";
//	cout << endl;
//	
//    return 0;
//}

