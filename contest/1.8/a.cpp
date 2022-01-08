#include <iostream>
using namespace std;

int f(int t) {
	int res = t * t + 2 * t + 3;
	return res;
}
int main() {
	int t; cin >> t;
	int ans = f(f(f(t) + t) + f(f(t)));
	cout << ans << endl;
}
