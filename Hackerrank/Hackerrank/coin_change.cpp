#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//https://www.hackerrank.com/challenges/coin-change/problem

long getWays(long n, vector<long>& coins){

	vector<long> ways(n+1);
	ways[0] = 1;
	for(auto& c : coins)
	{
		for(size_t amount = c; amount <= n; amount++)
		{
			ways[amount] += ways[amount-c];
		}
	}

	return ways[n];
}

//int main() {
//    int n;
//    int m;
//    cin >> n >> m;
//    vector<long> c(m);
//    for(int c_i = 0; c_i < m; c_i++){
//       cin >> c[c_i];
//    }
//    // Print the number of ways of making change for 'n' units using coins having the values given by 'c'
//    long ways = getWays(n, c);
//	cout << ways << endl;
//    return 0;
//}

