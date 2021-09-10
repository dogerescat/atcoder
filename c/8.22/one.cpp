#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; int k;
    cin >> s >> k;
    sort(s.begin(), s.end());
    set<string> S;
    int i = 0;
    do { 
        cout << s << endl;
        if(S.count(s) == 0) {
            S.insert(s);
            i++;
        }
        if(i == k) {
            cout << s << endl;
            return 0;
        }
    } while (next_permutation(s.begin(), s.end()));
}