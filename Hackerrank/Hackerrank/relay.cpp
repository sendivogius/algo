#include <iostream>
#include <vector>
#include <map>

using namespace std;

map<int, long long> minPrices;


long long raceAgainstTime(long long startPrice, int start_height, int start, vector<int>& heights, vector<int>& prices) {
	auto cached = minPrices.find(start);
	if(cached != minPrices.end())
	{
	   //element found;
	   return cached->second;
	}

	int currentHeight = start_height;
	long long currentPrice = startPrice;
	int doChange = 0;
	for(int i = start; i < heights.size(); i++){
		currentPrice++; //moving to next station
		
		int changePrice = abs(heights[i] - currentHeight);
		changePrice += prices[i];

		if(heights[i] > currentHeight){
			//mandatory change
			currentPrice += changePrice;
			currentHeight = heights[i];
			continue;
		}
			
		if(changePrice < 0){
			auto noChangePrice = raceAgainstTime(currentPrice, currentHeight, i+1, heights, prices) ;
			auto changedPrice = raceAgainstTime(currentPrice+changePrice, heights[i], i+1, heights, prices);
			minPrices[i] = min(changedPrice, noChangePrice);
			return minPrices[i];
		}
	}

	return currentPrice+1;

}
//
//int main() {
//    int n;
//    cin >> n;
//    int mason_height;
//    cin >> mason_height;
//    vector<int> heights(n-1);
//    for(int heights_i = 0; heights_i < n-1; heights_i++){
//       cin >> heights[heights_i];
//    }
//    vector<int> prices(n-1);
//    for(int prices_i = 0; prices_i < n-1; prices_i++){
//       cin >> prices[prices_i];
//    }
//    long long result = raceAgainstTime(0, mason_height,0, heights, prices);
//    cout << result << endl;
//    return 0;
//}
//

