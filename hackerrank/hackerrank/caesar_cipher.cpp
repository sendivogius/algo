#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// https://www.hackerrank.com/challenges/caesar-cipher-1

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    for(auto c : s){
        if(c >= 'a' && c <= 'z')
            cout << char(((c-'a')+k)%('z'-'a'+1)+'a');
        else if(c >= 'A' && c <= 'Z')
            cout << char(((c-'A')+k)%('Z'-'A'+1)+'A');
        else
            cout << c;
    }
    return 0;
}

