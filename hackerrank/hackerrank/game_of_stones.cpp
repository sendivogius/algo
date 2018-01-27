#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//https://www.hackerrank.com/challenges/game-of-stones-1/problem

int main() {
    int k;
    cin >> k;
    while(k--)
    {
        int t;
        cin >> t;
        cout <<((t%7 < 2) ? "Second\n" : "First\n");
    }
    return 0;
}
