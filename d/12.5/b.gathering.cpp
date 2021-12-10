#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string s; cin >> s;
	int n = s.size();
	vector<int> ans(n);
	vector<int> R(n);
	vector<int> L(n);
	R[0] = 1;
	for(int i = 1; i < n; i++) {
		if(s[i] == 'R')	R[i] = R[i-1] + 1, R[i-1] = 0;	
	}
	L[n-1] = 1;
	for(int i = n-2; i >= 0; i--) {
		if(s[i] == 'L') L[i] = L[i+1] + 1, L[i+1] = 0;
	}
	for(int i = 0; i < n; i++) {
		if(R[i]) {
			ans[i] += (R[i] + 1) / 2;
			ans[i+1] += R[i] / 2;
		}
		if(L[i]) {
			ans[i] += (L[i] + 1) / 2;
			ans[i-1] += L[i] / 2;
		}
	}
	for(int i = 0; i < n; i++) {
		cout << ans[i] << " ";
	}
	cout << endl;
}
