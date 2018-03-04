#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

// https://www.hackerrank.com/challenges/picking-numbers

vector<int> collect(const vector<int>& numbers)
{
	vector<int> hist(101);
	for(int i : numbers){
		hist[i]++;
	}
	return hist;
}

int pickNumber(const vector<int>& birds) {
	vector<int> hist = collect(birds);
	int sum = 0;
	for(int i = 0; i < hist.size()-1; i++)
		sum = max(sum, hist[i]+hist[i+1]);
	return sum;
}

//int main() {
//    int n;
//    cin >> n;
//    vector<int> ar(n);
//    for(int ar_i = 0; ar_i < n; ar_i++){
//       cin >> ar[ar_i];
//    }
//    int result = pickNumber(ar);
//    cout << result << endl;
//    return 0;
//}
