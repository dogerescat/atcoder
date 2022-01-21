#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string x; cin >> x;
	int n = x.size();
	string ans;
	int total = 0;
	for(int i = 0; i < n; i++) {
		total += (x[i] - '0');
	}
	int up = 0;
	for(int i = n-1; i >= 0; i--) {
		up += total;
		char c = (up % 10) + '0';
		ans.push_back(c);	
		total -= (x[i] - '0');
		up /= 10;
	}
	while(up) {
		char c = (up % 10) + '0';
		ans.push_back(c);
		up /= 10;
	}
	reverse(ans.begin(), ans.end());
	cout << ans << endl;
}
