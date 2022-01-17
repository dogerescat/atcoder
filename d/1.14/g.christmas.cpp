#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

ll f(vector<ll> &a, vector<ll> &p, ll n, ll x) {
	if(n == 0) {
		if(x <= 0) return 0;
		else return 1;
	}
	if(x == 1) return 0;	
	else if(1 < x && x <= a[n-1]+1) return f(a, p, n-1, x-1);
	else if(a[n-1] + 2 == x) return p[n-1]+1;
	else if(a[n-1] + 2 < x && x <= 2 * a[n-1] + 2) return f(a, p, n-1, x - a[n-1] - 2) + p[n-1] + 1;
	else return 2 * p[n-1] + 1;
}
int main() {
	ll n, x; cin >> n >> x;
	vector<ll> a(n+1), p(n+1);	
	a[0] = 1, p[0] = 1;
	for(int i = 1; i <= n; i++) {
		a[i] = 2 * a[i-1] + 3;
		p[i] = 2 * p[i-1] + 1;
	}
	cout << f(a, p, n, x) << endl;	
}
