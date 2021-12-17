#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	vector<int> x(n+1);
	for(int i = 0; i < m; i++) {
		int a, b; cin >> a >> b;
		x[a]++; x[b]++;	
	}
	bool ok = true;
	for(int i = 1; i <= n; i++) {
		if(x[i] > 2) ok = false;
	}
	if(n <= m) ok = false;	
	if(ok) cout << "Yes" << endl;
	else cout << "No" << endl;
}
