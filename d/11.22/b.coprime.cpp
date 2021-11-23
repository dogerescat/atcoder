#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	const int L = 100001;
	vector<int> x(L);
	for(int i = 0; i < n; i++) {
		int a; cin >> a;
		x[a] = 1;
	}
	vector<int> b; 
	for(int i = 2; i < L; i++) {
		bool flag = false;
		for(int j = i; j < L; j += i) {
			if(x[j]) flag = true;
		}
		if(flag) b.push_back(i);
	}
	vector<bool> ok(m+1, true);
	for(auto i : b) {
		for(int j = i; j <= m; j += i) {
			ok[j] = false;
		}
	}
	int cnt = 0;
	for(int i = 1; i <= m; i++) {
		if(ok[i]) cnt++;
	}
	cout << cnt << endl;
	for(int i = 1; i <= m; i++) {
		if(ok[i]) cout << i << endl;
	}
}
