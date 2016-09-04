#include "L3_PermMissingElem.h"
#include <algorithm>
#include <vector>

using namespace std;

int L3_PermMissingElem::solution(vector<int> &A)
{
	vector<int> exists(A.size()+1, 0);
	for(const int& i: A)
		exists[i-1] = 1;
	auto it = find(exists.begin(), exists.end(), 0);
	return it-exists.begin()+1;
}

