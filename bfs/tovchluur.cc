#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    if(n >= m) {
        cout << n - m << "\n";
        return 0;
    }

    queue<pair<int,int>> q;
    set<int> visited;
    q.push({n, 0});
    visited.insert(n);

    while(!q.empty()) {
        auto [curr, steps] = q.front();
        q.pop();

        if(curr == m) {
            cout << steps << "\n";
            return 0;
        }

        // Улаан товчлуур (2 дахин)
        if(curr * 2 <= 2 * m && visited.find(curr * 2) == visited.end()) {
            q.push({curr * 2, steps + 1});
            visited.insert(curr * 2);
        }

        // Цэнхэр товчлуур (-1)
        if(curr - 1 > 0 && visited.find(curr - 1) == visited.end()) {
            q.push({curr - 1, steps + 1});
            visited.insert(curr - 1);
        }
    }

    return 0;
}
