#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

vector<int> rotatev(const vector<int>& v, int d){
	const size_t n = v.size();
	vector<int> rotated(n);	
	for(int i = 0; i < n; i++)
		rotated[i] = v[(i+d)%n];
	return rotated;
}

vector<vector<int>> layerize(int rows, int cols)
{
	const int layers_num = (min(rows, cols)+1)/2;
	vector<vector<int>> layers;
	layers.reserve(layers_num);

	for(int l_no = 0; l_no < layers_num; l_no++)
	{
		vector<int> layer;
		layer.reserve((cols+rows-4*l_no-2)*2);
		
		const int layer_cols = cols-2*l_no;
		const int layer_rows = rows-2*l_no;
		int item_index = (cols+1)*l_no;
		
		for(int idx = 0; idx < layer_cols; idx++)
			layer.push_back(item_index++);
		item_index--;

		for(int idx = 0; idx < layer_rows-1; idx++){
			item_index += cols;
			layer.push_back(item_index);
		}
		
		for(int idx = 0; layer_rows > 1 && idx < layer_cols-1; idx++)
			layer.push_back(--item_index);
		
		for(int idx = 0; layer_cols > 1 && idx < layer_rows-2; idx++){
			item_index -= cols;
			layer.push_back(item_index);
		}
		layers.push_back(layer);
	}
	return layers;
}


vector<int> layerRotate(const vector<int>& in, int rows, int cols, int rot)
{
	
	auto orginal_layers = layerize(rows, cols);
	decltype(orginal_layers) rotated_layers;
	rotated_layers.reserve(orginal_layers.size());

	for(const auto& layer: orginal_layers)
		rotated_layers.push_back(rotatev(layer, rot));

	auto rotated_in = in;

	for(int l = 0; l < orginal_layers.size(); l++)
	{
		auto layer = orginal_layers[l];
		auto rot_layer = rotated_layers[l];
		for(int i = 0; i < layer.size(); i++)
		{
			int org_idx = layer[i];
			int rot_idx = rot_layer[i];
			rotated_in[org_idx] = in[rot_idx];
		}
	}
		
	return rotated_in;
}

//int main(){
//    int m, n, r;
//	cin >> m >> n >> r;
//	int mn = m*n;
//	vector<int> v(mn);
//	for(int i = 0; i < mn; i++)
//		cin >> v[i];
//	auto out = layerRotate(v, m, n, r);
//	
//	for(int i = 0; i < m; i++){
//		for(int j = 0; j < n; j++){
//			cout << out[i*n+j] << " ";
//		}
//		cout << endl;
//	}
//}
