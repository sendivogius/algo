#include<vector>
#include<numeric>
#include "math_utils.h"

using namespace std;

int gcd(int a, int b)
{
    for (;;)
    {
        if (a == 0) return b;
        b %= a;
        if (b == 0) return a;
        a %= b;
    }
}

int lcm(int a, int b)
{
    int temp = gcd(a, b);

    return temp ? (a / temp * b) : 0;
}

int gcdv(const vector<int>& v)
{
	return std::accumulate(v.begin(), v.end() , 1, gcd);
}

int lcmv(const vector<int>& v)
{
	return std::accumulate(v.begin(), v.end() , 1, lcm);
}
