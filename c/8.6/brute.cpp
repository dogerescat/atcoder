#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<string> s;
    for(int c = 0; c <= n; c++) {
        for(int b = 0; b <= n-c; b++) {
            int a = n - c - b;
            vector<char> p;
            for(int i = 0; i < a; i++) p.push_back('a');
            for(int i = 0; i < b; i++) p.push_back('b');
            for(int i = 0; i < c; i++) p.push_back('c');
            do {
                string ss = "";
                for(int i = 0; i < p.size(); i++) {
                    ss += p[i];
                }
                s.push_back(ss);
            } while(next_permutation(p.begin(), p.end()));
        }
    }
    sort(s.begin(), s.end());
    for(auto i : s) {
        cout << i << endl;
    }
}