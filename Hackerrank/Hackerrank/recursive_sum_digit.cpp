#include <iostream>
#include <string>

// https://www.hackerrank.com/challenges/recursive-digit-sum
using namespace std;

int digitSum(string& s, int k) {
	int sum = 0;
	for(auto c: s){
		sum += c-'0';
		sum = sum / 10 + sum % 10;
	}
	int sum2 = 0;
	while(k > 0){
		sum2 += k % 10; 
		sum2 = sum2 / 10 + sum2 % 10;
		k /= 10;
	}
	sum *= sum2;
	sum = sum / 10 + sum % 10;

    return sum;
}

int main() {
    string n;
    int k;
    cin >> n >> k;
    int result = digitSum(n, k);
    cout << result << endl;
    return 0;
}
