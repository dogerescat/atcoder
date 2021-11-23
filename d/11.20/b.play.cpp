#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, q; cin >> n >> q;
	vector<int> front(n+1, -1);
	vector<int> back(n+1, -1);
	for(int i = 0; i < q; i++) {
		int t; cin >> t;
		int x, y;
		if(t == 1) {
			cin >> x >> y;
			back[x] = y;
			front[y] = x;
		} else if(t == 2) {
			cin >> x >> y;
			back[x] = -1;
			front[y] = -1;

		} else {
			cin >> x;
			vector<int> ans;
			while(front[x] != -1) x = front[x];
			ans.push_back(x);
			while(back[x] != -1) {
				x = back[x];
				ans.push_back(x);
			}
			cout << ans.size() << " ";
			for(int i = 0; i < ans.size(); i++) {
				cout << ans[i] << " ";
			}
			cout << endl;
		}
	}
}
