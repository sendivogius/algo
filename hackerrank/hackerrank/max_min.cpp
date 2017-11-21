#include <iostream>
#include <algorithm>
#include <limits>
#include <vector>

using namespace std;

//https://www.hackerrank.com/challenges/angry-children/problem


int solveMinMax(vector<int>& s, int k){
    sort(s.begin(), s.end());
	k--;
	int min_uniformity = std::numeric_limits<int>::max();
	for(int i = 0; i < s.size()-k; i++){
		int unif = s[i+k]-s[i];
		if(unif < min_uniformity)
			min_uniformity = unif;
	}
	return min_uniformity;
}

//int main() {
//    int n, k;
//    cin >> n >> k;
//    vector<int> s(n);
//    for(int s_i = 0; s_i < n; s_i++){
//       cin >> s[s_i];
//    }
//	cout << solveMinMax(s, k) << endl;
//    return 0;
//}


