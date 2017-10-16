#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


string rotate(const string& msg)
{
    string out;
	int cols = ceil(sqrt(msg.size()));    
	int rows = floor(sqrt(msg.size()));
	if(rows*cols < msg.size())
		rows++;

    for(int i = 0; i < cols*rows; i++){
		int k = ceil(i/rows) + cols*(i%rows);
		if(k < msg.size())
			out += msg[k];
        if((i+1) % rows == 0)
            out += ' ';
    }
    return out;
}

//int main(){
//    string s;
//    cin >> s;
//    cout << rotate(s);
//    return 0;
//}
