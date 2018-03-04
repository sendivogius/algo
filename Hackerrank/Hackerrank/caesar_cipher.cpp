#include <iostream>
#include <string>
using namespace std;

// https://www.hackerrank.com/challenges/caesar-cipher-1


string cipher(const string& s, int k)
{
	string out(s);
	for(auto i = 0; i < s.length(); i++){
		char c = s[i];
		if(c >= 'a' && c <= 'z')
			out[i] = char(((c-'a')+k)%('z'-'a'+1)+'a');
		else if(c >= 'A' && c <= 'Z')
			out[i] =  char(((c-'A')+k)%('Z'-'A'+1)+'A');
    }
	return out;
}


//int main(){
//    int n;
//    cin >> n;
//    string s;
//    cin >> s;
//    int k;
//    cin >> k;
//
//	cout << cipher(s, k);
//    return 0;
//}
//

