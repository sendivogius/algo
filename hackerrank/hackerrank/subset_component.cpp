#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <string>
#include <functional>
#include "utils.cpp"

using namespace std;

//https://www.hackerrank.com/challenges/subset-component

int numberOfNodes(unsigned long long n){
	int i = 0;
	for(; n !=0; n >>= 1){
		if( (n & 0x01) == 0x01)
			i++;
	}
	return max(0, i-1);
}

vector<unsigned long long> createSubset(const vector<unsigned long long>& edges)
{
	vector<unsigned long long> subsets;
	bool merged = false;
	for(int i = 0; i < edges.size(); i++)
	{
		int matched = -1;
		for(int s = 0; s < subsets.size(); s++)
			if( (subsets[s] & edges[i]) != 0)
			{
				matched = s;
				break;
			}
		if(matched >= 0){
			subsets[matched] |= edges[i];
			merged = true;
		}
		else
			subsets.push_back(edges[i]);
	}

	if(merged)
		return createSubset(subsets);
	return subsets;
}



//
//int main(){
//	int n;
//	cin >> n;
//	vector<unsigned long long> vec;
//	vec.reserve(n);
//	while(n--){
//		unsigned long long k;
//		cin >> k;
//			vec.push_back(k);
//	}
//	SubsetDivider<unsigned long long> s(vec);
//	unsigned long long h_tot = 0;
//	while(s.hasNext()){
//		auto c = s.getNext();
//		auto a = createSubset(c) ;
//		auto h = 64ul - std::accumulate(a.begin(), a.end(), 0UL, [](unsigned long long acc, unsigned long long s){return acc + numberOfNodes(s);});
//		h_tot += h;
//	}
//	    cout << h_tot << endl;
//    return 0;
//}
//
//
