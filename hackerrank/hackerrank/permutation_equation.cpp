#include <vector>
#include <numeric>
#include <iostream>
#include <algorithm>

//https://www.hackerrank.com/challenges/permutation-equation

using namespace std;

vector<int> rotate(const vector<int>& v)
{
	vector<int> result(v.size());
	for(int i = 0; i < v.size(); i++)
	{
		result[v[i]] = i;
	}
	vector<int> result2(v.size());
	for(int i = 0; i < v.size(); i++)
	{
		result2[i] = result[result[i]];
	}
	return result2;
}

//
//
//
//int main() {
//    int n;
//    cin >> n;
//    vector<int> ar(n);
//    for(int ar_i = 0; ar_i < n; ar_i++){
//		int k;
//		cin >> k;
//		ar[ar_i] = --k;
//    }
//    vector<int> result = rotate(ar);
//    for(int i : result)
//		cout << i+ 1<< endl;
//    return 0;
//}

