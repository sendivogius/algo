#include <iostream>
#include <string>
using namespace std;

//https://www.hackerrank.com/challenges/mars-exploration


size_t sos_diff(const string& S)
{
	size_t diff = 0;
    for(auto i = 0; i < S.size(); i++){
        diff += ("SOS"[i%3] != S[i]);
    }
    return diff;
}


//int main(){
//    string S;
//    cin >> S;
//    cout << sos_diff(S);
//    return 0;
//}
