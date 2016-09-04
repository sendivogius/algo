#include <iostream>
using namespace std;

class safe{
	int money;

public:
	safe():money(1){};

	template<typename T>
	void print(T t) {
		cout << "You have " << money << endl;
	}
};


//change below



int main(){
	safe s;

	s.print(true);
}
	