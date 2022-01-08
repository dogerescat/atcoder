#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	vector<int> p(n);
	for(int i = 0; i < n; i++) cin >> p[i];
	vector<int> a(n+1);
	vector<int> ans(n+1);
	int x = n - k + 1;
	for(int i = n; i >= k; i--) {
		while(a[x]) {
			x--;
		}
		ans[i] = x;	
		if(p[i-1] > x) x--; 
		a[p[i-1]] = 1;
	}
	for(int i = k; i <= n; i++) {
		cout << ans[i] << endl;	
	}
}
