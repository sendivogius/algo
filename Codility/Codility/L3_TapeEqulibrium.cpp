#include "L3_TapeEqulibrium.h"
#include <numeric>

using namespace std;

int L3_TapeEqulibrium::solution(vector<int> &A)
{
	int left = *A.begin();
	int right = accumulate(A.begin()+1, A.end(), 0);
	int m = abs(left-right);

	for(auto current = A.begin()+1; current != A.end()-1; ++current)
	{
		left += *current;
		right -= *current;
		m = min(m, abs(left-right));
	}
	
	return m;
}

