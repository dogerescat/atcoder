#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a.begin(), a.end());
	int x = a.back();
	a.pop_back();
	int t = (x + 1) / 2;
	int s = 1001001001;
	int y = 0;
	for(int i = 0; i < n-1; i++) {
		if(s > abs(t - a[i])) {
			s = abs(t-a[i]);
			y = a[i];
		}	
	}	
	cout << x << " " << y << endl;
}
