#include <iostream>
#include <string>
#include <vector>
using namespace std;
using ll = long long;

int main() {
	int n; string s; cin >> n >> s;
	vector<int> a(n);
	for(int i = 0; i < n; i++) {
		if(s[i] == 'R') a[i] = 0;
		else if(s[i] == 'G') a[i] = 1;
		else a[i] = 2;
	}
	vector<int> cnt(3);
	for(int i = 0; i < n; i++) cnt[a[i]]++;
	ll ans = 1;
	for(int i = 0; i < 3; i++) ans *= cnt[i];
	for(int i = 0; i < n; i++) for(int j = i+1; j < n; j++) {
		int k = j + j - i;
		if(k < n) {
			if(a[i] == a[j]) continue;
			if(a[j] == a[k]) continue;
			if(a[k] == a[i]) continue;
			--ans;
		}
	}
	cout << ans << endl;
}
