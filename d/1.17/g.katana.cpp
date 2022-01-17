#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <algorithm>
using namespace std;
typedef pair<int, int> P;

int main() {
	int n, h; cin >> n >> h;
	vector<P> A(n);
	for(int i = 0; i < n; i++) {
		int a, b; cin >> a >> b;
		A[i].first = a;
		A[i].second = -b;
	}
	sort(A.begin(), A.end(), greater<P> ());
	priority_queue<int> heap;
	for(int i = 1; i < n; i++) {
		if(A[0].first < -A[i].second) heap.push(-A[i].second);
	}
	int ans = 0;
	while(h > 0) {
		if(h <= -A[0].second) h += A[0].second;	
		else if(!heap.size()) {
			h += A[0].second;		
			ans++;
			ans += (h + (A[0].first - 1)) / A[0].first;
			break;
		} else {
			int v = heap.top();	
			if(v >= A[0].first) {
				h -= v;
				heap.pop();
			} else {
				h += A[0].second;
				ans++;
				ans += (h + (A[0].first - 1)) / A[0].first;
				break;
			}
		}
		ans++;
	}
	cout << ans << endl;
}
