#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> p(n+1);
	for(int i = 0; i < n; i++) cin >> p[i];
	int ans = 0;
	int cnt = 0;
	for(int i = 0; i <= n; i++) {
		if(p[i] == i+1) cnt++;
		else {
			ans += cnt / 2;
			ans += cnt % 2;
			cnt = 0;
		}
	}	
	cout << ans << endl;
}
