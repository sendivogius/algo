#include <iostream>
#include <string>
using namespace std;

// https://www.hackerrank.com/challenges/day-of-the-programmer

string dayOfProgrammer(int year)
{
	if(year == 1918)
		return "26.09.1918";
	
	auto isLeap = (year < 1918 && (year % 4 == 0)) || (year > 1918 && ( (year % 400)==0 || ( (year % 4)==0 && (year%100)!=0)));
	string s;
	if(isLeap)
		s = "12.09." + std::to_string(year);
	else
		s = "13.09." + std::to_string(year);
	return s;
}

//
//int main(){
//    int year;
//    cin >> year;
//
//	cout << dayOfProgrammer(year);
//    return 0;
//}
//

