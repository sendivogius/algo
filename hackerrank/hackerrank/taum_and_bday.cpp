#include <iostream>


using namespace std;

// https://www.hackerrank.com/challenges/taum-and-bday

unsigned long long  calc_amount(long long int x, long long  y, long long  z, long long  b, long long  w){
	if(abs(x-y) > z)
	{
		//conversion is profitable
		if(x > y)
		{
			return y*(b+w)+z*b;
		}
		return x*(b+w)+z*w;

	}
	return x*b+y*w;

}
//int  main()
//{
//	 long long t, x, y, z, b, w;
//	cin >> t;
//	while(t--){
//		cin >> b >> w >> x >> y >> z;
//		cout << calc_amount(x, y, z, b, w) << endl;
//	}
//	return 0;
//
//}