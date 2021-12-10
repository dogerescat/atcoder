#include <iostream>
#include <vector>
#include <set>
using namespace std;
using ll = long long;

int main() {
	const int N = 1048576;
	int q; cin >> q;
	vector<ll> A(N, -1);	
	set<int> s;
	for(int i = 0; i < N; i++) s.insert(i);
	for(int i = 0; i < q; i++) {
		int t; ll x; cin >> t >> x;
		int h = x%N;
		if(t == 1) {
			auto it = s.lower_bound(h);
			if(it == s.end()) it = s.begin();
			A[*it] = x;
			s.erase(it);
		} else {
			cout << A[h] << endl;
		}
	}
}

