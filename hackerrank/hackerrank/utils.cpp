#include <iostream>
#include <vector>

using namespace std;

template<class T>
class SubsetDivider{
	vector<T> _numbers;
	unsigned long long _currentSubset;

public:
	SubsetDivider(vector<T> nums):
		_numbers(nums), _currentSubset(0)
	{
	}

	bool hasNext()const{
		return _currentSubset < (1 << _numbers.size());
	}

	vector<T> getNext(){
		vector<T> subset;
		const auto num = _currentSubset++;
		for(int i = 0; i < _numbers.size(); i++)
		{
			const auto mask = (0x1 << i);
			if((num & mask) == mask)
				subset.push_back(_numbers[i]);
		}
		return subset;
	}

};
