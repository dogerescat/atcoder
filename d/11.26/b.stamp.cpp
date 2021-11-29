#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	vector<int> a(m+2);	
	for(int i = 1; i <= m; i++) cin >> a[i];
	a[m+1] = n+1;
	sort(a.begin(), a.end());
	int mi = 1001001001;
	for(int i = 1; i <= m + 1; i++) if(a[i] - a[i-1] - 1 > 0) mi = min(mi, a[i] - a[i-1] - 1);
	int ans = 0;
	for(int i = 1; i <= m + 1; i++) {
		ans = ans + (a[i] - a[i-1] - 1 + mi - 1) / mi;
	}
	if(n == m) cout << 0 << endl;
	else if(m == 0) cout << 1 << endl;
	else cout << ans << endl;
}
