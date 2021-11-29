#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string a, b; cin >> a >> b;
	int n = min(a.size(), b.size());
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	bool flag = true;
	for(int i = 0; i < n; i++) {
		int x = (a[i] - '0') + (b[i] - '0');
		if(x >= 10) flag = false;
	}	
	if(flag) cout << "Easy" << endl;
	else cout << "Hard" << endl;
}
