#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string s; cin >> s;
	int n = s.size();
	vector<int> a(10);
	for(int i = 0; i < n; i++) {
		a[s[i] - '0']++;
	}
	for(int i = 8; i < 1000; i += 8) {
		vector<int> b = a;
		int x = i;
		int cnt = 0;
		bool flag = true;
		while(x) {
			int y = x % 10;
			if(!b[y]) {
				flag = false;
				break;
			}
			else {
				b[y]--;
			}
			cnt++;
			x /= 10;
		}
		
		if(cnt != 3) {
			for(int i = 1; i <= 9; i++) {
				if(b[i]) flag = false;
			}
		}
		if(flag) {
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
}
