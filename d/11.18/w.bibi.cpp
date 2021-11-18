#include <iostream>
using namespace std;
using ll = long long;

int main() {
	ll n; cin >> n;
	int depth = 0;
	for(ll i = n; i > 1; i /= 2, depth++);
	if(depth % 2 == 0) {
		if(n == 1) {
			cout << "Aoki" << endl;
			return 0;
		}
		bool player = true;
		ll x = 1;
		while(x <= n) {
			if(player) x = x * 2 + 1;
			else x = x * 2;
			player = !player;
		}
		if(player) cout << "Takahashi" << endl;
		else cout << "Aoki" << endl;
		
	} else {
		bool player = true;
		ll x = 1;
		while(x <= n) {
			if(player) x = x * 2;
			else x = x * 2 + 1;
			player = !player;
		}
		if(player) cout << "Takahashi" << endl;
		else cout << "Aoki" << endl;
	}	
	
}
