#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        a[i].first = x;
        a[i].second = y;
    }
    sort(a.begin(), a.end());
    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i].first < a[j].first && a[i].second < a[j].second) {
                if(binary_search(a.begin(), a.end(), make_pair(a[i].first, a[j].second)) && 
                binary_search(a.begin(), a.end(), make_pair(a[j].first, a[i].second))) ans++;
            }
        }
    }
    cout << ans << endl;
}