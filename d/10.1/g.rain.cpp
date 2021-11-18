#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int n; cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<ll> x(n);
    for(int i = 0; i < n; i++) {
        if(i%2 == 0) x[0] += a[i];
        else x[0] -= a[i];
    }
    for(int i = 1; i < n; i++) {
        x[i] = 2 * a[i-1] - x[i-1];
    }
    for(int i = 0; i < n; i++) {
        cout << x[i] << " ";
    }
	cout << endl;	
}
