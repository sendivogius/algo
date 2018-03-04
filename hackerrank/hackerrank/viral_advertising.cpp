#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

//https://www.hackerrank.com/challenges/strange-advertising/problem

using namespace std;

unsigned int getTotalAdverts(int n){
	n--;
	unsigned int k = 2;
	unsigned long tot = 2;
	for(int i = 0; i < n; i++){
		k = (k*3)/2;
		tot += k;
	}
	return tot;
}
//
//int main() {
//	int n;
//	cin >> n;
//	cout << getTotalAdverts(n) << endl;
//	
//}
