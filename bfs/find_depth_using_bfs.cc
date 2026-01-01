#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n + 1);
    vector<vector<int>> adj(n + 1);
    vector<int> roots;

    for (int i = 1; i <= n; i++) {
        cin >> p[i];
        if (p[i] == -1) {
            roots.push_back(i);
        } else {
            adj[p[i]].push_back(i);
        }
    }

    int maxDepth = 0;

    for (int root : roots) {
        queue<pair<int,int>> q;
        q.push({root,1}); // root depth = 1
        while(!q.empty()){
            auto [u,d] = q.front(); q.pop();
            maxDepth = max(maxDepth,d);
            for(int v : adj[u]){
                q.push({v,d+1});
            }
        }
    }

    cout << maxDepth << endl;

    return 0;
}
