#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
	ll k; cin >> k;
	string ans;
	while(k) {
		if(k % 2) {
			ans.push_back('2');
			k--;
		} else {
			ans.push_back('0');
		}
		k /= 2;
	}
	reverse(ans.begin(), ans.end());
	cout << ans << endl;
}
