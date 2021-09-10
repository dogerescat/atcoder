#include <bits/stdc++.h>
using namespace std;

struct sort_pred {
    bool operator()(const std::pair<int,int> &left, const std::pair<int,int> &right) {
        return left.second < right.second;
    }
};

int main() {
    int h, w, n; cin >> h >> w >> n;
    vector<pair<int, int>> a(n);
    vector<pair<int, int>> b(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i].first >> b[i].first;
        a[i].second = i + 1;
        b[i].second = i + 1;        
    }
    vector<pair<int, int>> ans(n);
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    vector<int> aa(n+1);
    vector<int> bb(n+1);
    aa[0] = a[0].first - 1;
    for(int i = 1; i < n+1; i++) {
        a[i-1].first -= aa[i-1];
        aa[i] = aa[i-1] + a[i].first - a[i-1].first;
    }
    bb[0] = b[0].first - 1;
    for(int i = 1; i < n+1; i++) {
        b[i-1].first -= bb[i-1];
        bb[i] = bb[i-1] + b[i].first - b[i-1].first;
    }
    sort(a.begin(), a.end(), sort_pred());
    sort(b.begin(), b.end(), sort_pred());
    for(int i = 0; i < n; i++) {
        cout << a[i].second << ' ' << b[i].second << endl;
    }
}