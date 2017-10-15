#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool counter(unsigned long long n){
	bool result = true;
	while(n != 1){
		if( (n & (n-1)) == 0 ) //n is power of 2
		{
			n >>= 1;
		}
		else
		{
			//find max power of 2 in n
			for(int k = 63; k > 0; k--)
			{
				if(n&(1ull<<k)){
					n -= (1ull<<k);
					break;
				}
			}
		}
		result = !result;
	}
	return result;
}

//int main() {
//    int t;
//	cin >> t;
//	while(t--){
//		unsigned long long n;
//		cin >> n;
//		cout << (counter(n) ? "Richard" : "Louise") << endl;
//	}
//    return 0;
//}
