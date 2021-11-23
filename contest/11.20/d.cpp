#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
	int q; cin >> q;
	int n = 1048576;
	vector<ll> A(n, -1);
	set<int> s;
	for(int i = 0; i < q; i++) {
		int t; ll x;
		cin >> t >> x;
		int h = x % n;
		if(t == 1) {
			 auto ite = lower_bound(s.begin(), s.end(), h);
			s.insert(h);	
			A[h] = x;
		} else {
			cout << A[h] << endl;		
		}
	}	
}
