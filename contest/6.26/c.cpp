#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> L(n);
    vector<int> R(n);
    for(int i = 0; i < n; i++) {
        int t, l, r; cin >> t >> l >> r;
        if(t == 1) L[i] = l, R[i] = r;
        else if(t == 2) L[i] = l, R[i] = r+1; 
        else if(t == 3) L[i] = l+1, R[i] = r;
        else if(t == 4) L[i] = l+1, R[i] = r+1;
    }
    int ans = 0;
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(L[i] <= L[j] && R[i] >= L[j]) {
                ans++;
            } else if(L[i] <= R[j] && R[i] >= R[j]) {
                ans++;
            } else if(L[i] >= L[j] && R[i] <= R[j]) {
                ans++;
            } else if(L[i] <= L[j] && R[i] >= L[j] && R[i] >= R[j] && L[i] <= R[j]) {
                ans++;
            }
        }
    }
    cout << ans << endl;
}