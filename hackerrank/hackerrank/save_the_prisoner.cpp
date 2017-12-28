#include <iostream>

using namespace std;

//https://www.hackerrank.com/challenges/save-the-prisoner/problem

long long calc_prisoner(long long sweets, long long start, long long prisoners)
{
	return (start+sweets-2)%prisoners + 1;
}

int main() {
    int t;
    long long n, m, s;
    cin >> t;
    while(t--){
        cin >> n >> m >> s;
        cout << calc_prisoner(m, s, n) << endl;
    }
    return 0;
}
