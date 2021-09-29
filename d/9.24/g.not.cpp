#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> ans(1000001);
    for(int i = 0; i < n; i++) {
        int j = 1;
        while(a[i] * j < 1000001) {
            ans[a[i]*j]++;
            if(j == 1 && ans[a[i]*j] > 1) break;
            j++;
        }
    }
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(ans[a[i]] <= 1) cnt++;
    }
    cout << cnt << endl;
}