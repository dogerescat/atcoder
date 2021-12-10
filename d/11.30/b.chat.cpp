#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a.begin(), a.end(), greater<int> ());
	ll ans = a[0];
	int j = (n-1) / 2; 
	bool flag = false;
	if((n-2) % 2 == 1) flag = true;
	for(int i = 1; i <= j; i++) {
		if(i == j && flag) ans += a[i];	
		else ans += 2 * a[i];
	}
	cout << ans << endl;
}
