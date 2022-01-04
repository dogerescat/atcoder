#include <iostream>
#include <complex>
#include <cmath>
using namespace std;
using C = complex<double>;

C inC() {
	double a, b; cin >> a >> b;
	return C(a, b);
}

int main() {
	int n; cin >> n;
	C s = inC();
	C t = inC();
	C o = (s+t)/2.0;
	double Pi = acos(-1);
	double red = 2 * Pi / n;
	C r(cos(red), sin(red));
	C ans = o + (s - o) * r;
	printf("%.10f %.10f\n", ans.real(), ans.imag());
	return 0;
}
