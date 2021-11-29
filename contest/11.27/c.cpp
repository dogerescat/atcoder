#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

template<class T> void chmax(T &a, T b) {
	if(a < b) a = b;
}
int main() {
	int n, w; cin >> n >> w;
	vector<int> a(n);
	vector<int> b(n);
	for(int i = 0; i < n; i++) cin >> a[i] >> b[i];
	vector<vector<ll>> dp(n+1, vector<ll> (1001));
	
}
