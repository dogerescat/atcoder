#include <bits/stdc++.h>
using namespace std;
using ll  = long long;


int main() {
    int K; string s, t; cin >> K >> s >> t;
    vector<ll> taka(10);
    vector<ll> aoki(10);
    vector<ll> card(10, K);
    for(int i = 0; i < 4; i++) {
        taka[s[i]-'0']++;
        aoki[t[i]-'0']++;
        card[s[i]-'0']--;
        card[t[i]-'0']--;
    }
    ll bunbo = K * 9 - 8;
    bunbo = bunbo * (bunbo-1);
    ll cnt = 0;
    for(int i = 1; i <= 9; i++) {
        for(int j = 1; j <= 9; j++) {
            vector<ll> a = taka;
            vector<ll> b = aoki;
            vector<ll> c = card;
            if(!c[i]) continue;
            c[i]--;
            a[i]++;
            if(!c[j]) continue;
            c[j]--;
            b[j]++;
            int A = 0;
            int B = 0;
            for(ll k = 1; k <= 9; k++) {
                ll x = 1;
                ll y = 1;
                for(int l = 0; l < a[k]; l++) {
                    x *= 10;
                }
                for(int m = 0; m < b[k]; m++) {
                    y *= 10;
                }
                A += k * x;
                B += k * y;
            }
            if(A > B) {
                if(i == j) cnt += (card[i] * (card[j]-1));
                else cnt += card[i] * card[j];
            } 
        }
    }
    cout << fixed << setprecision(10) << (double)cnt / bunbo << endl;
}