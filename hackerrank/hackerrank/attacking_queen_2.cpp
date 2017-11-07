#include<vector>
#include<numeric>
#include<algorithm>
#include<iostream>

using namespace std;

//https://www.hackerrank.com/challenges/queens-attack-2

class QueensAttack{
	typedef pair<int, int> position;
	vector<position> obstacles;
	const position queen_position;

public:
	QueensAttack(int row, int col, int size) :
		queen_position(make_pair(row, col))
	{
		const int n1 = size+1;
		//vertical
		obstacles.push_back(make_pair(0, col));
		obstacles.push_back(make_pair(n1, col));

		//horizontal
		obstacles.push_back(make_pair(row, 0));
		obstacles.push_back(make_pair(row, n1));

		const int rc = row - col;
		const int cr = col - row;
		
		// diagonal /
		obstacles.push_back(make_pair(max(0, rc), max(0, cr)));
		obstacles.push_back(make_pair(n1-max(0, cr), n1-max(0, rc))); //todo onwads

		const int randc = row + col;
		// diagonal \ 
		obstacles.push_back(make_pair(min(n1, randc), max(0, randc-n1)));
		obstacles.push_back(make_pair(max(0, randc-n1), min(n1, randc))); 
	}

	unsigned int getAttacksNumber() const
	{
		unsigned int fields = 0;
		for(const auto& o: obstacles)
		{
			fields += max(abs(o.first-queen_position.first), abs(o.second-queen_position.second))-1;
		}
		return fields;
	}

	void addObstacle(int row, int col)
	{
		const position to_new = make_pair(row-queen_position.first, col-queen_position.second);
		const int dist_to_new = to_new.first*to_new.first + to_new.second*to_new.second;

		//go through obstacles and check if they are on the same line
		for(auto& o: obstacles)
		{
			const position to_o = make_pair(o.first-queen_position.first, o.second-queen_position.second);
			double dr = 0, dc = 0;
			
			if(to_o.first)
				dr = to_new.first / static_cast<double>(to_o.first);
			if(to_o.second)
				dc = to_new.second/ static_cast<double>(to_o.second);
			if(dc != 0 && dr != 0 && dc != dr)
				continue;
			if(dc < 0 || dr < 0)
				continue;
			if(dc == 0 && to_new.second != 0)
				continue;
			if(dr == 0 && to_new.first!= 0)
				continue;
			
			if(dr < 1)
				o = make_pair(row, col);
			return;

		}




	}
};

//int main() {
//    int n, k, q_r, q_c;
//    cin >> n >> k >> q_r >> q_c;
//
//	QueensAttack qa(q_r, q_c, n);
//
//	while(k--)
//	{
//		int o_r, o_c;
//		cin >> o_r >> o_c;
//		qa.addObstacle(o_r, o_c);
//	}
//
//    cout << qa.getAttacksNumber() << endl;
//    return 0;
//}
//
//
