#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ans = 1000000001;
    for(int i = 0; i < n; i++) {
        int left = 0; int right = m;
        while(right - left > 1) {
            int mid = left + (right - left) / 2;
            if(a[i] >= b[mid]) {
                left = mid;
            } else { 
                right = mid;
            }
        }
        ans = min(ans, abs(a[i] - b[left]));
        ans = min(ans, abs(a[i] - b[right]));
    }
    cout << ans << endl;
}