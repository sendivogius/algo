#include "L3_FrogJmp.h"
#include <cmath>

using namespace std;

int L3_FrogJmp::solution(int X, int Y, int D)
{
	return (int)(ceil((Y-X)/(double)D));
}

