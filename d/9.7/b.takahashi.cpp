#include <bits/stdc++.h>
using namespace std;
using Graph = vector<set<int>>;

vector<int> ans;
// void func(Graph &G, vector<bool> &seen, int cur) {
//     bool ok = false;
//     int v;
//     for(auto i : G[cur]) {
//         if(seen[i]) continue;
//         else {
//             ok = true;
//             v = i;
//             break;
//         }
//     }
//     if(!ok) {
//         if(cur == 1) return;

//     }
//     seen[v] = true;
//     ans.push_back(v+1);
//     func(G, seen, v);
//     return;
// }

int main() {
    int n; cin >> n;
    Graph G(n);
    for(int i = 0; i < n-1; i++) {
        int a, b; cin >> a >> b;
        G[a-1].insert(b-1);
        G[b-1].insert(a-1);
    }
    vector<bool> seen(n);
    stack<int> st;
    st.push(0);
    int prev = 0;
    while (!st.empty()) {
        int v = st.top();
        st.pop();
        bool ok = false;
        for(auto i : G[v]) {
            if(seen[i]) continue;
            st.push(i);
            ans.push_back(i+1);
            ok = true;
        }
        if(!ok) {
            if(v == 0) {
                ans.push_back(1);
                break;
            } else {
                st.push(prev);
                ans.push_back(prev+1);
            }
        }
        prev = v;
    }
    for(auto i : ans) cout << i << endl;
    // ans.push_back(1);
    // seen[0] = true;
    // func(G, seen, 0);
}