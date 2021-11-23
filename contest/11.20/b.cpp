#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, x; cin >> n >> x;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	vector<int> b(n);
	x--;
	while(!b[x]) {
		b[x] = 1;
		x = a[x]-1;
	}
	int ans = 0;
	for(int i = 0; i < n; i++) if(b[i]) ans++;
	cout << ans << endl;
}
