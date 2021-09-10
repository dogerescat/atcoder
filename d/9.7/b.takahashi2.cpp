#include <bits/stdc++.h>
using namespace std;
using Graph = vector<set<int>>;

vector<int> ans;
void func(Graph &G, int cur, int pre) {
    ans.push_back(cur+1);
    for(auto i : G[cur]) {
        if(i != pre) {
            func(G, i, cur);
            ans.push_back(cur+1);
        }
    }
}

int main() {
    int n; cin >> n;
    Graph G(n);
    for(int i = 0; i < n-1; i++) {
        int a, b; cin >> a >> b;
        G[a-1].insert(b-1);
        G[b-1].insert(a-1);
    }
    func(G, 0, -1);
    for(auto i : ans) cout << i << " ";
    cout << endl;
}