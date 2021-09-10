#include <bits/stdc++.h>
using namespace std;

template<class T> void chmax(T& a, T b) {
    if(a < b) {
        a = b;
    }
}

int main() {
    int n; cin >> n;
    map<string,int> m;
    for(int i = 0; i < n; i++) {
        string x; cin >> x;
        m[x]++;
    };
    int M = 0;
    for(auto &i : m) {
        chmax(M, i.second);
    }
    for(auto &i : m) {
        if(i.second == M) {
            cout << i.first << endl;
        }
    }
}
