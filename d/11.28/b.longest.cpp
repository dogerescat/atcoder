#include <iostream>
#include <string>
using namespace std;

template <class T> void chmax(T& a, T b) {
	if(a < b) a = b;
}

int main() {
	string s; int k; cin >> s >> k;
	int right = 0;
	int n = s.size();
	int cnt = 0;
	int ans = 0;
	for(int left = 0; left < n; left++) {
		while(right < n && cnt <= k) {
			if(cnt == k && s[right] == '.') break;
			if(s[right] == '.') cnt++;
			right++;
		}
		chmax(ans, right - left);
		if(left == right) right++;
		if(s[left] == '.' && cnt > 0) cnt--;
	}
	cout << ans << endl;
}
