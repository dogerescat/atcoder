#include <iostream>

using namespace std;

int main() {
	int s, t, x; cin >> s >> t >> x;
	if(s > t) {
		s++, t++, x++;
		s = s % 24;
		t = t % 24;
		x = x % 24;
	}
	if(x >= s && x < t) cout << "Yes" << endl;
	else cout << "No" << endl;
}
