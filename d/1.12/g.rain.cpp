#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	bool plas = true;
	ll x = 0;
	for(int i = 0; i < n; i++) {
		if(plas) x += a[i];	
		else x -= a[i];
		plas = !plas;
	}
	x /= 2;
	vector<ll> ans(n);
	ans[0] = x;
	for(int i = 1; i < n; i++) {
		ans[i] = a[i-1] - ans[i-1];
	}
	for(int i = 0; i < n; i++) {
		cout << 2 * ans[i] << " ";
	}
	cout << endl;
}
