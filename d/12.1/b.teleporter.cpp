#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
	int n; ll k; cin >> n >> k;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	vector<int> s;
	vector<int> ord(n+1, -1);
	int v = 0;
	while(ord[v] == -1) {
		ord[v] = s.size();
		s.push_back(v);
		v = a[v]-1;
	}
	int c = s.size() - ord[v];
	int l = ord[v];
	if(k < l) cout << s[k]+1 << endl;
	else {
		k -= l;
		k %= c;
		k += l;
		cout << s[k]+1 << endl;
	}
}
