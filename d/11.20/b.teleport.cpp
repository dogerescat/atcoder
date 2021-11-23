#include <iostream>
#include <vector>
#include <set>
#include <utility>
using namespace std;

int gcd(int a, int b) {
	return !b ? a : gcd(b, a%b);
}
int main() {
	int n; cin >> n;
	vector<int> x(n);
	vector<int> y(n);
	for(int i = 0; i < n; i++) cin >> x[i] >> y[i];
	set<pair<int, int>> s;
	for(int i = 0; i < n; i++) {
		for(int j = i+1; j < n; j++) {
			int X = x[j] - x[i];
			int Y = y[j] - y[i];
			int m = gcd(X, Y);
			s.insert(make_pair(X/m, Y/m));
		}
	}
	cout << s.size() * 2 << endl;
}
