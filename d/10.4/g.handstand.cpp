#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    vector<int> a;
    if(s[0] == '0') a.push_back(0);
    for(int i = 0; i < n;) {
        int j = i;
        while(j < s.size() && s[i] == s[j]) j++;
        a.push_back(j - i);
        i = j;
    }
    if(s.back() == '0') a.push_back(0);
    vector<int> sum(a.size()+1);
    for(int i = 0; i < a.size(); i++) sum[i+1] =  sum[i] + a[i];

    int ans = 0;
    for(int left = 0; left < a.size(); left += 2) {
        int right = left + 2 * k + 1;
        if(right >= sum.size()) right = sum.size() - 1;
        ans = max(ans, sum[right] - sum[left]);
    }
    cout << ans << endl;
}