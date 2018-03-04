#include <iostream>
#include <iterator> //for std::ostream_iterator
#include <algorithm> //for std::copy
#include <set>

using namespace std;

// https://www.hackerrank.com/challenges/electronics-shop

int calc_price(const set<int> & mices, const set<int> & keyboards, const int totalPrice){
	if(*mices.begin() + *keyboards.begin() > totalPrice)
		return -1;
	
	int maxPrice = 0;	
	for(set<int>::iterator mousePrice = mices.begin(); mousePrice != mices.end(); mousePrice++)
	{
		if(*mousePrice >= totalPrice)
			break;
				
		int maxAllowedKb = totalPrice-*mousePrice;
		set<int>::iterator maxKeyb = keyboards.lower_bound(maxAllowedKb);

		int kbPrice = -1;
		if(maxAllowedKb == *maxKeyb || *keyboards.begin() == maxAllowedKb)
			kbPrice = maxAllowedKb;
		else
			kbPrice = *--maxKeyb;

		if(kbPrice >= 0 && kbPrice + *mousePrice> maxPrice)
			maxPrice = kbPrice + *mousePrice;
		if(maxPrice == totalPrice)
			break;

	}
	
	return maxPrice;
}

//int main()
//{
//	int n, m, s;
//	cin >> s >> n >> m;
//	set<int> keyboards;
//	while(n--){
//		int k;
//		cin >> k;
//		keyboards.insert(k);
//	}
//	set<int> mices;
//	while(m--){
//		int k;
//		cin >> k;
//		mices.insert(k);
//	}
//
//
//	cout << calc_price(mices, keyboards, s);
//	return 0;
//}
