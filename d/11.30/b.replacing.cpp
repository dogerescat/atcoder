#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
	int n, q; cin >> n;
	vector<int> a(100001);
	for(int i = 0; i < n; i++) {
		int x; cin >> x;
		a[x]++;
	}
	ll ans = 0;
	for(int i = 0; i < 100001; i++) ans += a[i] * i;
	cin >> q;
	for(int i = 0; i < q; i++) {
		int b, c; cin >> b >> c;
		ans += (c - b) * a[b];
		a[c] += a[b];
		a[b] = 0;
		cout << ans << endl;
	}
}
