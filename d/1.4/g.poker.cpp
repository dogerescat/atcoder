#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;
using ll = long long;

ll f(string s) {
	ll res = 0;
	for(int i = 1; i <= 9; i++) {
		int x = 1;
		for(int j = 0; j <= 4; j++) {
			if(s[j] - '0' == i) x *= 10;
		}
		res += x * i;
	}
	return res;
}
int main() {
	int k; string s, t; cin >> k >> s >> t;
	vector<int> c(10, k);
	for(int i = 0; i < 4; i++) c[s[i] - '0']--;
	for(int i = 0; i < 4; i++) c[t[i] - '0']--;
	ll cnt = 0;
	for(int a = 1; a <= 9; a++) {
		for(int b = 1; b <= 9; b++) {
			s[4] = a + '0';		
			t[4] = b + '0';
			if(f(s) > f(t)) {
				if(a == b) cnt += (ll)c[a] * (c[a]-1);
				else cnt += (ll)c[a] * c[b];
			}
		}
	}
	ll total = 0;
	for(int i = 1; i <= 9; i++) total += c[i];
	ll tot = total * (total - 1);
	double ans = (double)cnt / tot;
	cout << fixed << setprecision(10) << ans << endl;
}
