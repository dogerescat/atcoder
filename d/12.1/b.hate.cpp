#include <iostream>
using namespace std;
using ll = long long;

int main() {
	int x; cin >> x;
	for(int a = -118; a <= 119; a++) {
		for(int b = -118; b <= 119; b++) {
			ll A = a, B = b;
			for(int i = 1; i < 5; i++) {
				A *= a;
				B *= b;
			}
			if(A - B == x) {
				cout << a << " " << b << endl;
				return 0;
			}
		}
	}
}
