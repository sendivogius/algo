#include <iostream>
#include <string>
using namespace std;

//https://www.hackerrank.com/challenges/the-time-in-words

const string nouns[]= {"", 
	"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", 
	"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen",
    "twenty"};


string to_words(int h, int m)
{
	if(m == 0)
		return nouns[h] + " o' clock";
	if(m == 15)
		return "quarter past " + nouns[h];
	if(m == 30)
		return "half past " + nouns[h];
	if(m == 45)
		return "quarter to " + nouns[h+1];
	
	int m2 = min(m, 60-m);
	string minutes = (m2 <= 20 ? nouns[m2] : nouns[20] + " " + nouns[m2%20]);
	string minues2 = " minute" + string(m2 > 1 ? "s" : "");

	if(m < 30)
		return minutes + minues2 + " past " + nouns[h];
	
	return minutes + minues2 + " to " + nouns[h+1];
	
}

//
//int main(){
//    int h, m;
//	cin >> h >> m;
//    cout << to_words(h,m);
//    return 0;
//}
