#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; int k;
    cin >> s >> k;
    set<string> a;
    for(int i = 0; i < s.size(); i++) {
        for(int j = 1; j < 6; j++) {
            a.insert(s.substr(i, j));
        }
    }
    vector<string> ans;
    for(auto i : a) {
        ans.push_back(i);
    }
    cout << ans[k-1] << endl;
}