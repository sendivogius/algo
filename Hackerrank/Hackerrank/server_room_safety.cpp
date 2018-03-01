#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool checkLeft(vector<int>& height, vector<int>& position)
{
	for(int i = 0; i < height.size()-1; i++)
	{
		if(position[i]+height[i] >= position[i+1])
			return true;
	}
	return false;

}

string checkAll(int n, vector<int>& height, vector<int>& position) {
	const bool left = checkLeft(height, position);	
	std::reverse(std::begin(height), std::end(height));
	std::reverse(std::begin(position), std::end(position));
	const bool right = checkLeft(height, position);
	if(left && right)
		return "BOTH";
	if(left)
		return "LEFT";
	if(right)
		return "RIGHT";
	return "NONE";
}

//int main() {
//    int n;
//    cin >> n;
//    vector<int> position(n);
//    for(int position_i = 0; position_i < n; position_i++){
//       cin >> position[position_i];
//    }
//    vector<int> height(n);
//    for(int height_i = 0; height_i < n; height_i++){
//       cin >> height[height_i];
//    }
//    string ret = checkAll(n, height, position);
//    cout << ret << endl;
//    return 0;
//}
//
