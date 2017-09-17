#include "L4_PermCheck.h"
#include <vector>

using namespace std;

int L4_PermCheck::solution(vector<int> &A)
{
	vector<int> exists(A.size(), 0);
	for(const int& i: A){
		if(i > A.size() || exists[i-1])
			return 0;
		exists[i-1] = 1;
	}
	return 1;
}

