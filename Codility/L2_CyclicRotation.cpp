#include "L2_CyclicRotation.h"

void rotate(vector<int> &A)
{
	if(A.empty())
		return;
	int tmp = *(A.end()-1);
	for(auto i = A.size()-1; i > 0; i--)
		A[i] = A[i-1];
	A[0] = tmp;

}


vector<int> L2_Arrays::solution(vector<int> &A, int K)
{
	for(int i = 0; i < K; i++)
		rotate(A);
	return A;
}

