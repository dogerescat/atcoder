#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


const double PI = acos(-1);
int main() {
	double a, b, x; cin >> a >> b >> x;
	double ans = 0;
	double s = x / a;
	if(2 * x > a * a * b) {
		double h = 2 * (b  - s/a);
		ans = atan2(h, a);	
	} else {
		double c = 2 * s / b;
		ans = atan2(b, c);
	}
	ans = ans / PI * 180;
	cout << fixed << setprecision(10) << ans << endl;
}
