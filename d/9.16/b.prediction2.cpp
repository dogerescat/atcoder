#include <bits/stdc++.h>
using namespace std;

template<class T> void chmax(T &a, T b) {
    if(a < b) a = b;
}

int main() {
    int n, k;
    string t;
    vector<int> jan(3);
    cin >> n >> k >> jan[0] >> jan[1] >> jan[2] >> t;
    vector<string> v(k+1);
    for(int i = 0; i < n; i++) {
        v[i%k] += t[i];
    }
    int ans = 0;
    for(int i = 0; i < k; i++) {
        char prev = ' ';
        int cnt = 0;
        int total = 0;
        for(auto j : v[i]) {
            if(prev != j) {    
                if(prev == 'r') total += ((cnt + 1) / 2) * jan[2];
                else if(prev == 's') total += ((cnt + 1) / 2) * jan[0];
                else if(prev == 'p') total += ((cnt + 1) / 2) * jan[1];
                prev = j;
                cnt = 0;                
            }
            cnt++;
        }
        if(prev == 'r') total += ((cnt + 1) / 2) * jan[2];
        else if(prev == 's') total += ((cnt + 1) / 2) * jan[0];
        else if(prev == 'p') total += ((cnt + 1) / 2) * jan[1];        
        ans += total;
    }
    cout << ans << endl;
}