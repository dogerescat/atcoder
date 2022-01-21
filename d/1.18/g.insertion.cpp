#include <iostream>
#include <string>
using namespace std;

int main() {
	int n; cin >> n;
	string s; cin >> s;
	int cnt = 0, pre = 0;
	for(int i = 0; i < n; i++) {
		if(s[i] == '(') cnt++;
		else {
			cnt--;
			if(cnt < 0) pre = max(pre, -cnt);
		}
	}
	for(int i = 0; i < pre; i++) s = '(' + s;
	n += pre;
	cnt = 0;
	for(int i = 0; i < n; i++) {
		if(s[i] == '(') cnt++;
		else cnt--;
	}
	for(int i = 0; i < cnt; i++) s = s + ')';
	cout << s << endl;
}
