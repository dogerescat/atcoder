#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> a(n);	
	for(int i = 0; i < n; i++) cin >> a[i];
	vector<int> c(1000001);
	int ans = 0;
	for(int i = 0; i < n; i++) {
		if(c[a[i]] != 0) {
			c[a[i]] = 2;
			continue;
		}
		for(int j = 0; j <= 1000001; j+=a[i]) c[j]++;
	}
	for(int i = 0; i < n; i++) {
		if(c[a[i]] == 1) ans++;
	}
	cout << ans << endl;
}
