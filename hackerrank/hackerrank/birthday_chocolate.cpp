#include <iostream>
#include <vector>

using namespace std;

//https://www.hackerrank.com/challenges/the-birthday-bar



int solveBirthday(vector<int> s, int day, int month){
    if(s.size() < month)
		return 0;
	int sum = 0;
	for(int i = 0; i < month; i++)
		sum += s[i];
	int cnt = (sum == day);
	for(int i = month; i < s.size(); i++){
		sum -= s[i-month];
		sum += s[i];
		cnt += (sum == day);
	}
	return cnt;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int day, month; 
    cin >> day >> month;
    cout << solveBirthday(s, day, month) << endl;
    return 0;
}
