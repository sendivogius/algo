#include <iostream>
#include <queue>
#include <functional>

using namespace std;

typedef priority_queue <long, vector<long>, greater<long> > min_queue;

long examRush(min_queue& minq, int t) {
	long c = 0;
	while(!minq.empty() && minq.top() <= t){
		t -= minq.top();
		minq.pop();
		c++;
	}

	return c;

}
//
//int main() {
//    int n;
//    int t;
//    cin >> n >> t;
//    min_queue min_heap;
//    while(n--){
//        long l;
//        cin >> l;
//        min_heap.push(l);
//    }
//    long result = examRush(min_heap, t);
//    cout << result << endl;
//    return 0;
//}

