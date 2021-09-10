#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];
    set<string> hash(s.begin(), s.end());
    for(string i : s) {
        if(hash.count("!"+i)){
            cout << i << endl;
            return 0;
        }
    }
    cout << "satisfiable" << endl;
}