#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
	int n, m; cin >> n >> m;
	Graph T(n, vector<int> (n));
	for(int i = 0; i < m; i++) {
		int a, b; cin >> a >> b;
		--a, --b;
		T[a][b] = T[b][a] = 1;	
	}
	Graph A(n, vector<int> (n));
	for(int i = 0; i < m; i++) {
		int a, b; cin >> a >> b;
		--a, --b;
		A[a][b] = A[b][a] = 1;
	}
	vector<int> x(n);
	iota(x.begin(), x.end(), 0);
	do {
		Graph G(n, vector<int> (n));
		for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) G[i][j] = A[x[i]][x[j]];
		if(T == G) {
			cout << "Yes" << endl;
			return 0;
		}
	} while(next_permutation(x.begin(), x.end()));
	cout << "No" << endl;
}
