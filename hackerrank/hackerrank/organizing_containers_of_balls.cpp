#include <vector>
#include <numeric>
#include <iostream>
#include <algorithm>

//https://www.hackerrank.com/challenges/organizing-containers-of-balls

using namespace std;

bool check_balls(const vector<vector<int>>& M){
	const int n = M.size();
	vector<int> row_sums(n);
    vector<int> col_sums(n);
    for(int row = 0; row < n; row++){
        row_sums[row] = std::accumulate(M[row].begin(), M[row].end(), 0);
    }
    for(int col = 0; col < n; col++){
        int col_sum = 0;
        for(int row = 0; row < n; row++){
            col_sum += M[row][col];
        }
        col_sums[col] = col_sum;
    }
	sort(row_sums.begin(), row_sums.end());
	sort(col_sums.begin(), col_sums.end());
	return row_sums == col_sums;
}


//
//int main(){
//    int q;
//    cin >> q;
//    while(q--){
//        int n;
//        cin >> n;
//        vector< vector<int> > M(n,vector<int>(n));
//        for(int M_i = 0;M_i < n;M_i++){
//           for(int M_j = 0;M_j < n;M_j++){
//              cin >> M[M_i][M_j];
//           }
//        }
//		if(check_balls(M))
//			cout << "POSSIBLE\n";
//		else
//			cout << "IMPOSSIBLE\n";
//    }
//    return 0;
//}
//
