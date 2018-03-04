#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// https://www.hackerrank.com/challenges/counting-valleys/problem

class ValleyCounter
{
	size_t _count;
	int alt;

public:
	ValleyCounter():alt(0),_count(0){}
	void add(char c)
	{
		if(c == 'U'){
			alt++;
			if(alt == 0)
				_count++;
		}
		else if(c == 'D')
			alt--;

	}

	size_t count()
	{
		return _count;
	}



};

//int main() {
//    int t;
//	cin >> t;
//	ValleyCounter vc;
//	while(t--){
//		char c;
//		cin >> c;
//		vc.add(c);
//	}
//	cout << vc.count() << endl;
//    return 0;
//}

