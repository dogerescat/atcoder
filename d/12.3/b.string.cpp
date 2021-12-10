#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main() {
	string s; int q; cin >> s >> q;
	bool flag = false;
	deque<char> d;
	for(auto i : s) d.push_back(i);
	for(int i = 0; i < q; i++) {
		int t; cin >> t;
		if(t == 1) {
			flag = !flag;	
		} else {
			int f; char c; cin >> f >> c;
			if(f == 1) {
				if(flag) d.push_back(c);
				else d.push_front(c);
			} else {
				if(flag) d.push_front(c);
				else d.push_back(c);
			}
		}
	}
	if(flag) reverse(d.begin(), d.end());
	for(auto i : d) {
		cout << i;
	}
	cout << endl;
}
