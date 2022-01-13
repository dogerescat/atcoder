#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	string s; cin >> s;
	vector<int> num;	
	int now = 1;
	int cnt = 0;
	for(int i = 0; i < n; i++) {
		if(s[i] == (char)('0' + now)) {
			cnt++;
		} else {
			num.push_back(cnt);
			now = 1 - now;
			cnt = 1;
		}
	}
	if(cnt != 0) num.push_back(cnt);
	if(num.size() % 2 == 0) num.push_back(0);
	int add = 2 * k + 1;
	int ans = 0;
	for(int i = 0; i < num.size(); i += 2) {
		int tmp = 0;
		int left = i;
		int right = min(add + i, (int)num.size());
		for(int j = left; j < right; j++) {
			tmp += num[j];
		}
		ans = max(tmp, ans);
	}
	cout << ans << endl;
}
