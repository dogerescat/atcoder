#include <iostream>
#include <set>
using namespace std;

int main() {
	int L, Q; cin >> L >> Q;
	set<int> s;
	s.insert(0);
	s.insert(L);
	for(int i = 0; i < Q; i++) {
		int c, x; cin >> c >> x;
		if(c == 1) {
			s.insert(x);
		} else {
			auto ite = s.lower_bound(x);	
			int r = *ite;
			--ite;
			int l = *ite;
			int ans = r - l;
			cout << ans << endl;
		}
	}
}
