#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    vector<int> a(n+1);
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        a[x]++;
    }
    sort(a.begin(), a.end());
    int cnt = 0;
    int index = -1;
    for(int i = 0; i <= n; i++) {
        if(index == -1 && a[i]) index = i;
        if(a[i]) cnt++;
    }
    int ans = 0;
    while(cnt > k) {
        ans += a[index];
        index++;
        cnt--;
    }
    cout << ans << endl;
}