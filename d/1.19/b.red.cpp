#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	int total = 0;
	for(int i = 0; i < n; i++) total ^= a[i];
	for(int i = 0; i < n; i++) {
		int ans = total ^ a[i];
		cout << ans << " ";
	}	
	cout << endl;
}
