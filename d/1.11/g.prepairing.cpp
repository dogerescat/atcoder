#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	vector<int> b(n+1);
	for(int i = n; i > 0; i--) {
		int total = 0;
		for(int j = i; j <= n; j+=i) {
			if(b[j]) total++;
		}
		if(total % 2 != a[i-1]) b[i] = 1;
	}
	vector<int> ans;
	for(int i = 1; i <= n; i++) {
		if(b[i]) ans.push_back(i);
	}
	cout << ans.size() << endl;
	for(auto i : ans) {
		cout << i << " ";
	}
	cout << endl;
}
