#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	vector<double> p(n);
	for(int i = 0; i < n; i++) cin >> p[i];
	double ans = 0;
	double total = 0;
	int right = 0;
	for(int left = 0; left <= n-k; left++) {
		while(right - left < k) {
			total += (p[right]*(p[right]+1) / 2) / p[right];	
			right++;
		}	
		ans = max(ans, total);
		if(left == right) right++;
		total -= (p[left] * (p[left]+1) / 2) / p[left];
	}
	cout << fixed << setprecision(10) << ans << endl;
}
