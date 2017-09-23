#include<vector>
#include<numeric>
#include<iostream>
#include "math_utils.h"
#include "between_two_sets.h"

using namespace std;

//https://www.hackerrank.com/challenges/between-two-sets


bool testX(const vector<int>& a, const vector<int>& b, int x)
{
	for(int aa: a){
		if(x % aa)
			return false;
	}

	for(int bb: b){
		if(bb % x)
			return false;
	}

	return true;
}

int getTotalX(const vector<int>& a, const vector<int>& b) {
    int b_gcd = gcdv(b);
	int a_lcm = lcmv(a);

	int cnt = 0;
	for(int s = a_lcm; s <= b_gcd; s+=a_lcm)
		if(testX(a, b, s))
			cnt++;
	return cnt;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    cout << getTotalX(a, b) << endl;
    return 0;
}
