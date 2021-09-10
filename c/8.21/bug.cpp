#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

bool func(Graph &t, int n, int k, int cur, int value) {
    if(n == cur) {
        if(value == 0) return false;
        else return true;
    }
    for(int i = 0; i < k; i++) {
        if(!func(t, n, k, cur+1, value ^ t[cur][i])) return false;
    }
    return true;
}

int main() {
    int n, k; cin >> n >> k;
    vector<vector<int>> t(n, vector<int>(k));
    for(int i = 0; i < n; i++) for(int j = 0; j < k; j++) {
        cin >> t[i][j];
    }
    bool ok = true;
    for(int i = 0; i < k; i++) {
        if(!func(t, n, k, 1, t[0][i])) ok = false;
    }
    if(ok) cout << "Nothing" << endl;
    else cout << "Found" << endl;
}