#include<vector>
#include<algorithm>
#include<iostream>


using namespace std;

//https://www.hackerrank.com/challenges/between-two-sets



int migratoryBirds(const vector<int>& birds) {
	vector<unsigned int> types(5);
	for(int b : birds)
		types[b-1]++;
	return distance(types.begin(), max_element(types.begin(), types.end()))+1;
}

//int main() {
//    int n;
//    cin >> n;
//    vector<int> ar(n);
//    for(int ar_i = 0; ar_i < n; ar_i++){
//       cin >> ar[ar_i];
//    }
//    int result = migratoryBirds(ar);
//    cout << result << endl;
//    return 0;
//}