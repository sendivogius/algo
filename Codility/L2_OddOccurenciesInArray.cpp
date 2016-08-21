#include "L2_OddOccurenciesInArray.h"
#include <algorithm>

using namespace std;

int L2_OddOccurenciesInArray::solution(vector<int> &A)
{
	if(A.size() == 1)
		return *A.begin();
	sort(A.begin(), A.end());
	int i = 0;
	while(true){
		if(A[i] != A[i+1])
			return A[i];
		i += 2;
	}
	
	return 0;
}

