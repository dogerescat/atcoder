#include <iostream>
#include <vector>
#include <set>
using namespace std;
set<int> primry(int n) {
	set<int> p;
	for(int i = 2; i <= n; i++) {
		bool ok = false;
		for(int j = 2; j * j <= i; j++) {
			if(i % j == 0) ok = true;
		}
		if(!ok) p.insert(i);
	}
	return p;
}
int main() {
	int q; cin >> q;
	vector<int> a(100001);	
	set<int> p = primry(100001);
	for(auto i : p) {
		if(p.count((i+1) / 2)) {
			a[i] = 1;
		}
	}
	for(int i = 1; i < 100001; i++) a[i] += a[i-1];	
	for(int i = 0; i < q; i++) {
		int l, r; cin >> l >> r;
		cout << a[r] - a[l-1] << endl;
	}	
}
