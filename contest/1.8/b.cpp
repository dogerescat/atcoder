#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> x(n);
	vector<int> y(n);
	for(int i = 0; i < n; i++) cin >> x[i] >> y[i];
	double ans = 0;
	for(int i = 0; i < n; i++) {
		for(int j = i+1; j < n; j++) {
			double a = x[i] - x[j], b = y[i] - y[j];
			double total = sqrt(a * a + b * b);
			ans = max(ans, total);
		}
	}
	cout << fixed << setprecision(10) << ans << endl;
}
