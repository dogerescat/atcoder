#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main() {
	int n, w; cin >> n >> w;
	vector<ll> a(200001);
	for(int i = 0; i < n; i++) {
		int s, t; ll p; cin >> s >> t >> p;
		a[s] += p; a[t] -= p;
	}
	for(int i = 1; i < 200001; i++) {
		a[i] += a[i-1];	
	}
	for(int i = 0; i < 200001; i++) {
		if(a[i] > w) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
}
