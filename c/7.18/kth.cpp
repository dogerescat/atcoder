#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int k;
    cin >> s >> k;
    set<string> ss;
    for(int i = 0; i < s.size(); i++) {
        for(int j = 1; j < 6; j++) {
            ss.insert(s.substr(i, j));
        }
    }
    for(int i = 0; i < k-1; i++) {
        ss.erase(ss.begin());
    }
    auto it = ss.begin();
    cout << *it << endl;
}