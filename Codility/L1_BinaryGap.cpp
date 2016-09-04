#include "L1_BinaryGap.h"

int L1_BinaryGap::solution(int N)
{
	size_t longest = 0, current = 0;
	while((N & 1) == 0 && N != 0)
		N >>= 1;

	while(N != 0)
	{
		if(N & 1)
		{
			longest = (current > longest) ? current : longest;
			current = 0;
		}
		else
		{
			current++;
		}
		N >>= 1;
	}

	return longest;
}

