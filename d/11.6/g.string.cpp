#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t; cin >> s >> t;
    vector<int> start(26, -1);
    vector<int> goal(26, -1);
    for(int i = 0; i < s.size(); i++) {
        int c1 = s[i] - 'a';
        int c2 = t[i] - 'a';
        if(start[c1] != -1 || goal[c2] != -1) {
            if(start[c1] != c2 || goal[c2] != c1) {
                cout << "No" << endl;
                return 0;
            }
        } else {
            start[c1] = c2;
            goal[c2] = c1;
        }
    }
    cout << "Yes" << endl;
}