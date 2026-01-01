#include <bits/stdc++.h>
using namespace std;

void bfs(int start, const vector<vector<int>>& adj) {
    int n = adj.size();
    vector<int> depth(n, -1);
    queue<int> q;

    depth[start] = 0;
    q.push(start);

    while (!q.empty()) {
        int u = q.front(); q.pop();

        for (int v : adj[u]) {
            if (depth[v] == -1) {
                depth[v] = depth[u] + 1;
                q.push(v);
            }
        }
    }

    for (int i = 1; i < n; i++) {
        cout << "node " << i << " depth = " << depth[i] << "\n";
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> p(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }

    vector<vector<int>> adj(n + 1);

    int root = -1;
    for (int i = 1; i <= n; i++) {
        if (p[i] == -1) root = i;
        else adj[p[i]].push_back(i);
    }

    bfs(root, adj);
    return 0;
}
