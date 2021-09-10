#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n; 
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    map<int, int> cnt1;
    map<int, int> cnt2;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) cnt1[v[i]]++;
        else cnt2[v[i]]++;
    }
    int max1 = 0;
    int max11 = 0;
    int value1 = 0;
    int max2 = 0;
    int value2 = 0;
    int max22 = 0;
    for(auto i : cnt1) {
        if(max1 < i.second) {
            value1 = i.first;
            max11 = max1;
            max1 = i.second;
        } else if(max11 < i.second) {
            max11 = i.second;
        }
    }
    for(auto i : cnt2) {
        if(max2 < i.second) {
            value2 = i.first;
            max22 = max2;
            max2 = i.second;
        } else if(max22 < i.second) {
            max22 = i.second;
        }
    }
    int ans = 1000000000;
    if(value1 != value2) cout << n - max1 - max2 << endl;
    else if(cnt1.size() == 1 && cnt2.size() == 1) cout << n / 2 << endl;
    else {
        if(cnt1.size() >= 2) ans = min(ans, n - max1 - max22);
        if(cnt2.size() >= 2) ans = min(ans, n - max11 - max2);
        cout << ans << endl;
    }

}