#include <bits/stdc++.h>
using namespace std;

int main() {
    int k; string s, t; cin >> k >> s >> t;
    vector<int> taka(10);
    vector<int> aoki(10);
    for(int i = 0; i < 4; i++) {
        taka[s[i]-'0']++;
        aoki[t[i]-'0']++;
    }
    
}