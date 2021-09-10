#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int, int>> red(n);
    vector<pair<int, int>> blue(n);
    for(int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        red[i].first = a;
        red[i].second = b;
    }
    for(int i = 0; i < n; i++) {
        int c, d; cin >> c >> d;
        blue[i].first = c;
        blue[i].second = d;
    }
    sort(red.begin(), red.end());
    sort(blue.begin(), blue.end());
    vector<bool> check(n, true);
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        int index = -1;
        int m = -1;
        for(int j = 0; j < n; j++) {
            if(blue[i].first < red[j].first) break;
            if(!check[j]) continue;
            if(red[j].second < blue[i].second && red[j].second > m) m = red[j].second, index = j;
        }
        if(index != -1) check[index] = false, cnt++;
    }
    cout << cnt << endl;
}