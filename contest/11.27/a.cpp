#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> x = {-1, 0, 1, 0};
vector<int> y = {0, -1, 0, 1};
int main() {
	vector<vector<char>> s(4, vector<char> (4, '.'));
	for(int i = 1; i < 3; i++) for(int j = 1; j < 3; j++) cin >> s[i][j];
	for(int i = 1; i < 3; i++) {
		for(int j = 1; j < 3; j++) {
			bool flag = false;
			for(int k = 0; k < 4; k++) {
				if(s[i][j] == '#' && s[i+y[k]][j+x[k]] == '#') flag = true;
			}
			if(flag) {
				cout << "Yes" << endl;
				return 0;
			}
		}
	}
	cout << "No" << endl;
}
