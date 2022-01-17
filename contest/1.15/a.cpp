#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a; cin >> a;
	vector<int> b(3);
	for(int i = 0; i < 3; i++) {
		b[i] = a % 10;
		a /= 10;
	}
	int x = 1;
	int ans = 0;
	for(int i = 0; i < 3; i++) {
		int total = 0;
		for(int j = 0; j < 3; j++) {
			total += b[j];	
		}	
		ans += total * x;
		x *= 10;
	}
	cout << ans << endl;
}
