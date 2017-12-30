#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

// https://www.hackerrank.com/challenges/beautiful-triplets/

int findTriplets(const vector<int>& birds, int d) {
	if(birds.size() < 3)
		return 0;
	
	int sum = 0;
	
	for(int i = 0; i < birds.size()-2; i++){
		int j = i+1;
		while(j < birds.size() && birds[j] - birds[i]<d)
			j++;
		if(j == birds.size() || birds[j] - birds[i] != d)
			continue;

		int k = j+1;
		while(k < birds.size() && birds[k] - birds[j]<d)
			k++;
		if(k == birds.size() || birds[k] - birds[j] != d)
			continue;
		sum++;
	}
	return sum;
}

//int main() {
//    int n, d;
//    cin >> n >> d;
//    vector<int> ar(n);
//    for(int ar_i = 0; ar_i < n; ar_i++){
//       cin >> ar[ar_i];
//    }
//    int result = findTriplets(ar, d);
//    cout << result << endl;
//    return 0;
//}