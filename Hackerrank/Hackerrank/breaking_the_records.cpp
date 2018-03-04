#include <iostream>
#include <vector>
#include <tuple>

//https://www.hackerrank.com/challenges/breaking-best-and-worst-records

using namespace std;

pair<int, int> getRecord(vector <int> scores){
    int min_score = scores[0], max_score = scores[0];
    int min_cnt = 0, max_cnt = 0;;
    for(int score : scores)
    {   
        if(score > max_score){
            max_cnt++;
            max_score = score;
        }
        if(score < min_score){
            min_cnt++;
            min_score = score;
        }
    }
    return make_pair(max_cnt, min_cnt);
}

//int main() {
//    int n;
//    cin >> n;
//    vector<int> s(n);
//    for(int s_i = 0; s_i < n; s_i++){
//       cin >> s[s_i];
//    }
//    auto result = getRecord(s);
//	cout << result.first << " " << result.second << endl;
//    return 0;
//}
