#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
template<class T> void chmax(T &a, T b) {
	if(a < b) a = b;
}
int main() {
	ll n, k; cin >> n >> k;
	vector<ll> s(n);
	for(int i = 0; i < n; i++) cin >> s[i];
	for(int i = 0; i < n; i++) {
		if(s[i] == 0) {
			cout << n << endl;
			return 0;
		}
	}
	int ans = 0;
	int right = 0;
	ll total = 1;
	for(int left = 0; left < n; left++) {
		while(right < n && total * s[right] <= k) {
			total *= s[right];
			right++;
		}
		chmax(ans, right - left);
		if(left == right) right++;
		else total /= s[left];
	}		
	cout << ans << endl;
}
