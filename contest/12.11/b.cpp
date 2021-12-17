#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	int n; cin >> n;
	map<string, int> m;
	for(int i = 0; i < n; i++) {
		string s; cin >> s;
		m[s]++;
	}
	int cnt = 0;
	string ans = "";
	for(auto i : m) {
		if(cnt < i.second) {
			ans = i.first;
			cnt = i.second;
		}
	}
	cout << ans << endl;
}
