#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	map<int, int> m;
	for(int i = 0; i < n; i++) m[a[i]]++;
	int ans = m.size();
	int even = 0;
	for(auto i : m) {
		if(i.second % 2 == 0) even++;	
	}
	if(even % 2 != 0) --ans;
	cout << ans << endl;
}
